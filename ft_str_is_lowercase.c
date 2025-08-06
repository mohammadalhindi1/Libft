/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malhendi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/05 21:13:49 by malhendi          #+#    #+#             */
/*   Updated: 2025/01/05 21:40:49 by malhendi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include <unistd.h>

int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0 ;
	while (str[i] != '\0')
	{
		if (str[i] < 'a' || str[i] > 'z')
			return (0);
		i++;
	}
	return (1);
}
/*
 * int main(void)
{
    char str[] = "h2i";
    int a ;
    
    a = ft_str_is_lowercase(str);
    
    printf("%s - %d\n", str,a );
    printf("%s - %d\n", str, ft_str_is_lowercase(str));
}
*/
