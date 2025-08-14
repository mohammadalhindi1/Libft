/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malhendi <malhendi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/10 20:36:18 by malhendi          #+#    #+#             */
/*   Updated: 2025/08/14 17:02:37 by malhendi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t	i;

	i = 0;
	if (!dest && !src)
		return (NULL);
	while (i < n)
	{
		((unsigned char *)dest)[i] = ((unsigned char *)src)[i];
		i++;
	}
	return (dest);
}

/*
int main(void)
{
    char src[] = "Hello";
    char dest1[10];
    char dest2[10];
    
    memcpy(dest1, src, 6);
    ft_memcpy(dest2, src, 6);

    printf("Orig_memcpy: %s\n", dest1);
    printf("My ft_memcpyy: %s\n", dest2);

    return 0;
}
*/
