/*
 * Copyright (c) 2015 Apple Inc. All rights reserved.
 *
 * @APPLE_LICENSE_HEADER_START@
 *
 * This file contains Original Code and/or Modifications of Original Code
 * as defined in and that are subject to the Apple Public Source License
 * Version 2.0 (the 'License'). You may not use this file except in
 * compliance with the License. Please obtain a copy of the License at
 * http://www.opensource.apple.com/apsl/ and read it before using this
 * file.
 *
 * The Original Code and all software distributed under the License are
 * distributed on an 'AS IS' basis, WITHOUT WARRANTY OF ANY KIND, EITHER
 * EXPRESS OR IMPLIED, AND APPLE HEREBY DISCLAIMS ALL SUCH WARRANTIES,
 * INCLUDING WITHOUT LIMITATION, ANY WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE, QUIET ENJOYMENT OR NON-INFRINGEMENT.
 * Please see the License for the specific language governing rights and
 * limitations under the License.
 *
 * @APPLE_LICENSE_HEADER_END@
 */

#ifndef _LSKQ_COMMON_H_
#define _LSKQ_COMMON_H_

/*
 * This file must be kept in sync with xnu headers
 */

/*
 * bsd/sys/event.h
 */
#define KN_ACTIVE     0x01
#define KN_QUEUED     0x02
#define KN_DISABLED   0x04
#define KN_STAYQUEUED 0x40


/*
 * bsd/sys/eventvar.h
 */
#define KQ_SEL        0x01
#define KQ_SLEEP      0x02
#define KQ_KEV32      0x08
#define KQ_KEV64      0x10
#define KQ_KEV_QOS    0x20

/*
 * bsd/sys/signal.h
 */
static const char *
sig_strs[] = {
	[0]  = "<UNKN>",
	[1]  = "SIGHUP",
	[2]  = "SIGINT",
	[3]  = "SIGQUIT",
	[4]  = "SIGILL",
	[5]  = "SIGTRAP",
	[6]  = "SIGABRT",
	[7]  = "SIGEMT",
	[8]  = "SIGFPE",
	[9]  = "SIGKILL",
	[10] = "SIGBUS",
	[11] = "SIGSEGV",
	[12] = "SIGSYS",
	[13] = "SIGPIPE",
	[14] = "SIGALRM",
	[15] = "SIGTERM",
	[16] = "SIGURG",
	[17] = "SIGSTOP",
	[18] = "SIGTSTP",
	[19] = "SIGCONT",
	[20] = "SIGCHLD",
	[21] = "SIGTTIN",
	[22] = "SIGTTOU",
	[23] = "SIGIO",
	[24] = "SIGXCPU",
	[25] = "SIGXFSZ",
	[26] = "SIGVTALRM",
	[27] = "SIGPROF",
	[28] = "SIGWINCH",
	[29] = "SIGINFO",
	[30] = "SIGUSR1",
	[31] = "SIGUSR2"
};

/*
 * bsd/sys/event.h: EVFILT_*
 */
static const char *
filt_strs[] = {
	NULL,
	"READ",
	"WRITE",
	"AIO",
	"VNODE",
	"PROC",
	"SIGNAL",
	"TIMER",
	"MACHPORT",
	"FS",
	"USER",
	"<inval>",
	"VM",
	"SOCK",
	"MEMSTATUS",
};

/*
 * bsd/sys/proc_info.h: PROX_FDTYPE_*
 */
static const char *
fdtype_strs[] = {
	"ATALK",
	"VNODE",
	"SOCKET",
	"PSHM",
	"PSEM",
	"KQUEUE",
	"PIPE",
	"FSEVENTS",
};

#endif /* _LSKQ_COMMON_H_ */
