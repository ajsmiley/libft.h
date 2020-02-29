/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achavez <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/24 16:10:06 by achavez           #+#    #+#             */
/*   Updated: 2018/11/09 14:53:34 by achavez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *hay, const char *ned, size_t len)
{
	size_t i;
	size_t j;

	if (*ned == '\0')
		return ((char *)hay);
	i = 0;
	while (hay[i] && i < len)
	{
		j = 0;
		while (hay[i + j] && i + j < len && ned[j] && hay[i + j] == ned[j])
			j++;
		if (ned[j] == '\0')
			return ((char *)(hay + i));
		i++;
	}
	return (NULL);
}
