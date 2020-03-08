#------------------------------------------------------------------------------
# Copyright (C) Delta Tau Data Systems Inc., 2007
# All rights reserved.
# 
# Generic makefile for any c realtime C plc 0, user servo or user phase
# For a new project change the following
# 
# 1.) usralgo-objs should be assigned the 'C' source code files that need to be compiled
# 2.) issue the command 'make depend' the first time a project is created and
#     (every time an additional 'C' file is added to the project the command 
#     'make depend' must be issued)
# 3.) issue the command make clean 
# 4.) issue the command make
#
# Notes
# --------
# Change DTDEBUG above to -O2 for release w/ optimization
# Change DTDEBUG above to -g3 for debug 
# arm,i386,i385hv,ppc460-2,ppc460-1,ppc405
#------------------------------------------------------------------------------

PMAC_ARCH=armv71-4.1.18

ifeq ($(PMAC_ARCH),armv71-4.1.18)
ARCH=arm
CROSS_COMPILE=arm-omron49-linux-gnueabihf-
KDIR=/opt/armv71-4.1.18-ipipe/usr/src/ipipe-ipipe-core-4.1.18-arm-9
KSRC=/opt/armv71-4.1.18-ipipe/usr/src/ipipe-ipipe-core-4.1.18-arm-9
CC=arm-omron49-linux-gnueabihf-gcc
AS=arm-omron49-linux-gnueabihf-as
LD=arm-omron49-linux-gnueabihf-gcc
INCLUDE=/opt/armv71-4.1.18-ipipe/usr/lib/gcc/arm-linux-gnueabihf/4.6/include
XENOMAI_INC_DIR=/opt/armv71-4.1.18-ipipe/usr/xenomai/include
XENOMAI_LIB_DIR=/opt/armv71-4.1.18-ipipe/usr/xenomai/lib
LIBMATHDIR=/usr/local/dtlibs/libmath
RPATH=-Wl,-rpath-link,/opt/armv71-4.1.18-ipipe/lib/arm-linux-gnueabihf
LIBMATH_RPATH=-Wl,-rpath,/opt/ppmac/libmath
ROOTFS_DIR=/opt/armv71-4.1.18-ipipe
endif

ifeq ($(PMAC_ARCH),armv71-4.1.18-usermode)
ARCH=arm
CROSS_COMPILE=arm-omron49-linux-gnueabihf-
KDIR=/opt/armv71-4.1.18-ipipe/usr/src/ipipe-ipipe-core-4.1.18-arm-9
KSRC=/opt/armv71-4.1.18-ipipe/usr/src/ipipe-ipipe-core-4.1.18-arm-9
CC=arm-omron49-linux-gnueabihf-gcc
AS=arm-omron49-linux-gnueabihf-as
LD=arm-omron49-linux-gnueabihf-gcc
INCLUDE=/opt/armv71-4.1.18-ipipe/usr/lib/gcc/arm-linux-gnueabihf/4.6/include
XENOMAI_INC_DIR=/opt/armv71-4.1.18-ipipe/usr/xenomai/include
XENOMAI_LIB_DIR=/opt/armv71-4.1.18-ipipe/usr/xenomai/lib
LIBMATHDIR=/usr/local/dtlibs/libmath
RPATH=-Wl,-rpath-link,/opt/armv71-4.1.18-ipipe/lib/arm-linux-gnueabihf
LIBMATH_RPATH=-Wl,-rpath,/opt/ppmac/libmath
ROOTFS_DIR=/opt/armv71-4.1.18-ipipe
EXTRA_DEFINES=-D__POSIX_MODE__ -D__ACONTIS__
endif

ifeq ($(PMAC_ARCH),armv71-3.14.28)
ARCH=arm
CROSS_COMPILE=arm-omron-linux-gnueabihf-
KDIR=/opt/arm-rootfs/usr/src/linux-3.14.28
KSRC=/opt/arm-rootfs/usr/src/linux-3.14.28
CC=arm-omron-linux-gnueabihf-gcc
AS=arm-omron-linux-gnueabihf-as
LD=arm-omron-linux-gnueabihf-gcc
INCLUDE=/opt/arm-rootfs/usr/lib/gcc/arm-linux-gnueabihf/4.6/include
XENOMAI_INC_DIR=/opt/arm-rootfs/usr/xenomai/include
XENOMAI_LIB_DIR=/opt/arm-rootfs/usr/xenomai/lib
LIBMATHDIR=/usr/local/dtlibs/libmath
RPATH=-Wl,-rpath-link,/opt/arm-rootfs/lib/arm-linux-gnueabihf
LIBMATH_RPATH=-Wl,-rpath,/opt/ppmac/libmath
ROOTFS_DIR=/opt/arm-rootfs
endif

