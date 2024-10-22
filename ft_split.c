/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jepenoy <jepenoy@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 17:26:03 by jepenoy           #+#    #+#             */
/*   Updated: 2024/10/21 17:14:52 by jepenoy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

static char	*ft_strncpy(char *dest, const char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

static int	count_words(const char *s, char c)
{
	int	i;
	int	res;

	if (c == '\0')
		return (1);
	res = 0;
	i = 0;
	while (s[i] == c)
		i++;
	while (s[i])
	{
		while (s[i] != c && s[i])
			i++;
		while (s[i] == c)
			i++;
		res++;
	}
	return (res);
}

static char	*ft_set_strings(const char *str, int f, int l)
{
	char	*temp;

	temp = malloc(sizeof(char) * ((l - f) + 2));
	if (temp == NULL)
		return (0);
	return (ft_strncpy(temp, str + f, (l - f) + 1));
}

static char	*free_allocated_memory(char **res, int count)
{
    for (int i = 0; i < count; i++)
    {
        free(res[i]);
    }
    free(res);
	return (0);
}

char	**ft_split(char const *s, char c)
{
	char	**res;
	int		count;
	int		i;
	int		start;
	int		end;

	end = 0;
	res = malloc(sizeof(char *) * (count_words(s, c) + 1));
	if (res == NULL)
		return (0);
	count = 0;
	i = 0;
	while (s[i])
	{
		while (s[i] == c && s[i] != '\0')
			i++;
		start = i;
		while (s[i] != c && s[i] != '\0')
			end = i++;
		if (start <= end)
			res[count++] = ft_set_strings(s, start, end);
		if (res[count - 1] == NULL)
			return free_allocated_memory(res, count - 1);
	}
	res[count] = NULL;
	return (res);
}
