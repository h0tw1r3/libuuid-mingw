/*
 * compare.c
 *
 *  Created on: 2011/02/13
 *      Author: psi
 */
#include "uuid_inner.h"
/* compare.c */
int uuid_compare(const uuid_t uu1, const uuid_t uu2){
	RPC_STATUS rpc_status;
	return UuidCompare((UUID*)uu1,(UUID*)uu2,&rpc_status);
}
