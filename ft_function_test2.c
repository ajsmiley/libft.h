/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_function_test2.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achavez <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/01 20:46:47 by achavez           #+#    #+#             */
/*   Updated: 2018/11/01 22:22:12 by achavez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

void	ft_function_test2()
{
	/* function memalloc */
	printf("memalloc() -- Allocates and returns a fresh memory area: \n\n");
	char *str = "Hello World I'm about to be cut :(";
	printf("Before memalloc: %s\n", str);
	str = ft_memalloc(13);
	printf("After memalloc: %s\n\n", str);

	/* function memdel */
	printf("memdel() -- Takes address of a memory area that needs to be freed and points the pointer to NULL: \n\n");
	char *str1 = "PLS WORK :(";
	void **dest;
	dest[1] = str1;
	printf("Before memdel: %s\n", str1);
	ft_memdel(dest);
	printf("After memdel: %s\n\n", str1);

	/* function strnew */
	printf("strnew() -- returns a fresh string ending with a null character:\n\n");
	char *str2 = "This function is ft_strnew()";
	printf("Before strnew: %s\n", str2);
	str2 = ft_strnew(1);
	str2 = "Hello again";
	printf("After strnew: %s\n\n", str2);

	/* function strdel */
	printf("strdel() -- Takes address of a string that needs to be freed and sets it to NULL\n\n");	
}
