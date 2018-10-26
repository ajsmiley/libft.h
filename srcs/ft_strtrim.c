/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achavez <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/25 18:52:22 by achavez           #+#    #+#             */
/*   Updated: 2018/10/25 19:49:58 by achavez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	char	*nstr;
	int		i;

	i = 0;
	if (!s)
		return (NULL);
	nstr = ft_strnew(ft_strlen(s));
	if (nstr)
	{
		while (*s++)
		{
			if (*s != ' ' && *s != '\t' && *s != '\n')
				nstr[i++] = *s;
		}
		nstr[i] = '\0';
	}
	return (nstr);
}
