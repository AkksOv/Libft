/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jepenoy <jepenoy@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 17:26:03 by jepenoy           #+#    #+#             */
/*   Updated: 2024/10/21 16:49:58 by jepenoy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"


#include<stdio.h>



static  char	*ft_strncpy(char *dest, const char *src, unsigned int n)
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

static int count_words(const char *s, char c)
{
	int i;
	int res;

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


char **ft_split(char const *s, char c)
{
	char **res;
	int count;
	int i;
	int start;
	int end;

	end = 0;
	res = malloc(sizeof(char *) * (count_words(s, c) + 1));
	if (res == NULL)
		return (0);

	count = 0;
	i = 0;
	while (s[i])
	{
		while (s[i] == c && s[i] != '\0')
			start = i++;
		while (s[i] != c && s[i] != '\0')
			end = i++;
		if (start <= end)
			res[count++] = ft_set_strings(s, start, end);
	}
	res[count] = NULL;
	return (res);
}
