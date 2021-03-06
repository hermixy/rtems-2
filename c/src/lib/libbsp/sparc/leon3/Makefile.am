ACLOCAL_AMFLAGS = -I ../../../../aclocal

include $(top_srcdir)/../../../../automake/compile.am

include_bspdir = $(includedir)/bsp

dist_project_lib_DATA = bsp_specs

include_HEADERS = include/bsp.h
include_HEADERS += include/tm27.h
include_bsp_HEADERS = ../../sparc/shared/include/debug_defs.h

nodist_include_HEADERS = include/bspopts.h
nodist_include_bsp_HEADERS = ../../shared/include/bootcard.h
DISTCLEANFILES = include/bspopts.h

noinst_PROGRAMS =

include_HEADERS += include/leon.h
include_HEADERS += ../../shared/include/coverhd.h

noinst_LIBRARIES = libbspstart.a
libbspstart_a_SOURCES = ../../sparc/shared/start/start.S
project_lib_DATA = start.$(OBJEXT)

dist_project_lib_DATA += ../shared/startup/linkcmds.base
dist_project_lib_DATA += startup/linkcmds
dist_project_lib_DATA += startup/linkcmds.leon3
dist_project_lib_DATA += startup/linkcmds.ngmp

noinst_LIBRARIES += libbsp.a
libbsp_a_SOURCES =

# startup
libbsp_a_SOURCES += startup/bspclean.c
libbsp_a_SOURCES += \
    ../../shared/bootcard.c startup/bspstart.c \
    startup/bsppredriver.c \
    ../../sparc/shared/startup/bspgetworkarea.c ../../shared/sbrk.c \
    startup/setvec.c \
    startup/spurious.c startup/bspidle.S startup/bspdelay.c
libbsp_a_SOURCES += startup/cpucounter.c
libbsp_a_SOURCES += ../../sparc/shared/startup/bsp_fatal_exit.c
libbsp_a_SOURCES += startup/bsp_fatal_halt.c

# ISR Handler
libbsp_a_SOURCES += ../../sparc/shared/cpu.c
libbsp_a_SOURCES += ../../sparc/shared/irq_asm.S
# gnatsupp
libbsp_a_SOURCES += gnatsupp/gnatsupp.c ../../sparc/shared/gnatcommon.c
include_bsp_HEADERS += ../shared/include/gnatcommon.h
# AMBA bus
include_HEADERS += include/amba.h
include_HEADERS += ../../sparc/shared/include/ambapp.h
include_HEADERS += ../../sparc/shared/include/ambapp_ids.h
include_HEADERS += ../../sparc/shared/include/grlib.h
include_bsp_HEADERS += ../../sparc/shared/include/ahbstat.h
libbsp_a_SOURCES += amba/amba.c
libbsp_a_SOURCES += ../../sparc/shared/amba/ambapp.c
libbsp_a_SOURCES += ../../sparc/shared/amba/ambapp_alloc.c
libbsp_a_SOURCES += ../../sparc/shared/amba/ambapp_count.c
libbsp_a_SOURCES += ../../sparc/shared/amba/ambapp_depth.c
libbsp_a_SOURCES += ../../sparc/shared/amba/ambapp_find_by_idx.c
libbsp_a_SOURCES += ../../sparc/shared/amba/ambapp_freq.c
libbsp_a_SOURCES += ../../sparc/shared/amba/ambapp_parent.c
libbsp_a_SOURCES += ../../sparc/shared/amba/ambapp_old.c
libbsp_a_SOURCES += ../../sparc/shared/amba/ambapp_names.c
libbsp_a_SOURCES += ../../sparc/shared/amba/ambapp_show.c
libbsp_a_SOURCES += ../../sparc/shared/amba/ahbstat.c

# Clock Driver and Timer Library
include_bsp_HEADERS += ../../sparc/shared/include/gptimer.h
include_bsp_HEADERS += ../../sparc/shared/include/tlib.h
libbsp_a_SOURCES += ../../sparc/shared/timer/gptimer.c
libbsp_a_SOURCES += ../../sparc/shared/timer/tlib.c
libbsp_a_SOURCES += ../../sparc/shared/timer/tlib_ckinit.c
# non-Driver Manager Clock Implementation
libbsp_a_SOURCES += clock/ckinit.c
libbsp_a_SOURCES += ../../shared/clockdrv_shell.h

