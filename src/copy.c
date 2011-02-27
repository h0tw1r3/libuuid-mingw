/*
 * copy.c
 *
 *  Created on: 2011/02/13
 *      Author: psi
 */

#include "uuid_inner.h"
#include <string.h>

/* copy.c */
void uuid_copy(uuid_t dst, const uuid_t src){
	memcpy(dst,src,UUID_T_LENGTH);
}
