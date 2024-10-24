/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jepenoy <jepenoy@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 14:11:15 by jepenoy           #+#    #+#             */
/*   Updated: 2024/10/21 17:30:02 by jepenoy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

static int	is_include(char c, const char *set)
{
	int	i;

	i = 0;
	while (set[i])
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

static int	count_char(char const *s, char const *set)
{
	int	i;
	int	j;

	j = (int)ft_strlen(s);
	i = 0;
	while (s[i] && is_include(s[i], set))
		i++;
	while (is_include(s[j - 1], set) && (j - 1) > i)
		j--;
	return (j - i);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		i;
	int		j;
	int		k;
	int		count;
	char	*res;

	if (s1 == NULL || set == NULL)
		return (NULL);
	i = 0;
	k = 0;
	count = count_char(s1, set);
	res = malloc(sizeof(char) * (count + 1));
	if (res == NULL)
		return (0);
	while (s1[i] && is_include(s1[i], set))
		i++;
	j = i + count;
	while (i < j)
		res[k++] = s1[i++];
	res[k] = '\0';
	return (res);
}
