/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achavez <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/24 13:47:41 by achavez           #+#    #+#             */
/*   Updated: 2018/11/09 15:57:49 by achavez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int ch)
{
	char *rtn;

	rtn = NULL;
	while (*str != '\0')
	{
		if (*str == (char)ch)
			rtn = (char *)str;
		str++;
	}
	if (*str == (char)ch)
		return ((char*)str);
	else
		return (rtn);
}
