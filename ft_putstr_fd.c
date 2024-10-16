/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jepenoy <jepenoy@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 11:45:04 by jepenoy           #+#    #+#             */
/*   Updated: 2024/10/16 13:00:09 by jepenoy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

void ft_putstr_fd(char *s, int fd)
{
	int i;

	i = 0;
	while(s[i])
		ft_putchar_fd(s[i++],fd);
	ft_putchar_fd('\n', fd);
}