# console
libbsp_a_SOURCES += ../../shared/console-termios.c
libbsp_a_SOURCES += console/console.c
libbsp_a_SOURCES += ../../sparc/shared/uart/cons.c
libbsp_a_SOURCES += ../../sparc/shared/uart/apbuart_cons.c
include_bsp_HEADERS += ../../sparc/shared/include/cons.h
include_bsp_HEADERS += ../../sparc/shared/include/apbuart_cons.h
# debugio
libbsp_a_SOURCES += console/printk_support.c

# IRQ
include_bsp_HEADERS += ../../sparc/shared/include/genirq.h
include_bsp_HEADERS += \
    ../../shared/include/irq-generic.h \
    ../../shared/include/irq-info.h \
    include/bsp/irq.h
libbsp_a_SOURCES += \
    startup/eirq.c \
    ../../sparc/shared/irq/genirq.c  \
    ../../sparc/shared/irq/irq-shared.c \
    ../../sparc/shared/irq/bsp_isr_handler.c \
    ../../shared/src/irq-default-handler.c \
    ../../shared/src/irq-generic.c \
    ../../shared/src/irq-info.c \
    ../../shared/src/irq-legacy.c \
    ../../shared/src/irq-server.c \
    ../../shared/src/irq-shell.c

# PCI
include_bsp_HEADERS += ../../sparc/shared/include/grpci.h
include_bsp_HEADERS += ../../sparc/shared/include/grpci2.h
include_bsp_HEADERS += ../../sparc/shared/include/grpci2dma.h
include_bsp_HEADERS += ../../sparc/shared/include/pcif.h
libbsp_a_SOURCES += ../../sparc/shared/pci/grpci.c
libbsp_a_SOURCES += ../../sparc/shared/pci/grpci2.c
libbsp_a_SOURCES += ../../sparc/shared/pci/grpci2dma.c
libbsp_a_SOURCES +=  ../../sparc/shared/pci/pcif.c
libbsp_a_SOURCES +=  ../../sparc/shared/pci/pci_memreg_sparc_le.c
libbsp_a_SOURCES +=  ../../sparc/shared/pci/pci_memreg_sparc_be.c

# PCI target devices
include_bsp_HEADERS += ../../sparc/shared/include/gr_701.h
include_bsp_HEADERS += ../../sparc/shared/include/gr_rasta_adcdac.h
include_bsp_HEADERS += ../../sparc/shared/include/gr_rasta_io.h
include_bsp_HEADERS += ../../sparc/shared/include/gr_rasta_spw_router.h
include_bsp_HEADERS += ../../sparc/shared/include/gr_rasta_tmtc.h
include_bsp_HEADERS += ../../sparc/shared/include/gr_tmtc_1553.h
include_bsp_HEADERS += ../../sparc/shared/include/gr_leon4_n2x.h
include_bsp_HEADERS += ../../sparc/shared/include/gr_cpci_gr740.h
libbsp_a_SOURCES +=  ../../sparc/shared/pci/gr_701.c
libbsp_a_SOURCES +=  ../../sparc/shared/pci/gr_rasta_adcdac.c
libbsp_a_SOURCES +=  ../../sparc/shared/pci/gr_rasta_io.c
libbsp_a_SOURCES +=  ../../sparc/shared/pci/gr_rasta_spw_router.c
libbsp_a_SOURCES +=  ../../sparc/shared/pci/gr_rasta_tmtc.c
libbsp_a_SOURCES +=  ../../sparc/shared/pci/gr_tmtc_1553.c
libbsp_a_SOURCES +=  ../../sparc/shared/pci/gr_leon4_n2x.c
libbsp_a_SOURCES +=  ../../sparc/shared/pci/gr_cpci_gr740.c

# B1553BRM
include_bsp_HEADERS += ../../sparc/shared/include/b1553brm.h
include_bsp_HEADERS += ../../sparc/shared/include/b1553rt.h
libbsp_a_SOURCES += ../../sparc/shared/1553/b1553brm.c
libbsp_a_SOURCES += ../../sparc/shared/1553/b1553rt.c

