/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malhendi <malhendi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/10 20:35:49 by malhendi          #+#    #+#             */
/*   Updated: 2025/08/14 17:03:59 by malhendi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		if (((unsigned char *)s1)[i] != ((unsigned char *)s2)[i])
			return (((unsigned char *)s1)[i] - ((unsigned char *)s2)[i]);
		i++;
	}
	return (0);
}

/*
int	main(void)
{
	char	str1[];
	char	str2[];
	int		orig_cmp;
	int		my_cmp;

    str1[] = "Hello";
    str2[] = "Hella";
    orig_cmp = memcmp(str1, str2, 5);
    my_cmp = ft_memcmp(str1, str2, 5);
    printf("Orig_memcmp: %d\n", orig_cmp);
    printf("My ft_memcmp: %d\n", my_cmp);
    return (0);
}
*/
