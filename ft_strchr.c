/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jepenoy <jepenoy@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 13:07:02 by jepenoy           #+#    #+#             */
/*   Updated: 2024/10/15 13:19:18 by jepenoy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char *ft_strchr(const char *s, int c)
{
    char *res;
    res = (char*) s;
	while(s)
	{
		if (*res == c)
			return (res);
		res++;
	}
	return (0);
}
