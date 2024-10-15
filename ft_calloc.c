/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jepenoy <jepenoy@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 16:31:29 by jepenoy           #+#    #+#             */
/*   Updated: 2024/10/15 16:44:26 by jepenoy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>
#include "libft.h"

void *ft_calloc(size_t nmemb, size_t size) {
    size_t total_size;
	void *ptr;

	total_size = nmemb * size;
    if (nmemb != 0 && total_size / nmemb != size)
        return (NULL); 
    ptr = malloc(total_size);
    if (!ptr)
        return (NULL);
    ft_memset(ptr, 0, total_size);
    return (ptr);
}