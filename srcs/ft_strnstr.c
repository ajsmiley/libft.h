/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achavez <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/24 16:10:06 by achavez           #+#    #+#             */
/*   Updated: 2018/10/24 19:35:04 by achavez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *hay, const char *ned, size_t len)
{
	int		i;
	int		search;
	size_t	nlen;

	i = 0;
	nlen = ft_strnlen(ned, len);
	search = len - nlen;
	if (nlen == 0)
		return ((char *)hay);
	while (i++ <= search)
	{
		if (hay[0] == ned[0] && ft_strncmp(hay, ned, nlen))
			return ((char *)hay);
		hay++;
	}
	return (NULL);
}
