/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgoldman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/09 16:44:36 by vgoldman          #+#    #+#             */
/*   Updated: 2019/10/16 19:41:24 by vgoldman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char		*substr(char const *s, unsigned int start, size_t len)
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

static int		is_in_charset(char c, char *str)
{
	int		i;

	i = 0;
	while (str[i])
	{
		if (str[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char			*ft_strtrim(char const *s1, char const *set)
{
	int		min;
	int		max;
	int		res;
	char	*st;
	char	*str;

	min = 0;
	max = 0;
	st = (char *)set;
	str = (char *)s1;
	if (!str || !set)
		return (NULL);
	max = ft_strlen(s1);
	while (str[min] && is_in_charset(s1[min], st))
		min++;
	while (min < max && is_in_charset(s1[max - 1], st))
		max--;
	if (min == max)
		return (ft_calloc(sizeof(char), 1));
	res = max - min;
	return (substr(s1, min, res));
}
