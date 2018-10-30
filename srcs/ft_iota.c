/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iota.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achavez <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/26 18:13:57 by achavez           #+#    #+#             */
/*   Updated: 2018/10/27 18:52:59 by achavez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	get_numlen(int n)
{
	size_t	i;

	i = 1;
	while (n /= 10)
		++i;
	return (i);
}
char	*ft_iota(int n)
{
	char	*str;
	size_t	len;

	len = get_numlen(n);
	if (n < 0)
		len++;
	if (!(str = ft_strnew(len)))
		return (NULL);
	str[--len] = (n % 10) + '0';
	while (n /= 10)
		str[--len] = (n % 10) + '0';
	if (n < 0)
		*(str + 0) = '-';
	return (str);
}
