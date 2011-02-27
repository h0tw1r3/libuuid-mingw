/*
 * clear.c
 *
 *  Created on: 2011/02/13
 *      Author: psi
 */

#include "uuid_inner.h"
/* clear.c */
void uuid_clear(uuid_t uu){
	UuidCreateNil((UUID*)uu);
}
