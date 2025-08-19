/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malhendi <malhendi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/18 17:17:56 by malhendi          #+#    #+#             */
/*   Updated: 2025/08/19 17:42:44 by malhendi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	unsigned int	len;
	char			*res;

	if (!s || f == NULL)
		return (NULL);
	len = ft_strlen(s);
	res = (char *)malloc((len + 1) * sizeof(char));
	if (res == NULL)
		return (NULL);
	i = 0;
	while (i < len)
	{
		res[i] = f(i, s[i]);
		i++;
	}
	res[i] = '\0';
	return (res);
}

/*
int	main(void)
{
	char	*str;
    char *result;

    str = "mohammad alhendi";
    result = ft_strmapi(str, (char (*)(unsigned int, char))ft_toupper);
    if (result)
    {
        printf("Original: %s\n", str);
        printf("Mapped  : %s\n", result);
        free(result);
    }
    else
        printf("Memory allocation failed!\n");
    return (0);
}
*/