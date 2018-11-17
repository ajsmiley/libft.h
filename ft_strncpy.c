/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achavez <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/23 20:16:30 by achavez           #+#    #+#             */
/*   Updated: 2018/11/09 20:30:24 by achavez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncpy(char *dest, const char *src, size_t len)
{
	size_t i;

	i = -1;
	while (++i < len)
		if (*(src + i))
			*(dest + i) = *(src + i);
		else
			while (i < len)
				*(dest + i++) = '\0';
	return (dest);
}
