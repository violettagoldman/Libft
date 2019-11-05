/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgoldman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/07 20:01:47 by vgoldman          #+#    #+#             */
/*   Updated: 2019/10/08 14:57:38 by vgoldman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*res;
	char	*str;

	res = NULL;
	str = (char *)s;
	while (*str)
	{
		if (*str == c)
			res = str;
		str++;
	}
	if (res)
		return (res);
	if (c == '\0')
		return (str);
	return (0);
}
