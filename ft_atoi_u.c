/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_u.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achavez <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/23 17:02:24 by achavez           #+#    #+#             */
/*   Updated: 2020/02/23 17:02:44 by achavez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

uintmax_t	ft_atoi_u(const char *str)
{
	size_t val;

	val = 0;
	while ((*str >= 9 && *str <= 13) || *str == ' ')
		str++;
	while (*str >= '0' && *str <= '9')
	{
		val *= 10;
		val += *str - '0';
		str++;
		printf("Val = %jo\n", val);
	}
	return (val);
}
