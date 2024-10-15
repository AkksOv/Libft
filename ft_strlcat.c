/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jepenoy <jepenoy@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 11:38:46 by jepenoy           #+#    #+#             */
/*   Updated: 2024/10/15 12:57:02 by jepenoy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>
#include"libft.h"
size_t	ft_strlcat(char *dest, char *src, size_t size)
{
	size_t	i;
	size_t	j;
	size_t	dest_length;

	j = 0;
	i = 0;
	dest_length = 0;
	if (size > 0)
	{
		while (dest[i] != '\0')
			i++;
		dest_length = i;
		while (src[j] != '\0' && i < size - 1)
		{
			dest[i] = src[j];
			i++;
			j++;
		}
		if (j > 0)
			dest[i] = '\0';
	}
	return (ft_strlen(src)+dest_length);
}
