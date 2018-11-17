/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memccpy.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achavez <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/23 12:55:09 by achavez           #+#    #+#             */
/*   Updated: 2018/11/09 20:28:29 by achavez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	char			*sr;
	char			*ds;
	size_t			i;

	sr = (char *)src;
	ds = (char *)dst;
	i = -1;
	while (++i < n)
	{
		ds[i] = sr[i];
		if ((unsigned char)sr[i] == (unsigned char)c)
			return ((char *)(dst + ++i));
	}
	return (NULL);
}
