/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achavez <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/25 15:23:22 by achavez           #+#    #+#             */
/*   Updated: 2018/10/25 16:05:05 by achavez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	char	*nstr;
	int		i;

	i = 0;
	if (!s)
		return (NULL);
	nstr = ft_strnew(ft_strlen(s));
	if (!nstr)
		return (NULL);
	while (*(s + i++))
		*(nstr + i) = f(*(s + i));
	return (nstr);
}
