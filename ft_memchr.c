/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malhendi <malhendi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/10 20:35:06 by malhendi          #+#    #+#             */
/*   Updated: 2025/08/14 17:03:40 by malhendi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	index;

	index = 0;
	while (index < n)
	{
		if (((unsigned char *)s)[index] == (unsigned char)c)
			return (((unsigned char *)s) + index);
		index++;
	}
	return (NULL);
}

/*
int	main(void)
{
	const char	str[];
	void		*orig_result;
	void		*my_result;

    str[] = "Hello World";
   
    orig_result = memchr(str, 'o', strlen(str));
    my_result = ft_memchr(str, 'o', strlen(str));
    printf("Orig_memchr: %s\n", (char *)orig_result);
    printf("My ft_memchr: %s\n", (char *)my_result);
    return (0);
}
*/
