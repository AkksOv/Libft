/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jepenoy <jepenoy@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 16:46:05 by jepenoy           #+#    #+#             */
/*   Updated: 2024/10/15 16:47:54 by jepenoy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>
#include"libft.h"

char *ft_strdup(const char *s)
{
	char	*str;
	int		i;

	i = -1;
	str = malloc(sizeof(char) * (ft_strlen(s) + 1));
	if (str == NULL)
		return (0);
	while (++i, s[i])
		str[i] = s[i];
	str[i] = '\0';
	return (str);
}
