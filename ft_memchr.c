/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgoldman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/07 18:57:23 by vgoldman          #+#    #+#             */
/*   Updated: 2019/10/13 19:10:25 by vgoldman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const char *src;

	src = s;
	while (n--)
	{
		if (*src == c)
			return ((void *)src);
		src++;
	}
	return (NULL);
}
