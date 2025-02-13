/*
 * Copyright (C)      2022 Colin Ian King
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License
 * as published by the Free Software Foundation; either version 2
 * of the License, or (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301, USA.
 *
 */
#ifndef CORE_BUILTIN_H
#define CORE_BUILTIN_H

#if defined(HAVE_BUILTIN_CABSL)
#define shim_cabsl(x)	__builtin_cabsl(x)
#else
#if defined(HAVE_CABSL)
#define shim_cabsl(x)	cabsl(x)
#else
#define shim_cabsl(x)	cabs(x)
#endif
#endif

#if defined(HAVE_BUILTIN_LGAMMAL)
#define shim_lgammal(x)	__builtin_lgammal(x)
#else
#if defined(HAVE_LGAMMAL)
#define shim_lgammal(x)	lgammal(x)
#else
#define shim_lgammal(x)	lgamma(x)
#endif
#endif

#if defined(HAVE_BUILTIN_CPOW)
#define shim_cpow(x, z)	__builtin_cpow(x, z)
#else
#if defined(HAVE_CPOW)
#define shim_cpow(x, z)	cpow(x, z)
#else
#define shim_cpow(x, z)	pow(x, z)
#endif
#endif

#if defined(HAVE_BUILTIN_POWL)
#define shim_powl(x, y)	__builtin_powl(x, y)
#else
#if defined(HAVE_POWL)
#define shim_powl(x, y)	powl(x, y)
#else
#define shim_powl(x, y)	pow(x, y)
#endif
#endif

#if defined(HAVE_BUILTIN_RINTL)
#define shim_rintl(x)	__builtin_rintl(x)
#else
#if defined(HAVE_RINTL)
#define shim_rintl(x)	rintl(x)
#else
#define shim_rintl(x)	shim_rint(x)
#endif
#endif

#if defined(HAVE_BUILTIN_LOG)
#define shim_log(x)	__builtin_log(x)
#else
#define shim_log(x)	log(x)
#endif

#if defined(HAVE_BUILTIN_LOGL)
#define shim_logl(x)	__builtin_logl(x)
#else
#if defined(HAVE_LOGL)
#define shim_logl(x)	logl(x)
#else
#define shim_logl(x)	shim_log(x)
#endif
#endif

#if defined(HAVE_BUILTIN_EXP)
#define shim_exp(x)	__builtin_exp(x)
#else
#define shim_exp(x)	exp(x)
#endif

#if defined(HAVE_BUILTIN_EXPL)
#define shim_expl(x)	__builtin_expl(x)
#else
#if defined(HAVE_EXPL) && !defined(__HAIKU__)
#define shim_expl(x)	expl(x)
#else
#define shim_expl(x)	shim_exp(x)
#endif
#endif

#if defined(HAVE_BUILTIN_CEXP)
#define shim_cexp(x)	__builtin_cexp(x)
#else
#define shim_cexp(x)	cexp(x)
#endif

#if defined(HAVE_BUILTIN_COSF)
#define shim_cosf(x)	__builtin_cosf(x)
#else
#define shim_cosf(x)	cosf(x)
#endif

#if defined(HAVE_BUILTIN_COS)
#define shim_cos(x)	__builtin_cos(x)
#else
#define shim_cos(x)	cos(x)
#endif

#if defined(HAVE_BUILTIN_COSL)
#define shim_cosl(x)	__builtin_cosl(x)
#else
#if defined(HAVE_COSL)
#define shim_cosl(x)	cosl(x)
#else
#define shim_cosl(x)	((long double)shim_cos((double)(x)))
#endif
#endif

#if defined(HAVE_BUILTIN_COSHL)
#define shim_coshl(x)	__builtin_coshl(x)
#else
#if defined(HAVE_COSHL)
#define shim_coshl(x)	coshl(x)
#else
#define shim_coshl(x)	((long double)cosh((double)(x)))
#endif
#endif

