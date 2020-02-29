/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achavez <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/07 14:48:02 by achavez           #+#    #+#             */
/*   Updated: 2019/04/25 15:35:12 by achavez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char	*ft_itoa_base(int value, int base)
{
	char	*s;
	long	num;
	int		sign;
	int		i;

	num = (value < 0) ? -(long)value : value;
	sign = (value < 0 && base == 10) ? -1 : 0;
	i = (sign == -1) ? 2 : 1;
	while ((num /= base) >= 1)
		i++;
	s = (char*)malloc(sizeof(char) * (i + 1));
	s[i] = '\0';
	num = (value < 0) ? -(long)value : value;
	while (i-- + sign)
	{
		s[i] = (num % base < 10) ? num % base + '0' : num % base + 'A' - 10;
		num /= base;
	}
	(i == 0) ? s[i] = '-' : 0;
	return (s);
}
