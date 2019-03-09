/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achavez <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/04 20:37:50 by achavez           #+#    #+#             */
/*   Updated: 2019/03/08 20:17:05 by achavez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRINTF_H
# define PRINTF_H
# include <stdarg.h>
# include "libft.h"

typedef struct 		s_data
{
	// important and must be stored in struct
	va_list 		arg;
	char			*traverse;
	char			flags[4];
	int				width;
	int				precision;
	enum			len{NONE = 0, l = 1, h = 2, L = 3, ll = 4, hh = 5} length;


	//just used to hold data from va_arg()
	char			*str;
	unsigned int	i;
	int				p;
	double			f;
	void			*v;
}					t_data;

int		printf(const char * restrict format, ...);
int		make_printf(t_data *p);

#endif
