/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgoldman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/08 18:05:14 by vgoldman          #+#    #+#             */
/*   Updated: 2019/10/15 18:30:45 by vgoldman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char				*res;
	unsigned int		i;
	unsigned int		j;

	j = 0;
	i = 0;
	if (!s1 || !s2)
		return (NULL);
	if (!(res = (char *)malloc(sizeof(char) * (ft_strlen(s1) +
		ft_strlen(s2) + 1))))
		return (NULL);
	while (i < ft_strlen(s1))
	{
		res[i] = s1[i];
		i++;
	}
	while (j < ft_strlen(s2))
	{
		res[i + j] = s2[j];
		j++;
	}
	res[i + j] = '\0';
	return (res);
}
