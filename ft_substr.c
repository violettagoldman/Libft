/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgoldman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/08 15:14:36 by vgoldman          #+#    #+#             */
/*   Updated: 2019/10/16 10:41:58 by vgoldman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*str;
	char			*res;
	unsigned int	i;
	unsigned int	st;

	str = (char *)s;
	res = NULL;
	i = 0;
	st = start;
	if (!str || len == 0 || ft_strlen(str) + 1 < start)
		return (ft_calloc(sizeof(char), 1));
	while (s[i] && i < len)
		i++;
	if (!(res = (char *)malloc((i + 1) * sizeof(char))))
		return (0);
	i = 0;
	while (*str && len > 0)
	{
		res[i++] = str[st++];
		len--;
	}
	res[i] = '\0';
	return (res);
}
