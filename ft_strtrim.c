/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jepenoy <jepenoy@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 14:11:15 by jepenoy           #+#    #+#             */
/*   Updated: 2024/10/16 14:52:34 by jepenoy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

static	int	is_include(char c,const char *set)
{
	int	i;

	i = 0;
	while (set[i])
	{
		if (set[i] == c)
			return (i);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		i;
	int		j;
	int		count;
	char	*res;

	i = 0;
	while (s1[i])
	{
		if (!(is_include(s1[i],set)))
			count++;
		i++;
	}
	res = malloc(sizeof(char) * (count + 1));
	if (res == NULL)
		return (0);
	i = -1;
	j = 0;
	while (++i, s1[i])
	{
		if (!(is_include(s1[i],set)))
			res[j++] = s1[i];
	}
	res[j] = '\0';
	return (res);
}
