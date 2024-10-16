/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jepenoy <jepenoy@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 13:24:46 by jepenoy           #+#    #+#             */
/*   Updated: 2024/10/16 13:52:40 by jepenoy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>

static int	count_signs(int n)
{
	int	i;

	i = 0;
	while (n > 0)
	{
		n /= 10;
		i++;
	}
	return (i);
}


char	*ft_itoa(int n)
{
	int		size;
	char	*res;

	size = count_signs(n);
	res = malloc(sizeof(char) * size);
	if (res == NULL)
		return (0);
	res[size] = '\0';
	while (--size >= 0)
	{
		res[size] = n % 10 + '0';
		n /= 10;
	}
	return (res);
}
