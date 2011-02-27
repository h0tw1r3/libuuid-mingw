/*
 * isnull.c
 *
 *  Created on: 2011/02/13
 *      Author: psi
 */

#include "uuid_inner.h"

/* isnull.c */
int uuid_is_null(const uuid_t uu){
	RPC_STATUS rpc_status;
	if(UuidIsNil((UUID*)uu,&rpc_status)){
		return 1;
	}
	return 0;
}
