/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgoldman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/10 19:21:13 by vgoldman          #+#    #+#             */
/*   Updated: 2019/10/14 20:48:24 by vgoldman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list *temp;
	t_list *node;

	if (!lst || !del)
		return ;
	node = *lst;
	while (node)
	{
		temp = node->next;
		del(node->content);
		free(node);
		node = temp;
	}
	*lst = NULL;
}
