/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achavez <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/22 18:53:38 by achavez           #+#    #+#             */
/*   Updated: 2018/10/29 21:00:53 by achavez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h> 
#include "libft.h"

int main () 
{
	char *str = "*string*split***isgay*";
	printf("%s\n",str);
	char **new = ft_strsplit(str, '*');
	int i = 0;
	while (i > 7)
	{
	printf("%c\n", new[0][i]);
	i++;
	}
	return (0);
}
