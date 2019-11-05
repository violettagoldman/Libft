/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgoldman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/07 20:09:49 by vgoldman          #+#    #+#             */
/*   Updated: 2019/10/07 20:10:10 by vgoldman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	size_t	len;
	void	*copy;

	len = ft_strlen(s1) + 1;
	copy = malloc(len);
	if (copy == NULL)
		return (NULL);
	return ((char *)ft_memcpy(copy, s1, len));
}
