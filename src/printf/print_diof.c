/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_diof.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achavez <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/26 18:23:40 by achavez           #+#    #+#             */
/*   Updated: 2020/02/26 19:01:24 by achavez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

void	print_di_2(t_data *p, intmax_t num, int neg)
{
	if (p->width > ft_getdigits(num))
	{
		if (p->flags[0] == '0' && p->precision == -1)
			print_symbols(p, neg, num);
		handle_width_intv2(neg, num, p);
		if (p->flags[0] != '0' || (p->flags[0] == '0' &&
			(p->width > p->precision) && p->precision != -1))
			print_symbols(p, neg, num);
	}
	else
		print_symbols(p, neg, num);
	handle_precision_intv2(num, p);
	if (p->precision != 0 && p->precision != -2)
		ft_putnbr(num);
}

void	print_di(t_data *p)
{
	intmax_t	num;
	int			neg;

	num = di_length(p);
	neg = 0;
	if (num < 0)
	{
		num *= -1;
		neg = 1;
	}
	if (p->flags[3] == '-')
	{
		print_symbols(p, neg, num);
		handle_precision_intv2(num, p);
		if (p->precision != 0 && p->precision != -2)
			ft_putnbr(num);
		if (p->width > ft_getdigits(num))
			handle_width_intv2(neg, num, p);
	}
	else
		print_di_2(p, num, neg);
}

void	print_o2(t_data *p, uintmax_t num)
{
	if (p->width > ft_getdigits(num))
	{
		if (p->flags[0] == '0' && p->precision == -1)
			print_symbols(p, 3, (int)num);
		handle_u_width_intv2(num, ft_getdigits(num), p);
		if (p->flags[0] != '0' || (p->flags[0] == '0' &&
			(p->width > p->precision) && p->precision != -1))
			print_symbols(p, 3, (int)num);
	}
	else
		print_symbols(p, 3, (int)num);
	handle_u_precision_intv2(num, ft_getdigits(num), p);
	if (p->precision != 0 && p->precision != -2)
		ft_putnbr_u(num);
}

void	print_o(t_data *p)
{
	uintmax_t	num;

	num = oux_length(p);
	num = ft_u_num_to_base((intmax_t)num, 8);
	if (p->flags[3] == '-')
	{
		print_symbols(p, 3, (int)num);
		handle_u_precision_intv2(num, ft_getdigits(num), p);
		if (p->precision != 0 && p->precision != -2)
			ft_putnbr_u(num);
		if (p->width > ft_getdigits(num))
			handle_u_width_intv2(num, ft_getdigits(num), p);
	}
	else
		print_o2(p, num);
}

void	print_f(t_data *p)
{
	long double		f;
	char			*tmp;

	f = f_length(p);
	tmp = ft_putfloat(f, p->precision);
	if (p->width > (int)ft_strlen(tmp))
		tmp = handle_width_int(tmp, p);
	ft_putstr(tmp);
}
