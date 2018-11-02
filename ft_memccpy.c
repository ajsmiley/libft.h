/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memccpy.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achavez <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/23 12:55:09 by achavez           #+#    #+#             */
/*   Updated: 2018/10/30 15:35:09 by achavez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	void *p;

	p = ft_memchr(src, c, n);
	if (p != NULL)
	{
		return (ft_memcpy(dest, src, p - src + 2));
	}
	ft_memcpy(dest, src, n);
	return (NULL);
}
