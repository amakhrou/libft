/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amakhrou <amakhrou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 17:41:42 by amakhrou          #+#    #+#             */
/*   Updated: 2022/11/08 16:36:50 by amakhrou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	l;
	char	*p;
	size_t	i;
	size_t	x;
	size_t	y;

	i = 0;
	x = 0;
	y = 0;
	l = ft_strlen(s1) + ft_strlen(s2);
	p = malloc(l + 1);
	if (p == NULL)
		return (NULL);
	while (s1[x])
	{
		p[i++] = s1[x++];
	}
	while (s2[y])
	{
		p[i++] = s2[y++];
	}
	p[i] = '\0';
	return (p);
}
