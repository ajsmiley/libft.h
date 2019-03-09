/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achavez <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/04 20:36:56 by achavez           #+#    #+#             */
/*   Updated: 2019/03/08 20:17:11 by achavez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "printf.h"

void	parse_format(t_data *p)
{
	int i = 0;

	//check_flag(t_data *p);

	if (*p->traverse == 's')
	{
		p->str = va_arg(p->arg, char *);
		ft_putstr(p->str);
	}
	if (*p->traverse == 'c')
	{
		p->i = va_arg(p->arg, int);
		ft_putchar(p->i);
	}
	if (*p->traverse == 'd' || *p->traverse == 'i')
	{
		p->i = va_arg(p->arg, int);
		ft_putnbr(p->i);
	}
	if (*p->traverse == 'o')
	{
		p->p = va_arg(p->arg, int);
		p->str = ft_itoa_base(p->p, 8);
		ft_putstr(p->str);
	}
	if (*p->traverse == 'u')
	{
		p->i = va_arg(p->arg, unsigned int);
		ft_putnbr_u(p->i);
	}
	if (*p->traverse == 'x' || *p->traverse == 'X')
	{
		p->i = va_arg(p->arg, unsigned int);
		p->str = ft_itoa_base(p->i, 16);
		if (*p->traverse == 'x')
		{
			while (p->str[i] != '\0')
			{
				if (p->str[i] >= 'A' && p->str[i] <= 'Z')
					p->str[i] = ft_tolower(p->str[i]);
				i++;
			}
		}
		ft_putstr(p->str);
	}
	if (*p->traverse == 'f')
	{
		p->f = va_arg(p->arg, double);
		ft_putfloat(p->f);
	}
}

int		make_printf(t_data *p)
{
	while(*p->traverse != '\0')
	{
		if (*p->traverse != '%')
			ft_putchar(*p->traverse);
		else if (*p->traverse == '%')
		{
			p->traverse++;
			parse_format(p);
		}
		p->traverse++;
	}
	return (0);
}

int		ft_printf(const char * restrict format, ...)
{
	t_data	p;
	int		done;

	ft_bzero(&p, sizeof(p));
	p.traverse = (char*)format;
	va_start(p.arg, format);
	done = make_printf(&p);
	va_end(p.arg);

	return (done);
}
