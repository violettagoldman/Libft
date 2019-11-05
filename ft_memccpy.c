/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgoldman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/07 18:50:44 by vgoldman          #+#    #+#             */
/*   Updated: 2019/10/07 18:54:13 by vgoldman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	unsigned char		*d;
	const unsigned char *s;

	d = dst;
	s = src;
	while (n--)
	{
		*d++ = *s;
		if (*s++ == (unsigned char)c)
			return (d++);
	}
	return (NULL);
}
