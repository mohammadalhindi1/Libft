/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malhendi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/12 19:17:24 by malhendi          #+#    #+#             */
/*   Updated: 2025/01/12 19:17:35 by malhendi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	x;
	size_t	z;
	size_t	dl;
	size_t	sl;

	i = 0;
	x = 0;
	while (dest[i] != '\0')
		i++;
	while (src[x] != '\0')
		x++;
	dl = i;
	sl = x;
	if (size == 0 || size <= dl)
		return (size + sl);
	z = 0;
	while (src[z] != '\0' && z < size - dl - 1)
	{
		dest[i] = src[z];
		z++;
		i++;
	}
	dest[i] = '\0';
	return (dl + sl);
}
/*
int	main(void) {
	char src[] = "alhindi";
	char dest[20] = "mohammad";

	printf("%d", ft_strlcat(dest, src,4));

}
*/
