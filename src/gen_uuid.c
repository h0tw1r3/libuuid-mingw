/*
 * gen_uuid.c
 *
 *  Created on: 2011/02/13
 *      Author: psi
 */

/**
 *  See also: http://linux.die.net/man/3/uuid_generate
 */

#include "uuid_inner.h"

void uuid_generate(uuid_t out){
	UuidCreateNil((UUID*)out);
	UuidCreate((UUID*)out);
}
void uuid_generate_random(uuid_t out){
	(char*) buf = out;
	int i;
	for(i=0;i<UUID_T_LENGTH;i++){
		buf[i] = (rand() >> 20) & 0xff;
	}
	(UUID*) uuid = out;

	//see also original libuuid source.
	(unsigned short*) clock_seq = (unsigned short*) uuid->Data4;
	*clock_seq = (*clock_seq & 0x3FFF) | 0x8000;
	(unsigned short*) time_hi_and_version = (unsigned short*) uuid->Data3;
	*time_hi_and_version = (*time_hi_and_version & 0x0FFF) | 0x4000;
}
//TODO: Should we implement these functions?
void uuid_generate_time(uuid_t out){
	UuidCreateNil((UUID*)out);
	UuidCreate((UUID*)out);
}
