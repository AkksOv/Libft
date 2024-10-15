/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jepenoy <jepenoy@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 13:20:40 by jepenoy           #+#    #+#             */
/*   Updated: 2024/10/15 13:36:11 by jepenoy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char *ft_strrchr(const char *s, int c)
{
    int i;
    int temp;
    char *d;
    
    i = 0;
    temp = -1;
    d = (char*) s;
	while(d[i])
	{
		if (d[i] == c)
			temp = i;
		i++;
	}
	if(temp > -1)
	    return (d + temp);
	return (0);
}
