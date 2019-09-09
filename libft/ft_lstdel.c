/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpizpot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/10 16:34:47 by rpizpot           #+#    #+#             */
/*   Updated: 2019/04/10 17:08:17 by rpizpot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	t_list *tmp;

	if (!alst)
		return ;
	tmp = *alst;
	while (tmp)
	{
		*alst = tmp;
		del((*alst)->content, (*alst)->content_size);
		free(*alst);
		*alst = NULL;
		tmp = tmp->next;
	}
}
