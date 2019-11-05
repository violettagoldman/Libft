/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front_bonus.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgoldman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/10 18:52:12 by vgoldman          #+#    #+#             */
/*   Updated: 2019/10/14 19:09:40 by vgoldman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **alst, t_list *new)
{
	if (!alst)
		return ;
	if (!(*alst))
	{
		*alst = new;
		return ;
	}
	if (alst && new)
	{
		new->next = *alst;
		*alst = new;
	}
}
