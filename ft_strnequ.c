/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strequ.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achavez <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/25 16:12:49 by achavez           #+#    #+#             */
/*   Updated: 2018/10/25 16:18:35 by achavez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strnequ(char const *str1, char const *str2, size_t n)
{
	if (!str1 || !str2)
		return (0);
	return (ft_strncmp(str1, str2, n) ? 1 : 0);
}
