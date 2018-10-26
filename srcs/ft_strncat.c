/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achavez <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/23 20:39:55 by achavez           #+#    #+#             */
/*   Updated: 2018/10/23 21:08:40 by achavez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncat(char *dest, const char *src, size_t n)
{
	unsigned len1;
	unsigned len2;

	len1 = ft_strlen(dest);
	len2 = ft_strlen(src);
	if (len2 > n)
		ft_strcpy(&dest[len1], src);
	else
	{
		ft_strncpy(&dest[len1], src, n);
		dest[len1 + n] = '\0';
	}
	return (dest);
}
