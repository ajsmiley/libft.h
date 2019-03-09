/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putfloat.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achavez <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/08 15:22:50 by achavez           #+#    #+#             */
/*   Updated: 2019/03/08 16:06:42 by achavez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putfloat(double n)
{
	signed long int	decimal;
	signed long int num;

	if (n < 0)
	{
		ft_putchar('-');
		n *= -1;
	}
	num = (signed long int)n;
	ft_putnbr(num);
	ft_putchar('.');
	n -= num;
	n *= 1000000;
	decimal = (signed long int)(n + 0.5);
	ft_putnbr(decimal);
}
