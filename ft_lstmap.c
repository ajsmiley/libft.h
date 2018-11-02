/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achavez <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/30 17:11:09 by achavez           #+#    #+#             */
/*   Updated: 2018/10/31 17:22:53 by achavez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*first;
	t_list	*prev;
	t_list	*new;

	first = NULL;
	if (lst != NULL)
	{
		first = ft_lstnew(lst->content, lst->content_size);
		if (first == NULL)
			return (NULL);
		first = f(first);
		prev = first;
		lst = lst->next;
	}
	while (lst != NULL)
	{
		new = ft_lstnew(lst->content, lst->content_size);
		if (new == NULL)
			return (NULL);
		new = f(new);
		prev->next = new;
		lst = lst->next;
	}
	return (first);
}
