/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnlen.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achavez <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/23 20:54:02 by achavez           #+#    #+#             */
/*   Updated: 2018/10/23 20:57:45 by achavez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strnlen(const char *str, size_t maxlen)
{
	char *p;

	p = ft_memchr(str, 0, maxlen);
	if (p == NULL)
		return (maxlen);
	else
		return (p - str);
}
