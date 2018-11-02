/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achavez <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/27 18:53:16 by achavez           #+#    #+#             */
/*   Updated: 2018/10/30 13:29:37 by achavez          ###   ########.fr       */
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

	wee = 1;
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
	int		bee;
	char	**n;
	int		lim;

	a = 0;
	bee = 0;
	lim = (int)ft_wordcount(s, c);
	if ((n = (char **)malloc(sizeof(char *) * lim)))
	{
		while (s[a] && a < (int)ft_strlen(s) && bee < lim)
		{
			a += ft_skipdelim(s, c);
			if (s[a] && a < (int)ft_strlen(s) && bee < lim)
			{
				n[bee] = (char *)malloc(sizeof(char)
						* ft_wordlen((s + a), c) + 1);
				ft_memcpy(n[bee++], (s + a), (ft_wordlen((s + a), c) + 1));
				a += (ft_wordlen((s + a), c) + 1);
			}
		}
		n[lim] = NULL;
		return (n);
	}
	return (NULL);
}
