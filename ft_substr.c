/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malhendi <malhendi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/17 20:24:49 by malhendi          #+#    #+#             */
/*   Updated: 2025/08/17 20:25:10 by malhendi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*new;
	size_t	finish;
	size_t	slen;

	if (!s)
		return (NULL);
	slen = ft_strlen(s);
	finish = 0;
	if (start < slen)
		finish = slen - start;
	if (finish > len)
		finish = len;
	new = (char *)malloc(sizeof(char) * (finish + 1));
	if (!new)
		return (NULL);
	ft_strlcpy(new, s + start, finish + 1);
	return (new);
}

/*
int	main(void)
{
    char *result;
	char *result1;

    result = ft_substr("Bonjour comment ca va?", 5, 8);
    printf("Result: %s\n", result);

	result1 = ft_substr("Bonjour comment ca va?", 5, 8);
    printf("Result: %s\n", result1);

    free(result);
	free(result1);
    return (0);
}
*/

