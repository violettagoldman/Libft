/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgoldman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/07 20:06:12 by vgoldman          #+#    #+#             */
/*   Updated: 2019/10/08 14:18:44 by vgoldman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	unsigned int	i;
	unsigned int	j;
	char			*str;
	char			*find;

	str = (char *)haystack;
	find = (char *)needle;
	i = 0;
	if (ft_strncmp(find, "", 1) == 0)
		return (str);
	while (str[i] && i < len)
	{
		j = 0;
		while (find[j] == str[i + j] && i + j < len)
		{
			if (find[j + 1] == '\0')
				return (str + i);
			j++;
		}
		i++;
	}
	return (NULL);
}
