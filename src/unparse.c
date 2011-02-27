/*
 * unparse.c
 *
 *  Created on: 2011/02/13
 *      Author: psi
 */

#include "uuid_inner.h"
#include <ctype.h>

/* unparse.c */
void uuid_unparse(const uuid_t uu, char *out){
	unsigned char *p;
	if(UuidToStringA((UUID*)uu,&p) == RPC_S_OK){
		memcpy(out,p,UUID_STR_LENGTH);
		out[UUID_STR_LENGTH] = '\0';
		RpcStringFree(&p );
	}else{
		out[0] = '\0';
	}
}
void uuid_unparse_lower(const uuid_t uu, char *out){
	unsigned char *p;
	if(UuidToStringA((UUID*)uu,&p) == RPC_S_OK){
		int i;
		for(i=0;i<UUID_STR_LENGTH;i++){
			out[i] = tolower(p[i]);
		}
		out[UUID_STR_LENGTH] = '\0';
		RpcStringFree(&p );
	}else{
		out[0] = '\0';
	}
}
void uuid_unparse_upper(const uuid_t uu, char *out){
	unsigned char *p;
	if(UuidToStringA((UUID*)uu,&p) == RPC_S_OK){
		int i;
		for(i=0;i<UUID_STR_LENGTH;i++){
			out[i] = toupper(p[i]);
		}
		out[UUID_STR_LENGTH] = '\0';
		RpcStringFree(&p );
	}else{
		out[0] = '\0';
	}
}