ifeq ($(PMAC_ARCH),armv71-3.14.28-usermode)
ARCH=arm
CROSS_COMPILE=arm-omron-linux-gnueabihf-
KDIR=/opt/arm-rootfs/usr/src/linux-3.14.28
KSRC=/opt/arm-rootfs/usr/src/linux-3.14.28
CC=arm-omron-linux-gnueabihf-gcc
AS=arm-omron-linux-gnueabihf-as
LD=arm-omron-linux-gnueabihf-gcc
INCLUDE=/opt/arm-rootfs/usr/lib/gcc/arm-linux-gnueabihf/4.6/include
XENOMAI_LIB_DIR=/opt/arm-rootfs/usr/xenomai/lib
LIBMATHDIR=/usr/local/dtlibs/libmath
RPATH=-Wl,-rpath-link,/opt/arm-rootfs/lib/arm-linux-gnueabihf
LIBMATH_RPATH=-Wl,-rpath,/opt/ppmac/libmath
ROOTFS_DIR=/opt/arm-rootfs
EXTRA_DEFINES=-D__POSIX_MODE__ -D__ACONTIS__
endif

ifeq ($(PMAC_ARCH),i386)
ARCH=i386
CROSS_COMPILE=i686-meau-linux-gnu-
KDIR=/opt/i386-linux-rootfs/usr/src/linux-headers-3.14.28-xenomai-2.6.4
KSRC=/opt/i386-linux-rootfs/usr/src/linux-headers-3.14.28-xenomai-2.6.4
CC=i686-meau-linux-gnu-gcc
AS=i686-meau-linux-gnu-as
LD=i686-meau-linux-gnu-gcc
INCLUDE=/opt/i386-linux-rootfs/usr/lib/gcc/i686-linux-gnu/4.6/include
XENOMAI_INC_DIR=/opt/i386-linux-rootfs/usr/include/xenomai
XENOMAI_LIB_DIR=/opt/i386-linux-rootfs/usr/lib
LIBMATHDIR=/usr/local/dtlibs/libmath
RPATH=-Wl,-rpath-link,/opt/i386-linux-rootfs/lib/i386-linux-gnu
LIBMATH_RPATH=-Wl,-rpath,/opt/ppmac/libmath
ROOTFS_DIR=/opt/i386-linux-rootfs
endif

ifeq ($(PMAC_ARCH),i386-usermode)
ARCH=i386
CROSS_COMPILE=i686-meau-linux-gnu-
KDIR=/opt/i386-linux-rootfs/usr/src/linux-headers-3.14.28-xenomai-2.6.4
KSRC=/opt/i386-linux-rootfs/usr/src/linux-headers-3.14.28-xenomai-2.6.4
CC=i686-meau-linux-gnu-gcc
AS=i686-meau-linux-gnu-as
LD=i686-meau-linux-gnu-gcc
INCLUDE=/opt/i386-linux-rootfs/usr/lib/gcc/i686-linux-gnu/4.6/include
XENOMAI_INC_DIR=/opt/i386-linux-rootfs/usr/include/xenomai
XENOMAI_LIB_DIR=/opt/i386-linux-rootfs/usr/lib
LIBMATHDIR=/usr/local/dtlibs/libmath
RPATH=-Wl,-rpath-link,/opt/i386-linux-rootfs/lib/i386-linux-gnu
LIBMATH_RPATH=-Wl,-rpath,/opt/ppmac/libmath
ROOTFS_DIR=/opt/i386-linux-rootfs
EXTRA_DEFINES=-D__POSIX_MODE__ -D__ACONTIS__
endif

ifeq ($(PMAC_ARCH),i386hv)
ARCH=i386
CROSS_COMPILE=i686-meau-linux-gnu-
KDIR=/opt/i386-preemptrt-rootfs/usr/src/linux-3.12.42
KSRC=/opt/i386-preemptrt-rootfs/usr/src/linux-3.12.42
CC=i686-meau-linux-gnu-gcc
AS=i686-meau-linux-gnu-as
LD=i686-meau-linux-gnu-gcc
INCLUDE=/opt/i386-preemptrt-rootfs/usr/lib/gcc/i686-redhat-linux/4.4.4/include
XENOMAI_LIB_DIR=/opt/i386-preemptrt-rootfs/lib
LIBMATHDIR=/usr/local/dtlibs/libmath
LIBMATH_RPATH=-Wl,-rpath,/opt/ppmac/libmath
ROOTFS_DIR=/opt/i386-preemptrt-rootfs
EXTRA_DEFINES=-D__HYPERVISOR__
endif

