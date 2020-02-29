/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_u.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achavez <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/24 18:18:22 by achavez           #+#    #+#             */
/*   Updated: 2020/02/23 14:52:41 by achavez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_itoa_u(uintmax_t n)
{
	char *s;

	if ((s = (char *)malloc(sizeof(char) * 2)))
	{
		if (n >= 10)
			s = ft_strjoin(ft_itoa_u(n / 10), ft_itoa_u(n % 10));
		else if (n < 10)
		{
			s[0] = n + '0';
			s[1] = '\0';
		}
		return (s);
	}
	return (NULL);
}
