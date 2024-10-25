/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jepenoy <jepenoy@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 16:10:04 by jepenoy           #+#    #+#             */
/*   Updated: 2024/10/25 10:38:49 by jepenoy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t		size;
	size_t		i;
	size_t		j;
	char		*res;

	i = 0;
	j = 0;
	if (s1 == NULL || s2 == NULL)
		return (0);
	size = (ft_strlen(s1) + ft_strlen(s2));
	res = malloc(sizeof(char) * (size + 1));
	if (res == NULL)
		return (0);
	while (i < ft_strlen(s1))
	{
		res[i] = s1[i];
		i++;
	}
	while (i < size)
		res[i++] = s2[j++];
	res[i] = '\0';
	return (res);
}
