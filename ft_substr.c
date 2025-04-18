/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jepenoy <jepenoy@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 13:47:18 by jepenoy           #+#    #+#             */
/*   Updated: 2024/10/25 11:00:57 by jepenoy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

static char	*allocempty(void)
{
	char	*res;

	res = malloc(sizeof(char) * 1);
	if (res == NULL)
		return (0);
	res[0] = '\0';
	return (res);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*res;
	size_t	j;

	if (!s)
		return (0);
	if (len > (ft_strlen(s) - start))
		len = ft_strlen(s) - start;
	if (start >= ft_strlen(s))
		return (allocempty());
	j = 0;
	res = malloc(sizeof(char) * (len + 1));
	if (res == NULL)
		return (0);
	while (j < len && s[start] != '\0')
	{
		res[j] = s[start];
		j++;
		start++;
	}
	res[j] = '\0';
	return (res);
}