ifeq ($(PMAC_ARCH),i386hv-usermode)
ARCH=i386
CROSS_COMPILE=i686-meau-linux-gnu-
KDIR=/opt/i386-preemptrt-rootfs/usr/src/linux-3.12.42
KSRC=/opt/i386-preemptrt-rootfs/usr/src/linux-3.12.42
CC=i686-meau-linux-gnu-gcc
AS=i686-meau-linux-gnu-as
LD=i686-meau-linux-gnu-gcc
INCLUDE=/opt/i386-preemptrt-rootfs/usr/lib/gcc/i686-redhat-linux/4.4.4/include
XENOMAI_LIB_DIR=/opt/i386-preemptrt-rootfs/lib
LIBMATHDIR=/usr/local/dtlibs/libmath
LIBMATH_RPATH=-Wl,-rpath,/opt/ppmac/libmath
ROOTFS_DIR=/opt/i386-preemptrt-rootfs
EXTRA_DEFINES=-D__POSIX_MODE__ -D__ACONTIS__ -D__HYPERVISOR__
endif

ifeq ($(PMAC_ARCH),lx86)
ARCH=i386
CROSS_COMPILE=i686-meau-linux-gnu-
KDIR=/opt/lx86-linux-rootfs/usr/src/linux-headers-3.14.28-xenomai-2.6.4
KSRC=/opt/lx86-linux-rootfs/usr/src/linux-headers-3.14.28-xenomai-2.6.4
CC=i686-meau-linux-gnu-gcc
AS=i686-meau-linux-gnu-as
LD=i686-meau-linux-gnu-gcc
INCLUDE=/opt/lx86-linux-rootfs/usr/lib/gcc/i686-linux-gnu/4.9/include
XENOMAI_INC_DIR=/opt/lx86-linux-rootfs/usr/include/xenomai
XENOMAI_LIB_DIR=/opt/lx86-linux-rootfs/usr/lib
LIBMATHDIR=/usr/local/dtlibs/libmath
RPATH=-Wl,-rpath-link,/opt/lx86-linux-rootfs/lib/i386-linux-gnu
LIBMATH_RPATH=-Wl,-rpath,/opt/ppmac/libmath
ROOTFS_DIR=/opt/lx86-linux-rootfs
endif

ifeq ($(PMAC_ARCH),lx86-usermode)
ARCH=i386
CROSS_COMPILE=i686-meau-linux-gnu-
KDIR=/opt/lx86-linux-rootfs/usr/src/linux-headers-3.14.28-xenomai-2.6.4
KSRC=/opt/lx86-linux-rootfs/usr/src/linux-headers-3.14.28-xenomai-2.6.4
CC=i686-meau-linux-gnu-gcc
AS=i686-meau-linux-gnu-as
LD=i686-meau-linux-gnu-gcc
INCLUDE=/opt/lx86-linux-rootfs/usr/lib/gcc/i686-linux-gnu/4.9/include
XENOMAI_INC_DIR=/opt/lx86-linux-rootfs/usr/include/xenomai
XENOMAI_LIB_DIR=/opt/lx86-linux-rootfs/usr/lib
LIBMATHDIR=/usr/local/dtlibs/libmath
RPATH=-Wl,-rpath-link,/opt/lx86-linux-rootfs/lib/i386-linux-gnu
LIBMATH_RPATH=-Wl,-rpath,/opt/ppmac/libmath
ROOTFS_DIR=/opt/lx86-linux-rootfs
EXTRA_DEFINES=-D__POSIX_MODE__ -D__ACONTIS__
endif

ifeq ($(PMAC_ARCH),ppc465-2)
ARCH=powerpc
CROSS_COMPILE=powerpc-meau-linux-gnu-
KDIR=/opt/powerpc-465-rootfs/usr/src/linux-3.2.21-serengeti-smp
KSRC=/opt/powerpc-465-rootfs/usr/src/linux-3.2.21-serengeti-smp
CC=powerpc-meau-linux-gnu-gcc
AS=powerpc-meau-linux-gnu-as
LD=powerpc-meau-linux-gnu-gcc
INCLUDE=/opt/powerpc-465-rootfs/usr/lib/gcc/powerpc-linux-gnu/4.6/include
XENOMAI_INC_DIR=/opt/powerpc-465-rootfs/usr/local/xenomai-2.6.2.1/include
XENOMAI_LIB_DIR=/opt/powerpc-465-rootfs/usr/local/xenomai-2.6.2.1/lib
RPATH=-Wl,-rpath-link,/opt/powerpc-465-rootfs/lib/powerpc-linux-gnu
ROOTFS_DIR=/opt/powerpc-465-rootfs
endif

