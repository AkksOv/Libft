/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jepenoy <jepenoy@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 16:46:05 by jepenoy           #+#    #+#             */
/*   Updated: 2024/10/21 17:15:14 by jepenoy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strdup(const char *s)
{
	char	*str;
	int		i;

	if (!s)
		return (0);
	
	i = -1;
	str = malloc(sizeof(char) * (ft_strlen(s) + 1));
	if (str == NULL)
		return (0);
	while (++i, s[i])
		str[i] = s[i];
	str[i] = '\0';
	return (str);
}
