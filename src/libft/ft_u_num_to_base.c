/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_u_num_to_base.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achavez <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/23 17:01:05 by achavez           #+#    #+#             */
/*   Updated: 2020/02/23 17:02:01 by achavez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

uintmax_t	ft_u_num_to_base(uintmax_t num, int base)
{
	uintmax_t	temp[4200];
	int			i;
	int			j;
	uintmax_t	rtn;

	if (num == 0 || num == 10)
		return (num);
	i = 0;
	while (num != 0)
	{
		temp[i] = num % base;
		i++;
		num /= base;
	}
	j = i - 1;
	rtn = 0;
	while (j >= 0)
	{
		rtn *= 10;
		rtn += temp[j];
		j--;
	}
	return (rtn);
}
