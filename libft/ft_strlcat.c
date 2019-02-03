/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achavez <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/23 21:09:02 by achavez           #+#    #+#             */
/*   Updated: 2018/11/09 18:56:11 by achavez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *restrict dest, const char *restrict src, size_t n)
{
	char		*d;
	const char	*s;
	size_t		size;
	size_t		dlen;

	d = dest;
	s = src;
	size = n;
	while (size-- != 0 && *d != '\0')
		d++;
	dlen = d - dest;
	size = n - dlen;
	if (size == 0)
		return ((dlen + ft_strlen(s)));
	while (*s != '\0')
	{
		if (size != 1)
		{
			*d++ = *s;
			size--;
		}
		s++;
	}
	*d = '\0';
	return ((dlen + (s - src)));
}
