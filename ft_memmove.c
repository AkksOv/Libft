/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jepenoy <jepenoy@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 11:35:28 by jepenoy           #+#    #+#             */
/*   Updated: 2024/10/15 11:35:44 by jepenoy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>

void *ft_memmove(void *dest, const void *src, size_t n) {
    unsigned char *d = (unsigned char *)dest;
    const unsigned char *s = (const unsigned char *)src;

    if (d == s || n == 0)
    {
      return dest;  
    }

    if (d < s)
    {
        while (n--)
            *d++ = *s++;
        
    } else
    {
        d += n;
        s += n;
        while (n--)
        {
          *(--d) = *(--s);
        }
    }
    return dest;
}
