/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malhendi <malhendi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/18 17:18:08 by malhendi          #+#    #+#             */
/*   Updated: 2025/08/18 17:45:32 by malhendi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	if (!s || fd == -1)
		return ;
	write(fd, s, ft_strlen(s));
}
/*
int	main(void)
{
    ft_putstr_fd("Hello World!", 1);  // يطبع على الشاشة (stdout)
    write(1, "\n", 1);
    ft_putstr_fd("Error happened!", 2); // يطبع على stderr
    write(2, "\n", 1);
    return (0);
}
*/