/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malhendi <malhendi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/10 20:37:25 by malhendi          #+#    #+#             */
/*   Updated: 2025/08/14 17:04:56 by malhendi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	size_t			m;
	unsigned char	*str;

	m = 0;
	str = s;
	while (m < n)
	{
		str[m] = c;
		m++;
	}
	return (s);
}

/*
int	main(void)
{
	char str[] = "mohammad"; 
    char str2[] = "mohammad"; 
    
    memset(str, 'a', 3);
	ft_memset(str2, 'a', 3);
	
	printf("%s\n", str);
	printf("%s\n", str2);
}
*/