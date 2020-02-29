/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_format.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achavez <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/09 19:11:50 by achavez           #+#    #+#             */
/*   Updated: 2020/02/23 17:48:23 by achavez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

void	determine_specifier(t_data *p)
{
	if (*p->traverse == 's')
		print_s(p);
	if (*p->traverse == 'c')
		print_c(p, -42);
	if (*p->traverse == 'd' || *p->traverse == 'i')
		print_di(p);
	if (*p->traverse == 'o')
		print_o(p);
	if (*p->traverse == 'u' || *p->traverse == 'U')
		print_u(p);
	if (*p->traverse == 'x' || *p->traverse == 'X')
		print_x(p);
	if (*p->traverse == 'f')
		print_f(p);
	if (*p->traverse == 'p')
		print_p(p);
	if (*p->traverse == '%')
		print_c(p, 42);
}

void	parse_flags(t_data *p)
{
	if (*p->traverse == '#')
		p->flags[1] = '#';
	else if (*p->traverse == '0' && !ft_isdigit(*(p->traverse - 1)))
		p->flags[0] = '0';
	else if (*p->traverse == '+')
		p->flags[2] = '+';
	else if (*p->traverse == '-')
		p->flags[3] = '-';
	else if (*p->traverse == ' ')
		p->flags[4] = ' ';
}

void	parse_conversion(t_data *p)
{
	if (*p->traverse == 'h')
	{
		if (p->length != h)
			p->length = h;
		else if (p->length == h)
			p->length = hh;
	}
	if (*p->traverse == 'l')
	{
		if (p->length != l)
			p->length = l;
		else if (p->length == l)
			p->length = ll;
	}
	if (*p->traverse == 'L')
		p->length = L;
	if (*p->traverse == 'j')
		p->length = j;
	if (*p->traverse == 'z')
		p->length = z;
}

void	find_conversions(t_data *p)
{
	while ((ft_strchr_c("#0-+ .123456789hlLjz", *p->traverse)))
	{
		(ft_strchr_c("#0-+ ", *p->traverse) ? parse_flags(p) : 0);
		if (ft_strchr_c("123456789", *p->traverse))
		{
			p->width = (p->width * 10) + ft_atoi(p->traverse);
			p->traverse++;
		}
		if (*p->traverse == '.')
		{
			p->traverse++;
			if (*p->traverse >= '0' && *p->traverse <= '9')
			{
				p->precision = ft_atoi(p->traverse);
				p->traverse++;
			}
			else
				p->precision = -2;
		}
		(ft_strchr_c("hlLjz", *p->traverse)) ? parse_conversion(p) : 0;
		(ft_strchr_c("#0-+ .123456789hjLlz", *p->traverse)) ? p->traverse++ : 0;
	}
}
