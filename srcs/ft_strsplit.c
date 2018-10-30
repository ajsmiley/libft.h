/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achavez <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/27 18:53:16 by achavez           #+#    #+#             */
/*   Updated: 2018/10/29 14:57:47 by achavez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		list_len(const char *s, char c)
{
	int len;

	len = 0;
	if (*s != c && *s != 0)
	{
		len++;
		s++;
	}
	while (*s != 0)
	{
		if (*s != c && s[-1] == c)
			len++;
		s++;
	}
	return (len + 1);
}

char	**ft_strsplit(const char *s, char c)
{
	unsigned int 	i;
	unsigned int 	j;
	char			**array;

	if (s == NULL)
		return (NULL);
	array = (char **)malloc(sizeof(char *) * list_len(s, c));
	if (!array)
		return (NULL);
	j = 0;
	while (*s != 0)
	{
		i = 0;
		while (s[i] != c && s[i] != 0)
			i++;
		if (i)
		{
			array[j++] = ft_strncpy(ft_strnew(i), s, i);
			s = &s[i];
		}
		else
			s++;
	}
	array[j] = NULL;
	return (array);
}
