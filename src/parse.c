/*
 * parse.c
 *
 *  Created on: 2011/02/13
 *      Author: psi
 */

#include "uuid_inner.h"

int uuid_parse(const char *in, uuid_t uu){
	RPC_STATUS rpc_status = UuidFromStringA((unsigned char*)in,(UUID*)uu);
	if(rpc_status == RPC_S_OK){
		return 0;
	}
	return -1;
}
