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

void *ft_calloc(size_t nmemb, size_t size)
{
	if(nmemb == 0 || size == 0)
		return 0;
	return(malloc(nmemb * size));
}