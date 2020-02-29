/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_specifiers2.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achavez <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/18 19:11:56 by achavez           #+#    #+#             */
/*   Updated: 2020/02/26 19:23:45 by achavez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

void	print_s(t_data *p)
{
	char	*s;

	s = va_arg(p->arg, char *);
	if (s == NULL)
		print_str("(null)", p);
	else
		print_str(s, p);
}

void	print_str(char *s, t_data *p)
{
	char	*pre;

	pre = handle_precision(p->precision, s);
	if (p->width > 0)
	{
		if (p->precision == -1)
			pre = handle_width(s, p);
		else
			pre = handle_width(pre, p);
	}
	if (pre == NULL)
		ft_putstr(s);
	else
		ft_putstr(pre);
}

void	print_c(t_data *p, int percent)
{
	int		c;

	if (percent == 42)
		c = '%';
	else
		c = va_arg(p->arg, int);
	if (p->width > 1 && p->flags[3] == '-')
	{
		ft_putchar(c);
		while (p->width-- > 1)
			ft_putchar(' ');
	}
	else
	{
		while (p->width-- > 1)
			p->flags[0] != '0' ? ft_putchar(' ') : ft_putchar('0');
		ft_putchar(c);
	}
}
