/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malhendi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/12 10:46:40 by malhendi          #+#    #+#             */
/*   Updated: 2025/01/12 11:29:06 by malhendi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	while ((char)c != *s)
	{
		if (!*s)
			return (0);
		s++;
	}
	return ((char *)s);
}

/*
int	main(void)
{
	char str[] = "mohammad";
	int c = 'a';
	char *ptr = ft_strchr(str, c);

	if (ptr != NULL)
		printf("Found char: %c at position: %ld\n", *ptr, ptr - str);
	else
		printf("Character not found!\n");

	return 0;
}
*/