ifeq ($(PMAC_ARCH),ppc465-1)
ARCH=powerpc
CROSS_COMPILE=powerpc-meau-linux-gnu-
KDIR=/opt/powerpc-465-rootfs/usr/src/linux-3.2.21-serengeti-smp
KSRC=/opt/powerpc-465-rootfs/usr/src/linux-3.2.21-serengeti-smp
CC=powerpc-meau-linux-gnu-gcc
AS=powerpc-meau-linux-gnu-as
LD=powerpc-meau-linux-gnu-gcc
INCLUDE=/opt/powerpc-465-rootfs/usr/lib/gcc/powerpc-linux-gnu/4.6/include
XENOMAI_INC_DIR=/opt/powerpc-465-rootfs/usr/local/xenomai-2.6.2.1/include
XENOMAI_LIB_DIR=/opt/powerpc-465-rootfs/usr/local/xenomai-2.6.2.1/lib
RPATH=-Wl,-rpath-link,/opt/powerpc-465-rootfs/lib/powerpc-linux-gnu
ROOTFS_DIR=/opt/powerpc-465-rootfs
endif

ifeq ($(PMAC_ARCH),ppc405)
ARCH=powerpc
CROSS_COMPILE=powerpc-405-linux-gnu-
KDIR=/opt/powerpc-405-rootfs/usr/src/linux-2.6.30.3-xeno-2.5.6
KSRC=/opt/powerpc-405-rootfs/usr/src/linux-2.6.30.3-xeno-2.5.6
CC=powerpc-405-linux-gnu-gcc
AS=powerpc-405-linux-gnu-as
LD=powerpc-405-linux-gnu-gcc
INCLUDE=/usr/local/powerpc-405-linux-gnu/include
XENOMAI_INC_DIR=/opt/powerpc-405-rootfs/usr/local/xenomai-2.5.6/include
XENOMAI_LIB_DIR=/opt/powerpc-405-rootfs/usr/local/xenomai-2.5.6/lib
LIB_DIR=/opt/powerpc-405-rootfs/lib
ROOTFS_DIR=/opt/powerpc-405-rootfs
endif

RTPMACINCLUDEDIR=/usr/local/dtlibs/rtpmac
LIBPPMACINCLUDEDIR=/usr/local/dtlibs/libppmac
LIBOPENERDIR=/usr/local/dtlibs/libopener
export ARCH
export CROSS_COMPILE

OBJS     := ${patsubst %, %.o, $(MODULES)}
CLEANMOD := ${patsubst %, .%*, $(MODULES)}
PWD      := $(shell if [ "$$PWD" != "" ]; then echo $$PWD; else pwd; fi)


obj-m	+= usralgo.o
usralgo-objs := usralgomain.o \
usrcode.o

LDFLAGS := -nostdlib
EXTRA_CFLAGS :=  -O2 -DCONFIG_460EX -D_GNU_SOURCE -D_REENTRANT -D_ISOC99_SOURCE -mhard-float -I$(RTPMACINCLUDEDIR) -I$(LIBPPMACINCLUDEDIR) -I$(LIBOPENERDIR) -I$(XENOMAI_INC_DIR) -I$(XENOMAI_INC_DIR)/posix -I$(KSRC)/include/xenomai -I$(KSRC)/include/xenomai/posix $(ADD_CFLAGS) --sysroot=$(ROOTFS_DIR)
KBUILD_EXTRA_SYMBOLS := /usr/local/dtlibs/libppmac/Module.symvers

%.o: %.S
	$(CC) -s -D__KERNEL__ -x c -E $< -o $*.i
	$(AS)  -mbooke -o $@ $*.i

all::
	cp -f /usr/local/usralgo/usralgomain.c $(PWD)
	$(MAKE) -C $(KSRC) SUBDIRS=$(PWD) modules
	mv -f usralgo.ko ../../bin/Debug/

modules:
	@echo "$(CFLAGS)"

bclean::
	$(RM) *.o .*.o.d .*.o.cmd *.ko *.log
	$(RM) -R .tmp*
	$(RM) .runinfo
	rm -rf .runinfo .tmp* .*.o.d .*.o.cmd .*.cmd *.o *.ko *.mod.c *.i *.so Module.symvers modules.order

clean::
	$(RM) *.o .*.o.d .*.o.cmd *.ko
	$(RM) -R .tmp*
	$(RM) .runinfo
	rm -rf .runinfo .tmp* .*.o.d .*.o.cmd .*.cmd *.o *.ko *.mod.c *.i *.so Module.symvers modules.order

