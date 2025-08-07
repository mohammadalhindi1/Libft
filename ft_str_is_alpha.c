/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malhendi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/06 21:43:13 by malhendi          #+#    #+#             */
/*   Updated: 2025/01/06 21:43:20 by malhendi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0 ;
	while (str[i] != '\0')
	{
		if ((str[i] < 'a' || str[i] > 'z') && (str[i] < 'A' || str[i] > 'Z'))
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
    
    a = ft_str_is_alpha(str);
    
    printf("%s - %d\n", str,a );
    printf("%s - %d\n", str, ft_str_is_alpha(str));
}
*/
