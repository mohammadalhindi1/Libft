/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malhendi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/07 18:13:24 by malhendi          #+#    #+#             */
/*   Updated: 2025/01/07 18:13:40 by malhendi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t	i;

	i = 0;
	size -= 1;
	while (src[i] && (i < size))
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (i);
}

/*
 int main()
{
	char	str[];
	char	str2[];

     str[] = "test de chaine";
     str2[] = "abc123";
     ft_strlcpy(str, str2, 5);
     printf("%s\n", str);
     return (0);
}
*/
