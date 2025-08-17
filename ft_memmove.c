/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malhendi <malhendi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/10 20:36:42 by malhendi          #+#    #+#             */
/*   Updated: 2025/08/14 17:03:10 by malhendi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t	i;

	if (!dest && !src)
		return (NULL);
	if (dest > src)
	{
		while (n--)
			((unsigned char *)dest)[n] = ((unsigned char *)src)[n];
	}
	else
	{
		i = 0;
		while (i < n)
		{
			((unsigned char *)dest)[i] = ((unsigned char *)src)[i];
			i++;
		}
	}
	return (dest);
}

/*
int	main(void)
{
	char	str1[];
	char	str2[];

    str1[] = "HellaWorld";
    str2[] = "HelloWorld";
    memmove(str1 + 5, str1, 5);
    ft_memmove(str2 + 5, str2, 5);
    printf("Origm_emmove: %s\n", str1);
    printf("My ft_memmove: %s\n", str2);
    return (0);
}
*/
