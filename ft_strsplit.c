/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achavez <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/27 18:53:16 by achavez           #+#    #+#             */
/*   Updated: 2018/11/09 19:50:29 by achavez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_skipdelim(char const *st, char d)
{
	size_t i;

	i = 0;
	while (st[i] == d)
		i++;
	return (i);
}

static size_t	ft_wordlen(char const *str, char e)
{
	size_t j;

	j = 0;
	while (str[j] && str[j] != e)
		j++;
	return (j);
}

static size_t	ft_wordcount(char const *rts, char f)
{
	size_t wee;

	wee = 0;
	while (*rts)
	{
		rts += ft_skipdelim(rts, f);
		if (*rts)
		{
			rts += ft_wordlen(rts, f);
			wee++;
		}
	}
	return (wee);
}

char			**ft_strsplit(char const *s, char c)
{
	int		a;
	char	**n;
	int		lim;

	a = 0;
	if (s == NULL)
		return (NULL);
	lim = (int)ft_wordcount(s, c);
	if ((n = (char **)malloc(sizeof(char *) * (lim + 1))))
	{
		while (lim--)
		{
			while (*s == c && *s)
				s++;
			n[a] = ft_strsub(s, 0, ft_wordlen(s, c));
			if (n[a] == NULL)
				return (NULL);
			s += ft_wordlen(s, c);
			a++;
		}
		n[a] = 0;
		return (n);
	}
	return (NULL);
}
