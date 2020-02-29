/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handle_width.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achavez <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/25 12:57:16 by achavez           #+#    #+#             */
/*   Updated: 2020/02/26 20:19:02 by achavez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

char	*handle_width(char *str, t_data *p)
{
	char	*tmp;
	char	*buff;
	int		i;

	if (p->width < (int)ft_strlen(str))
		return (str);
	buff = ft_strnew(p->width);
	i = -1;
	while (++i != (p->width - (int)ft_strlen(str)))
	{
		if (p->flags[0] == '0')
			buff[i] = '0';
		else
			buff[i] = ' ';
	}
	if (p->flags[3] == '-')
		tmp = ft_strjoin(str, buff);
	else
		tmp = ft_strjoin(buff, str);
	return (tmp);
}

void	handle_width_intv2(int neg, intmax_t num, t_data *p)
{
	int		i;
	int		length;

	i = -1;
	if (p->width > p->precision && p->precision != -1)
		p->precision > ft_getdigits(num) ? length = p->width - p->precision :
		(length = p->width - ft_getdigits(num));
	else
		length = p->width - ft_getdigits(num);
	if (neg == 1 || (neg == 0 && p->flags[2] == '+') ||
			(neg == 0 && p->flags[4] == ' '))
		length--;
	if (p->precision == -2 || p->precision == 0)
		length++;
	while (++i != length)
		if (p->precision < p->width && p->flags[0] == '0' && p->precision != -1)
			ft_putchar(' ');
		else
			p->flags[0] == '0' ? ft_putchar('0') : ft_putchar(' ');
}

char	*handle_width_int(char *str, t_data *p)
{
	char	*buff;
	char	*tmp;
	int		i;

	i = -1;
	buff = ft_strnew(p->width);
	while (++i != (p->width - (int)ft_strlen(str)))
	{
		if (p->precision < p->width && p->precision != -1)
			buff[i] = ' ';
		else
		{
			if (p->flags[0] == '0')
				buff[i] = '0';
			else
				buff[i] = ' ';
		}
	}
	if (p->flags[3] == '-')
		tmp = ft_strjoin(str, buff);
	else
		tmp = ft_strjoin(buff, str);
	return (tmp);
}

void	handle_u_extended(t_data *p, int i, int length)
{
	if (p->precision == -2 || p->precision == 0)
		length++;
	while (++i < length)
		if (p->precision < p->width && p->flags[0] == '0' && p->precision != -1)
			ft_putchar(' ');
		else
			p->flags[0] == '0' ? ft_putchar('0') : ft_putchar(' ');
}

void	handle_u_width_intv2(uintmax_t num, int digits, t_data *p)
{
	int		i;
	int		length;

	i = -1;
	if (p->width > p->precision && p->precision != -1)
		p->precision > digits ? length = p->width - p->precision :
		(length = p->width - digits);
	else
		length = p->width - digits;
	if (p->flags[2] == '+' || p->flags[4] == ' ' || (p->flags[1] == '#' &&
				(num != 0 && p->precision != 0 && p->precision != -2)))
	{
		if (*p->traverse == 'x' || *p->traverse == 'X')
			length -= 2;
		else
			length--;
	}
	if (p->flags[1] == '#' && (p->precision > digits &&
				p->precision > p->width && num != 0))
		length++;
	handle_u_extended(p, i, length);
}
