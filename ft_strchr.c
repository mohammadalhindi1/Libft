/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strchr.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malhendi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/07 15:14:03 by malhendi          #+#    #+#             */
/*   Updated: 2025/08/07 15:14:09 by malhendi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_strchr(const char *s, int c)
{
	while (*s)
	{
		if (*s == c)
			return (*s);
		s++;
	}
	return (0);
}


int	main(void)
{
	char str [] = "mohammad";
	int c = 'a';
	printf("%c\n",ft_strchr(str,c)); 
}
/*
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
*/
