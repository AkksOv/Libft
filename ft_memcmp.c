/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jepenoy <jepenoy@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 14:50:11 by jepenoy           #+#    #+#             */
/*   Updated: 2024/10/15 15:03:48 by jepenoy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>

int ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char *t1; 
	unsigned char *t2;
	int i;

    i = 0;
	t1 = (unsigned char*) s1;
	t2 = (unsigned char*) s2;

	while(t1[i] == t2[i] && n)
	{
		n--;
	    i++;
	}
	return (t1[i] - t2[i]);
}
