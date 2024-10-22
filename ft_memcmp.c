/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jepenoy <jepenoy@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 14:50:11 by jepenoy           #+#    #+#             */
/*   Updated: 2024/10/22 12:40:36 by jepenoy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*t1;
	unsigned char	*t2;

	if (n == 0)
		return (0);
	t1 = (unsigned char *)s1;
	t2 = (unsigned char *)s2;
	while (n > 0 && *t1 == *t2)
	{
		n--;
		t1++;
		t2++;
	}
	if (n == 0)
		return (0);
	else
		return (*t1 - *t2);
}
