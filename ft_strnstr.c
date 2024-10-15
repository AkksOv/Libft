/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jepenoy <jepenoy@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 15:46:54 by jepenoy           #+#    #+#             */
/*   Updated: 2024/10/15 16:25:41 by jepenoy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include<stdlib.h>

char *ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t i;
	size_t j;
	
	char *res = (char*) big;
	i = 0;
	while(big[i] && i < len)
	{
		j = 0;
		while (big[i+j] == little[j]&& (i + j) < len)
		{
			if(little[j+1] == '\0')
				return (res + i);
			j++;
		}
		i++;
	}
	return (0);
}
