/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putfloat.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achavez <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/08 15:22:50 by achavez           #+#    #+#             */
/*   Updated: 2020/02/23 17:17:14 by achavez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

double		ft_pow(int base, int exp)
{
	double result;

	result = 1.0;
	if (exp < 0)
		return (-1);
	while (exp)
	{
		if (exp & 1)
			result *= base;
		exp >>= 1;
		base *= base;
	}
	return (result);
}

void		ft_reverse(char *str, int len)
{
	int i;
	int temp;
	int j;

	i = 0;
	temp = 0;
	j = len - 1;
	while (i < j)
	{
		temp = str[i];
		str[i] = str[j];
		str[j] = temp;
		i++;
		j--;
	}
}

void		ft_decimal_str(int x, char str[], int d)
{
	int i;

	i = 0;
	while (x)
	{
		str[i++] = (x % 10) + '0';
		x = x / 10;
	}
	while (i < d)
		str[i++] = '0';
	ft_reverse(str, i);
	str[i] = '\0';
}

long long	ft_calculate_decimal(long double n, int p)
{
	long long	decimal;
	long long	d2;
	int			i;
	char		*str;
	char		test[99];

	i = 0;
	d2 = 0;
	n *= (long long)ft_pow(10, p);
	decimal = (long long)(n + 0.5);
	str = ft_itoa((int)decimal);
	while (p > 0)
	{
		test[i] = str[i];
		d2 += (ft_atoi(&test[i]) * ft_pow(10, (p - 1)));
		i++;
		p--;
	}
	return (d2);
}

char		*ft_putfloat(long double n, int precision)
{
	long long		num;
	int				p;
	char			*dstr;
	char			*tmp;

	p = 6;
	tmp = ft_strnew(42);
	dstr = ft_strnew(42);
	precision == -1 ? 0 : (p = precision);
	if (n < 0)
	{
		tmp[0] = '-';
		n *= -1;
	}
	num = (long long)n;
	n -= num;
	tmp = ft_strjoin(tmp, ft_itoa(num));
	ft_decimal_str(ft_calculate_decimal(n, p), dstr, p);
	if (p != 0)
	{
		tmp = ft_strjoin(tmp, ".");
		tmp = ft_strjoin(tmp, dstr);
	}
	return (tmp);
}
