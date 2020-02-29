/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achavez <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/25 16:39:51 by achavez           #+#    #+#             */
/*   Updated: 2018/11/09 19:48:40 by achavez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char *d;
	char *s;

	if (s1 == NULL && s2 == NULL)
		return (ft_strnew(0));
	else if (s1 == NULL)
		return (ft_strdup(s2));
	else if (s2 == NULL)
		return (ft_strdup(s1));
	d = ft_strnew(ft_strlen(s1) + ft_strlen(s2));
	if (d == NULL)
		return (NULL);
	s = d;
	while (*s1 != '\0')
		*s++ = *s1++;
	while (*s2 != '\0')
		*s++ = *s2++;
	*s = '\0';
	return (d);
}
