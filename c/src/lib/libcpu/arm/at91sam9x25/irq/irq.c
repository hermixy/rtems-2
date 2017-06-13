/*
 * shoonis AT91SAM9G25 
 * baconxu@gmail.com 
 */
#include <rtems/score/armv4.h>
#include <bsp.h>
#include <bsp/irq.h>
#include <bsp/irq-generic.h>

#include <at91sam9x25.h>

void bsp_interrupt_dispatch(void)
{
	rtems_vector_number vector = AIC->AIC_IVR;
    #if 0//debug interrupt, bacon add it.
         //baconxu@gmail.com
    if (vector > 1) {
        uint32_t ipr;
        uint32_t mask;
    
        ipr = AIC->AIC_IPR;
        mask = AIC->AIC_IMR;
        printk("%X %X\n", ipr, mask);
    }
    #endif
    bsp_interrupt_handler_dispatch(vector);

	AIC->AIC_EOICR = 0xFF;
}

rtems_status_code bsp_interrupt_vector_enable(rtems_vector_number vector)
{
	AIC->AIC_IECR = 1 << vector;

	return RTEMS_SUCCESSFUL;
}

rtems_status_code bsp_interrupt_vector_disable(rtems_vector_number vector)
{
	AIC->AIC_IDCR = 1 << vector;
	
	return RTEMS_SUCCESSFUL;
}

rtems_status_code bsp_interrupt_facility_initialize(void)
{
	unsigned long i = 0;
	
	for (i = 0; i < 32; ++i) {
		AIC->AIC_SVR[i] = i;
	}
	
	/* disable all interrupts */
	AIC->AIC_IDCR = 0xFFFFFFFF;
	
	_CPU_ISR_install_vector(ARM_EXCEPTION_IRQ, _ARMV4_Exception_interrupt, NULL);
	
	return RTEMS_SUCCESSFUL;
}

void bsp_interrupt_handler_default(rtems_vector_number vector)
{
	printk("spurious interrupt: %u\n", vector);
}
