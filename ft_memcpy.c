/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jepenoy <jepenoy@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 11:35:57 by jepenoy           #+#    #+#             */
/*   Updated: 2024/10/21 12:58:15 by jepenoy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>

void *ft_memcpy(void *dest, const void *src, size_t n) {
    unsigned char *d = (unsigned char *)dest;
    const unsigned char *s = (const unsigned char *)src;

	if(dest == NULL)
		return (0);
	if(src == NULL)
		return dest;
    while (n--)
        *d++ = *s++;
    return dest;
}
