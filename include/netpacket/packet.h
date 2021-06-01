/*
 * Phoenix-RTOS
 *
 * libphoenix
 *
 * packet.h

 * Copyright 2021 Phoenix Systems
 * Author: Ziemowit Leszczynski
 *
 * This file is a part of Phoenix-RTOS.
 *
 * %LICENSE%
 */

#ifndef _LIBPHOENIX_NETPACKET_PACKET_H_
#define _LIBPHOENIX_NETPACKET_PACKET_H_

struct sockaddr_ll {
	unsigned short int sll_family;
	unsigned short int sll_protocol;
	int sll_ifindex;
	unsigned short int sll_hatype;
	unsigned char sll_pkttype;
	unsigned char sll_halen;
	unsigned char sll_addr[8];
};

#endif
