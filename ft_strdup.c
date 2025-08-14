/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malhendi <malhendi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/10 20:43:56 by malhendi          #+#    #+#             */
/*   Updated: 2025/08/14 16:56:23 by malhendi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *src)
{
	int		i;
	char	*res;

	i = ft_strlen(src);
	res = malloc(sizeof(*res) * (i + 1));
	if (res == NULL)
		return (NULL);
	i = 0;
	while (src[i])
	{
		res[i] = src[i];
		i++;
	}
	res[i] = '\0';
	return (res);
}

int	main(void)
{
	printf("%s", ft_strdup("hindi"));
	return (0);
}

