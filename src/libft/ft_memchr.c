/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achavez <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/23 13:15:11 by achavez           #+#    #+#             */
/*   Updated: 2018/11/09 20:22:18 by achavez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *src, int c, size_t len)
{
	unsigned char	*i;
	unsigned char	l;

	i = (unsigned char *)src;
	l = (unsigned char)c;
	while (len--)
	{
		if (*i == l)
			return (i);
		i++;
	}
	return (NULL);
}
