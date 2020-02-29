/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_specifiers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achavez <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/15 14:49:35 by achavez           #+#    #+#             */
/*   Updated: 2020/02/26 19:07:36 by achavez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

void	print_p(t_data *p)
{
	int		x;
	char	*str;

	x = va_arg(p->arg, int);
	str = ft_itoa_base(x, 16);
	p->str = ft_strjoin("0x10", str);
	ft_strlower(p->str);
	if (p->width > 11 && p->flags[3] == '-')
	{
		ft_putstr(p->str);
		while (p->width-- > 11)
			ft_putchar(' ');
	}
	else
	{
		while (p->width-- > 11)
			p->flags[0] != '0' ? ft_putchar(' ') : ft_putchar('0');
		ft_putstr(p->str);
	}
}

void	print_x2(t_data *p, char *str, uintmax_t num)
{
	if (p->width > (int)ft_strlen(str))
	{
		if (p->flags[0] == '0' && p->precision == -1)
			print_symbols(p, 3, (int)num);
		handle_u_width_intv2(num, ft_strlen(str), p);
		if (p->flags[0] != '0' || (p->flags[0] == '0' &&
			(p->width > p->precision) && p->precision != -1))
			print_symbols(p, 3, (int)num);
	}
	else
		print_symbols(p, 3, (int)num);
	handle_u_precision_intv2(num, ft_strlen(str), p);
	if (p->precision != 0 && p->precision != -2)
		ft_putstr(str);
}

void	print_x(t_data *p)
{
	uintmax_t		num;
	char			*str;

	num = oux_length(p);
	str = ft_itoa_base_u(num, 16);
	if (*p->traverse == 'x')
		ft_strlower(str);
	num = ft_u_num_to_base((intmax_t)num, 16);
	if (p->flags[3] == '-')
	{
		print_symbols(p, 3, (int)num);
		handle_u_precision_intv2(num, ft_strlen(str), p);
		if (p->precision != 0 && p->precision != -2)
			ft_putstr(str);
		if (p->width > (int)ft_strlen(str))
			handle_u_width_intv2(num, ft_strlen(str), p);
	}
	else
		print_x2(p, str, num);
}

void	print_u2(t_data *p, uintmax_t num)
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
		ft_putnbr(num);
}

void	print_u(t_data *p)
{
	uintmax_t	num;

	num = oux_length(p);
	if (p->flags[3] == '-')
	{
		print_symbols(p, 3, (int)num);
		handle_u_precision_intv2(num, ft_getdigits(num), p);
		if (p->precision != 0 && p->precision != -2)
			ft_putnbr(num);
		if (p->width > ft_getdigits(num))
			handle_u_width_intv2(num, ft_getdigits(num), p);
	}
	else
		print_u2(p, num);
}
