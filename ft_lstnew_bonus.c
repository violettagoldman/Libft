/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgoldman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/10 18:01:50 by vgoldman          #+#    #+#             */
/*   Updated: 2019/10/14 21:17:29 by vgoldman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void const *content)
{
	t_list *node;

	if (!(node = (t_list *)malloc(sizeof(t_list))))
		return (NULL);
	node->content = (void *)content;
	node->next = NULL;
	return (node);
}
