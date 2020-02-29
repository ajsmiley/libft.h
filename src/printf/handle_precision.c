/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handle_precision.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achavez <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/26 19:42:38 by achavez           #+#    #+#             */
/*   Updated: 2020/02/26 20:24:37 by achavez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

char	*handle_precision(int precision, char *str)
{
	char	*tmp;
	int		i;

	if (precision == -1)
		return (NULL);
	else if (precision == -2)
		return ("");
	else
		i = -1;
	tmp = ft_strnew(42);
	while (++i != precision)
		tmp[i] = str[i];
	return (tmp);
}

void	handle_u_precision_intv2(uintmax_t num, int digits, t_data *p)
{
	int		i;
	int		overflow;

	i = 0;
	overflow = p->precision - digits;
	if (p->flags[1] == '#' && (int)num != 0 && *p->traverse != 'x' &&
			*p->traverse != 'X')
		overflow--;
	if (overflow > 0 && p->precision != -1)
		while (overflow-- > 0)
			ft_putnbr(0);
}

void	handle_precision_intv2(intmax_t num, t_data *p)
{
	int i;
	int	overflow;

	i = 0;
	overflow = p->precision - ft_getdigits(num);
	if (overflow > 0 && p->precision != -1)
		while (overflow-- > 0)
			ft_putnbr(0);
}

void	print_symbols(t_data *p, int neg, int num)
{
	if ((p->precision != 0 && p->precision != -2) || *p->traverse == 'o'
			|| *p->traverse == 'd' || *p->traverse == 'i')
	{
		if (neg == 0 && p->flags[2] == '+')
			ft_putchar('+');
		else if ((p->flags[1] == '#' && (p->precision == -2 || p->precision
						== 0)) || (p->flags[1] == '#' && num != 0))
		{
			if (*p->traverse == 'X')
				ft_putstr("0X");
			else if (*p->traverse == 'x')
				ft_putstr("0x");
			else
				ft_putchar('0');
		}
		else if (neg == 1)
			ft_putchar('-');
		else if (p->flags[4] == ' ' && neg != 1 && p->flags[2] != '+')
			ft_putchar(' ');
	}
}
