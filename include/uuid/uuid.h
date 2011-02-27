/*
 * uuid.h
 *
 *  Created on: 2011/02/13
 *      Author: psi
 */

#ifndef INCLUDE_UUID_UUID_H_
#define INCLUDE_UUID_UUID_H_
#ifdef __cplusplus
extern "C" {
#endif

#define UUID_STR_LENGTH (36)
#define UUID_T_LENGTH (16)
/* ちょっとトリッキーだけど、共存するためにはしょうがない。 */
#ifdef uuid_t
#undef uuid_t
#endif
typedef unsigned char uuid_t[UUID_T_LENGTH];

/* clear.c */
extern void uuid_clear(uuid_t uu);

/* compare.c */
extern int uuid_compare(const uuid_t uu1, const uuid_t uu2);

/* copy.c */
extern void uuid_copy(uuid_t dst, const uuid_t src);

/* gen_uuid.c */
extern void uuid_generate(uuid_t out);
extern void uuid_generate_random(uuid_t out);
extern void uuid_generate_time(uuid_t out);

/* isnull.c */
extern int uuid_is_null(const uuid_t uu);

/* parse.c */
extern int uuid_parse(const char *in, uuid_t uu);

/* unparse.c */
extern void uuid_unparse(const uuid_t uu, char *out);
extern void uuid_unparse_lower(const uuid_t uu, char *out);
extern void uuid_unparse_upper(const uuid_t uu, char *out);

/* uuid_time.c */
/*
TODO: Should we implement these functions?
extern time_t uuid_time(const uuid_t uu, struct timeval *ret_tv);
extern int uuid_type(const uuid_t uu);
extern int uuid_variant(const uuid_t uu);
*/

#ifdef __cplusplus
}
#endif

#endif /* INCLUDE_UUID_UUID_H_ */
