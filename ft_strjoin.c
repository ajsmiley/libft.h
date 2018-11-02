/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achavez <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/25 16:39:51 by achavez           #+#    #+#             */
/*   Updated: 2018/10/26 17:51:32 by achavez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*newstr;
	size_t	len1;
	size_t	len2;
	size_t	i;
	size_t	j;

	if (!s1 || !s2)
		return (NULL);
	i = 0;
	j = 0;
	len1 = ft_strlen(s1);
	len2 = ft_strlen(s2);
	newstr = ft_strnew(len1 + len2);
	if (!newstr)
		return (NULL);
	while (i++ < len1)
		*(newstr + i) = *(s1 + i);
	while (j++ < len2)
		*(newstr + i++) = *(s2 + j);
	return (newstr);
}
