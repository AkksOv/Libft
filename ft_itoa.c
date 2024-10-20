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

static int	count_signs(long int n)
{
	int	i;

	i = 0;
	if (n == 0)
		return 1;
	if (n < 0)
	{
		i = 1;
		n *= -1;
	}
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
	long int nb;

	nb = (long int) n;
	size = count_signs(nb);
	res = malloc(sizeof(char) * (size +1));
	if (res == NULL)
		return (0);
	res[size] = '\0';
	if (nb == 0)
	    res[0] = '0';
	if (nb < 0)
	{
		nb *= -1;
		res[0] = '-';
	}
	while (--size, nb > 0)
	{
		res[size] = nb % 10 + '0';
		nb /= 10;
	}
	return (res);
}