# GR1553B
include_bsp_HEADERS += ../../sparc/shared/include/gr1553b.h
include_bsp_HEADERS += ../../sparc/shared/include/gr1553bc.h
include_bsp_HEADERS += ../../sparc/shared/include/gr1553bc_list.h
include_bsp_HEADERS += ../../sparc/shared/include/gr1553bm.h
include_bsp_HEADERS += ../../sparc/shared/include/gr1553rt.h
libbsp_a_SOURCES += ../../sparc/shared/1553/gr1553b.c
libbsp_a_SOURCES += ../../sparc/shared/1553/gr1553bc.c
libbsp_a_SOURCES += ../../sparc/shared/1553/gr1553bm.c
libbsp_a_SOURCES += ../../sparc/shared/1553/gr1553rt.c

# CAN
include_bsp_HEADERS += ../../sparc/shared/include/occan.h \
    ../../sparc/shared/include/grcan.h
libbsp_a_SOURCES += ../../sparc/shared/can/occan.c \
    ../../sparc/shared/can/grcan.c

# SpaceWire
include_bsp_HEADERS += ../../sparc/shared/include/grspw.h
include_bsp_HEADERS += ../../sparc/shared/include/grspw_pkt.h
include_bsp_HEADERS += ../../sparc/shared/include/grspw_router.h
libbsp_a_SOURCES += ../../sparc/shared/spw/grspw.c
libbsp_a_SOURCES += ../../sparc/shared/spw/grspw_pkt.c
libbsp_a_SOURCES += ../../sparc/shared/spw/grspw_router.c

# UART
include_bsp_HEADERS += ../../sparc/shared/include/apbuart.h \
    ../../sparc/shared/include/apbuart_termios.h
libbsp_a_SOURCES += ../../sparc/shared/uart/apbuart_termios.c

# I2CMST
include_bsp_HEADERS += ../../sparc/shared/include/i2cmst.h
libbsp_a_SOURCES += ../../sparc/shared/i2c/i2cmst.c

# SPI
include_bsp_HEADERS += ../../sparc/shared/include/spictrl.h
libbsp_a_SOURCES += ../../sparc/shared/spi/spictrl.c

# TIME
include_bsp_HEADERS += ../../sparc/shared/include/spwcuc.h
include_bsp_HEADERS += ../../sparc/shared/include/grctm.h
libbsp_a_SOURCES += ../../sparc/shared/time/spwcuc.c
libbsp_a_SOURCES += ../../sparc/shared/time/grctm.c

# GPIO
include_bsp_HEADERS += ../../sparc/shared/include/grgpio.h
include_bsp_HEADERS += ../../sparc/shared/include/gpiolib.h
libbsp_a_SOURCES += ../../sparc/shared/gpio/grgpio.c
libbsp_a_SOURCES += ../../sparc/shared/gpio/gpiolib.c

# PWM
include_bsp_HEADERS += ../../sparc/shared/include/grpwm.h
libbsp_a_SOURCES += ../../sparc/shared/pwm/grpwm.c

# ADC and DAC
include_bsp_HEADERS += ../../sparc/shared/include/gradcdac.h
libbsp_a_SOURCES += ../../sparc/shared/analog/gradcdac.c

# Memory controllers
libbsp_a_SOURCES += ../../sparc/shared/mem/mctrl.c
include_bsp_HEADERS += ../../sparc/shared/include/mctrl.h

# l2cache
libbsp_a_SOURCES += ../../sparc/shared/l2c/l2c.c
include_bsp_HEADERS += ../../sparc/shared/include/l2c.h

# griommu
libbsp_a_SOURCES += ../../sparc/shared/iommu/griommu.c
include_bsp_HEADERS += ../../sparc/shared/include/griommu.h

# timer
libbsp_a_SOURCES += timer/timer.c
libbsp_a_SOURCES += timer/watchdog.c
include_bsp_HEADERS += include/watchdog.h

# Cache
libbsp_a_SOURCES += ../../../libcpu/shared/src/cache_manager.c
libbsp_a_SOURCES += include/cache_.h
libbsp_a_CPPFLAGS = -I$(srcdir)/include

# GR712
include_bsp_HEADERS += ../../sparc/shared/include/grascs.h
include_bsp_HEADERS += ../../sparc/shared/include/satcan.h 
include_bsp_HEADERS += ../../sparc/shared/include/canmux.h
include_bsp_HEADERS += ../../sparc/shared/include/grslink.h
libbsp_a_SOURCES += ../../sparc/shared/ascs/grascs.c
libbsp_a_SOURCES += ../../sparc/shared/can/satcan.c
libbsp_a_SOURCES += ../../sparc/shared/can/canmux.c
libbsp_a_SOURCES += ../../sparc/shared/slink/grslink.c

