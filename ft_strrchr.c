/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jepenoy <jepenoy@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 13:20:40 by jepenoy           #+#    #+#             */
/*   Updated: 2024/10/18 15:31:19 by jepenoy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	int		temp;
	char	*d;

	d = (char *)s;
	if (c == 0)
		return (d + ft_strlen(s));
	if (c > 255)
		return (d);

	i = 0;
	temp = -1;
	while (d[i])
	{
		if (d[i] == c)
			temp = i;
		i++;
	}
	if (temp > -1)
		return (d + temp);
	return (0);
}
