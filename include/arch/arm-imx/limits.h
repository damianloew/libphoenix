/*
 * Phoenix-RTOS
 *
 * libphoenix
 *
 * Architecture dependent part of limits (arch/arm-imx)
 *
 * Copyright 2017-2019 Phoenix Systems
 * Author: Pawel Pisarczyk, Aleksander Kaminski, Andrzej Glowinski
 *
 * This file is part of Phoenix-RTOS.
 *
 * %LICENSE%
 */

#ifndef _LIBPHOENIX_ARCH_ARM_IMX_LIMITS_H_
#define _LIBPHOENIX_ARCH_ARM_IMX_LIMITS_H_

#include "arch.h"

#define SCHAR_MIN -128
#define SCHAR_MAX 127
#define UCHAR_MAX 255

#define CHAR_MIN 0
#define CHAR_MAX UCHAR_MAX
#define CHAR_BIT 8

#define MB_LEN_MAX 4

#define SHRT_MIN  -32768
#define SHRT_MAX  32767
#define USHRT_MAX 65535

#define INT_MIN  -2147483648
#define INT_MAX  0x7fffffff
#define UINT_MAX 0xffffffff

#define LONG_MIN  INT_MIN
#define LONG_MAX  INT_MAX
#define ULONG_MAX UINT_MAX

#define LONG_LONG_MIN  0x8000000000000000LL
#define LONG_LONG_MAX  0x7fffffffffffffffLL
#define ULONG_LONG_MAX 0xffffffffffffffffLL
#define LLONG_MIN      LONG_LONG_MIN
#define LLONG_MAX      LONG_LONG_MAX
#define ULLONG_MAX     ULONG_LONG_MAX

#define SSIZE_MAX INT_MAX

#define PTHREAD_STACK_MIN  256
#define PATH_MAX           1024
#define ARG_MAX            128
#define _POSIX2_RE_DUP_MAX 255

#define PAGE_SIZE _PAGE_SIZE
#define PAGESIZE  _PAGE_SIZE

#endif
