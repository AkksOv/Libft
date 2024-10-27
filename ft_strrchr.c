/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jepenoy <jepenoy@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 13:20:40 by jepenoy           #+#    #+#             */
/*   Updated: 2024/10/22 13:42:04 by jepenoy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strrchr(const char *s, int c)
{
    int i;
    int temp;
    char *d;
    char tc;

    tc = (char)c;
    d = (char *)s;
    if (tc == '\0')
        return (d + ft_strlen(s));
    i = 0;
    temp = -1;
    while (d[i])
    {
        if (d[i] == tc)
            temp = i;
        i++;
    }
    if (temp != -1)
        return (d + temp);
    return (NULL);
}
