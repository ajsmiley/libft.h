/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handle_length.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achavez <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/21 20:11:04 by achavez           #+#    #+#             */
/*   Updated: 2020/02/23 17:46:41 by achavez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

intmax_t		di_length(t_data *p)
{
	intmax_t	x;

	if (p->length == hh)
		x = (signed char)va_arg(p->arg, int);
	else if (p->length == h)
		x = (short)va_arg(p->arg, int);
	else if (p->length == l)
		x = (long)va_arg(p->arg, long int);
	else if (p->length == ll)
		x = (long long)va_arg(p->arg, long long int);
	else if (p->length == j)
		x = (intmax_t)va_arg(p->arg, intmax_t);
	else if (p->length == z)
		x = (size_t)va_arg(p->arg, size_t);
	else
		x = (int)va_arg(p->arg, int);
	x = (intmax_t)x;
	return (x);
}

uintmax_t		oux_length(t_data *p)
{
	uintmax_t	o;

	if (p->length == hh)
		o = (unsigned char)va_arg(p->arg, unsigned int);
	else if (p->length == h)
		o = (unsigned short)va_arg(p->arg, unsigned int);
	else if (p->length == ll)
		o = (unsigned long long)va_arg(p->arg, unsigned long long int);
	else if (p->length == l)
		o = (unsigned long)va_arg(p->arg, unsigned long int);
	else if (p->length == j)
		o = (uintmax_t)va_arg(p->arg, uintmax_t);
	else if (p->length == z)
		o = (size_t)va_arg(p->arg, size_t);
	else
		o = (unsigned int)va_arg(p->arg, unsigned int);
	o = (uintmax_t)o;
	return (o);
}

long double		f_length(t_data *p)
{
	long double	f;

	if (p->length == L)
		f = (long double)va_arg(p->arg, long double);
	else
		f = (double)va_arg(p->arg, double);
	f = (long double)f;
	return (f);
}
