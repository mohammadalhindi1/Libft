/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malhendi <malhendi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/18 16:59:08 by malhendi          #+#    #+#             */
/*   Updated: 2025/08/18 17:00:25 by malhendi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*new_string;
	size_t	len1;
	size_t	len2;

	if (!s1 || !s2)
		return (NULL);
	len1 = ft_strlen(s1);
	len2 = ft_strlen(s2);
	new_string = (char *)malloc(sizeof(char) * (len1 + len2 + 1));
	if (!new_string)
		return (NULL);
	ft_strlcpy(new_string, s1, len1 + 1);
	ft_strlcat(new_string, s2, len1 + len2 + 1);
	return (new_string);
}
/*
int	main(void)
{
	char	*s1;
	char	*s2;
    char *result;
	char	*result2;

    s1 = "Hello,";
    s2 = " World!";
    result = ft_strjoin(s1, s2);
	result2 = ft_strjoin(s1, s2);
    if (result == NULL)
    {
        printf("Error: Memory allocation failed.\n");
        return (1);
    }
    printf("Joined string: %s\n", result); 
	printf("Joined string: %s\n", result2);
	free(result); 
    free(result2); 
    return (0);
}
*/
