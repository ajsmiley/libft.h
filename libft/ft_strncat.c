/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achavez <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/23 20:39:55 by achavez           #+#    #+#             */
/*   Updated: 2018/11/01 16:11:04 by achavez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncat(char *dest, const char *src, size_t n)
{
	int i;
	int j;

	i = -1;
	j = (int)ft_strlen(dest);
	while (*(src + ++i) && i < (int)n)
		*(dest + j++) = *(src + i);
	*(dest + j) = '\0';
	return (dest);
}
