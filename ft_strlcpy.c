/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jepenoy <jepenoy@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 11:32:57 by jepenoy           #+#    #+#             */
/*   Updated: 2024/10/15 11:34:06 by jepenoy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>
#include"libft.h"

size_t	ft_strlcpy(char *dest, char *src, size_t size)
{
	size_t	src_length;
	size_t	i;

	src_length = ft_strlen(src);
	i = 0;
	if (size > 0)
	{
		while (src[i] != '\0' && i < size - 1)
		{
			dest[i] = src[i];
			i++;
		}
		dest[i] = '\0';
	}
	return (src_length);
}
