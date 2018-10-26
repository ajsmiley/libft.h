/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achavez <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/24 14:05:31 by achavez           #+#    #+#             */
/*   Updated: 2018/10/24 16:08:59 by achavez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *haystack, const char *needle)
{
	size_t len;

	len = ft_strlen(needle);
	while (*haystack)
	{
		if (*haystack == *needle)
		{
			if (!ft_strncmp(haystack, needle, len))
				return ((char *)haystack);
		}
		haystack++;
	}
	return (NULL);
}
