/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jepenoy <jepenoy@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 14:09:28 by jepenoy           #+#    #+#             */
/*   Updated: 2024/10/15 14:21:00 by jepenoy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>

void *ft_memchr(const void *s, int c, size_t n)
{
    const unsigned char *p; 
	p = s;


	while(n)
	{
		if (p == c)
			return (p);
		n--;
	}
	return (0);
}