# TM/TC
include_bsp_HEADERS += ../../sparc/shared/include/grtc.h
include_bsp_HEADERS += ../../sparc/shared/include/grtm.h
libbsp_a_SOURCES += ../../sparc/shared/tmtc/grtc.c
libbsp_a_SOURCES += ../../sparc/shared/tmtc/grtm.c

# MEMSCRUB
libbsp_a_SOURCES += ../../sparc/shared/scrub/memscrub.c
include_bsp_HEADERS += ../../sparc/shared/include/memscrub.h

# L4STAT
libbsp_a_SOURCES += ../../sparc/shared/stat/l4stat.c
include_bsp_HEADERS += ../../sparc/shared/include/l4stat.h

# Driver Manager 
include_drvmgrdir = $(includedir)/drvmgr
include_drvmgr_HEADERS = ../../sparc/shared/include/drvmgr/ambapp_bus_grlib.h
include_drvmgr_HEADERS += ../../sparc/shared/include/drvmgr/ambapp_bus.h
include_drvmgr_HEADERS += ../../sparc/shared/include/drvmgr/bspcommon.h
libbsp_a_SOURCES += ../../sparc/shared/drvmgr/ambapp_bus.c
libbsp_a_SOURCES += ../../sparc/shared/drvmgr/ambapp_bus_grlib.c
libbsp_a_SOURCES += ../../sparc/shared/drvmgr/get_resarray_count.c

if HAS_SMP
libbsp_a_SOURCES += startup/bspsmp.c
endif

if HAS_NETWORKING
noinst_PROGRAMS += leon_smc91111.rel
leon_smc91111_rel_SOURCES = leon_smc91111/leon_smc91111.c
leon_smc91111_rel_CPPFLAGS = $(AM_CPPFLAGS)
leon_smc91111_rel_CPPFLAGS += -D__INSIDE_RTEMS_BSD_TCPIP_STACK__
leon_smc91111_rel_LDFLAGS = $(RTEMS_RELLDFLAGS)
endif

if HAS_NETWORKING
noinst_PROGRAMS += leon_open_eth.rel
leon_open_eth_rel_SOURCES = leon_open_eth/leon_open_eth.c
leon_open_eth_rel_CPPFLAGS = $(AM_CPPFLAGS)
leon_open_eth_rel_CPPFLAGS += -D__INSIDE_RTEMS_BSD_TCPIP_STACK__
leon_open_eth_rel_LDFLAGS = $(RTEMS_RELLDFLAGS)
endif

if HAS_NETWORKING
noinst_PROGRAMS += leon_greth.rel
libbsp_a_SOURCES += leon_greth/leon_greth.c
leon_greth_rel_SOURCES = ../../sparc/shared/net/greth.c
include_bsp_HEADERS += ../../sparc/shared/include/greth.h
leon_greth_rel_CPPFLAGS = $(AM_CPPFLAGS)
leon_greth_rel_CPPFLAGS += -D__INSIDE_RTEMS_BSD_TCPIP_STACK__
leon_greth_rel_LDFLAGS = $(RTEMS_RELLDFLAGS)
endif

# BSP Network configuration
if HAS_NETWORKING
include_bsp_HEADERS += ../../sparc/shared/include/network_interface_add.h
libbsp_a_SOURCES += ../../sparc/shared/net/network_interface_add.c
endif

EXTRA_DIST = shmsupp/README
if HAS_MP
# shmsupp
libbsp_a_SOURCES += shmsupp/addrconv.c shmsupp/getcfg.c shmsupp/lock.c \
    shmsupp/mpisr.c
endif

libbsp_a_LIBADD = \
    ../../../libcpu/@RTEMS_CPU@/access.rel \
    ../../../libcpu/@RTEMS_CPU@/reg_win.rel \
    ../../../libcpu/@RTEMS_CPU@/syscall.rel

if HAS_NETWORKING
libbsp_a_LIBADD += leon_open_eth.rel
libbsp_a_LIBADD += leon_greth.rel
libbsp_a_LIBADD += leon_smc91111.rel
endif

EXTRA_DIST += times

include $(srcdir)/preinstall.am
include $(top_srcdir)/../../../../automake/local.am
