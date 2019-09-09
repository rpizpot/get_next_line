/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpizpot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/10 17:46:33 by rpizpot           #+#    #+#             */
/*   Updated: 2019/04/10 20:02:01 by rpizpot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list *new_list;
	t_list *tmp;

	if (!lst)
		return (NULL);
	if (!f)
		return (NULL);
	tmp = f(lst);
	new_list = tmp;
	while (lst->next)
	{
		lst = lst->next;
		if (!lst)
		{
			free(lst);
			return (NULL);
		}
		tmp->next = f(lst);
		tmp = tmp->next;
	}
	return (new_list);
}
