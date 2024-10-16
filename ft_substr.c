/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jepenoy <jepenoy@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 13:47:18 by jepenoy           #+#    #+#             */
/*   Updated: 2024/10/16 14:07:53 by jepenoy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>

char *ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*res;
	size_t		j;

	j = 0;
	res = malloc(sizeof(char) * (len + 1));
	if (res == NULL)
		return (0);
	while (j <= len)
		res[j++] = s[start++];
	res[j] = '\0';
	return (res);
}