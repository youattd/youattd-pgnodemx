/*
 * genutils.h
 *
 * General utility functions
 * 
 * Joe Conway <joe@crunchydata.com>
 *
 * This code is released under the PostgreSQL license.
 *
 * Copyright 2020-2022 Crunchy Data Solutions, Inc.
 *
 * Permission to use, copy, modify, and distribute this software and its
 * documentation for any purpose, without fee, and without a written
 * agreement is hereby granted, provided that the above copyright notice
 * and this paragraph and the following two paragraphs appear in all copies.
 *
 * IN NO EVENT SHALL CRUNCHY DATA SOLUTIONS, INC. BE LIABLE TO ANY PARTY
 * FOR DIRECT, INDIRECT, SPECIAL, INCIDENTAL, OR CONSEQUENTIAL DAMAGES,
 * INCLUDING LOST PROFITS, ARISING OUT OF THE USE OF THIS SOFTWARE AND ITS
 * DOCUMENTATION, EVEN IF THE CRUNCHY DATA SOLUTIONS, INC. HAS BEEN ADVISED
 * OF THE POSSIBILITY OF SUCH DAMAGE.
 *
 * THE CRUNCHY DATA SOLUTIONS, INC. SPECIFICALLY DISCLAIMS ANY WARRANTIES,
 * INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY
 * AND FITNESS FOR A PARTICULAR PURPOSE. THE SOFTWARE PROVIDED HEREUNDER IS
 * ON AN "AS IS" BASIS, AND THE CRUNCHY DATA SOLUTIONS, INC. HAS NO
 * OBLIGATIONS TO PROVIDE MAINTENANCE, SUPPORT, UPDATES, ENHANCEMENTS, OR
 * MODIFICATIONS.
 */

#ifndef GENUTILS_H
#define GENUTILS_H

extern Datum form_srf(FunctionCallInfo fcinfo,
					  char ***values, int nrow, int ncol, Oid *dtypes);
extern Datum setof_scalar_internal(FunctionCallInfo fcinfo,
								   char *fname, Oid *srf_sig);
extern Datum string_get_array_datum(char **values, int nvals,
									Oid typelem, bool *isnull);
extern int int64_cmp(const void *p1, const void *p2);
extern struct config_generic *find_option(const char *name);
extern char *int64_to_string(int64 val);
extern int pg_ulltoa(uint64 uvalue, char *a);
extern char *uint64_to_string(uint64 val);
#if PG_VERSION_NUM < 90600
extern int64 size_bytes(char *str);
#endif

#endif	/* GENUTILS_H */
