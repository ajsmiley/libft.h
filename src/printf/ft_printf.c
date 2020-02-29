/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achavez <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/04 20:36:56 by achavez           #+#    #+#             */
/*   Updated: 2020/02/23 17:30:38 by achavez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "printf.h"

void	parse_format(t_data *p)
{
	find_conversions(p);
	determine_specifier(p);
}

int		make_printf(t_data *p)
{
	int rtn;

	rtn = 0;
	while (*p->traverse != '\0')
	{
		if (*p->traverse != '%')
		{
			ft_putchar(*p->traverse);
			rtn++;
		}
		else if (*p->traverse == '%')
		{
			p->traverse++;
			parse_format(p);
			rtn += p->reee;
			reset_struct(p);
		}
		p->traverse++;
	}
	return (rtn);
}

int		ft_printf(const char *restrict format, ...)
{
	t_data	p;
	int		done;

	ft_bzero(&p, sizeof(p));
	reset_struct(&p);
	p.traverse = (char*)format;
	va_start(p.arg, format);
	done = make_printf(&p);
	va_end(p.arg);
	return (done);
}

void	reset_struct(t_data *p)
{
	p->width = 0;
	p->precision = -1;
	p->length = 0;
	ft_memset((void*)p->flags, '\0', 5);
}
