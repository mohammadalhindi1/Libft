/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malhendi <malhendi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/18 17:18:06 by malhendi          #+#    #+#             */
/*   Updated: 2025/08/18 17:52:15 by malhendi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	if (!s || fd == -1)
		return ;
	while (*s)
		write(fd, s++, 1);
	write(fd, "\n", 1);
}

/*
int	main(void)
{
    ft_putendl_fd("Hello, world!", 1);
    ft_putendl_fd("Error happened!", 2);
    return (0);
}
*/