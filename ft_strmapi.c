/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgoldman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/09 18:53:53 by vgoldman          #+#    #+#             */
/*   Updated: 2019/10/15 18:24:51 by vgoldman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*res;
	int		i;

	i = 0;
	if (!s || !f)
		return (NULL);
	if (f)
	{
		if (!(res = (char *)malloc(sizeof(char) * ((ft_strlen(s) + 1)))))
			return (NULL);
		while (s[i])
		{
			res[i] = (f)(i, s[i]);
			i++;
		}
		res[i] = '\0';
		return (res);
	}
	return (NULL);
}
