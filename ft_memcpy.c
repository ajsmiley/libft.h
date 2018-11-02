/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achavez <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/22 20:12:13 by achavez           #+#    #+#             */
/*   Updated: 2018/10/30 15:26:48 by achavez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	char		*d;
	char const	*s;
	int			i;

	d = dest;
	s = src;
	i = 0;
	while (n-- > 1)
	{
		d[i] = s[i];
		i++;
	}
	d[i] = '\0';
	return (dest);
}