#if defined(HAVE_BUILTIN_CCOS)
#define shim_ccos(x)	__builtin_ccos(x)
#else
#if defined(HAVE_CCOS)
#define	shim_ccos(x)	ccos(x)
#else
#define	shim_ccos(x)	shim_cos(x)
#endif
#endif

#if defined(HAVE_BUILTIN_CCOSF)
#define shim_ccosf(x)	__builtin_ccosf(x)
#else
#if defined(HAVE_CCOSF)
#define	shim_ccosf(x)	ccosf(x)
#else
#define	shim_ccosf(x)	shim_ccos(x)
#endif
#endif

#if defined(HAVE_BUILTIN_CCOSL)
#define shim_ccosl(x)	__builtin_ccosl(x)
#else
#if defined(HAVE_CCOSL)
#define	shim_ccosl(x)	ccosl(x)
#else
#define	shim_ccosl(x)	((long double complex)shim_ccos((double complex)(x))
#endif
#endif

#if defined(HAVE_BUILTIN_SINF)
#define shim_sinf(x)	__builtin_sin(x)
#else
#define shim_sinf(x)	sinf(x)
#endif

#if defined(HAVE_BUILTIN_SIN)
#define shim_sin(x)	__builtin_sin(x)
#else
#define shim_sin(x)	sin(x)
#endif

#if defined(HAVE_BUILTIN_SINL)
#define shim_sinl(x)	__builtin_sinl(x)
#else
#if defined(HAVE_SINL)
#define shim_sinl(x)	sinl(x)
#else
#define shim_sinl(x)	((long double)shim_sin((double)(x)))
#endif
#endif

#if defined(HAVE_BUILTIN_SINHL)
#define shim_sinhl(x)	__builtin_sinhl(x)
#else
#if defined(HAVE_SINHL)
#define shim_sinhl(x)	sinhl(x)
#else
#define shim_sinhl(x)	((long double)sinh((double)(x)))
#endif
#endif

#if defined(HAVE_BUILTIN_CSIN)
#define shim_csin(x)	__builtin_csin(x)
#else
#if defined(HAVE_CSIN)
#define	shim_csin(x)	csin(x)
#else
#define	shim_csin(x)	shim_sin(x)
#endif
#endif

#if defined(HAVE_BUILTIN_CSINF)
#define shim_csinf(x)	__builtin_csinf(x)
#else
#if defined(HAVE_CSINF)
#define	shim_csinf(x)	csinf(x)
#else
#define	shim_csinf(x)	shim_csin(x)
#endif
#endif

#if defined(HAVE_BUILTIN_CSINL)
#define shim_csinl(x)	__builtin_csinl(x)
#else
#if defined(HAVE_CSINL)
#define	shim_csinl(x)	csinl(x)
#else
#define	shim_csinl(x)	(long double complex)shim_csin((double complex)(x))
#endif
#endif

#if defined(HAVE_BUILTIN_SQRT)
#define shim_sqrt(x)	__builtin_sqrt(x)
#else
#define shim_sqrt(x)	sqrt(x)
#endif

#if defined(HAVE_BUILTIN_SQRTL)
#define shim_sqrtl(x)	__builtin_sqrtl(x)
#else
#if defined(HAVE_SQRTL)
#define shim_sqrtl(x)	sqrtl(x)
#else
#define shim_sqrtl(x)	shim_sqrt(x)
#endif
#endif

#if defined(HAVE_BUILTIN_FABS)
#define shim_fabs(x)	__builtin_fabs(x)
#else
#define shim_fabs(x)	fabs(x)
#endif

#if defined(HAVE_BUILTIN_FABSL)
#define shim_fabsl(x)	__builtin_fabsl(x)
#else
#define shim_fabsl(x)	fabsl(x)
#endif

#if defined(HAVE_BUILTIN_RINT)
#define shim_rint(x)	__builtin_rint(x)
#else
#define shim_rint(x)	rint(x)
#endif

#if defined(HAVE_BUILTIN_ROUNDL)
#define shim_roundl(x)	__builtin_roundl(x)
#else
#define shim_roundl(x)	roundl(x)
#endif

#endif
