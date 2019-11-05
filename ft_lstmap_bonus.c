/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgoldman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/10 19:35:18 by vgoldman          #+#    #+#             */
/*   Updated: 2019/10/14 21:19:28 by vgoldman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void		lstadd_back(t_list **alst, t_list *new)
{
	t_list *copy;

	if (!alst)
		return ;
	copy = *alst;
	if (!(*alst))
	{
		*alst = new;
		return ;
	}
	if (copy)
	{
		while (copy->next)
			copy = copy->next;
		copy->next = new;
	}
}

static t_list	*lstnew(void const *content)
{
	t_list *node;

	if (!(node = (t_list *)malloc(sizeof(t_list))))
		return (NULL);
	node->content = (void *)content;
	node->next = NULL;
	return (node);
}

t_list			*ft_lstmap(t_list *lst, void *(*f)(void*))
{
	t_list *copy;
	t_list *new;

	if (!lst || !f)
		return (NULL);
	copy = lst;
	new = NULL;
	while (copy)
	{
		lstadd_back(&new, lstnew(f(copy->content)));
		copy = copy->next;
	}
	return (new);
}
