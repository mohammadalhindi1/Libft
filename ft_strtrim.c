/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/17 19:23:23 by malhendi          #+#    #+#             */
/*   Updated: 2025/08/21 16:56:53 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_check_set(char const c, char const *set)
{
	int	i;

	i = 0;
	while (set[i] != '\0')
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t start; 
	size_t end;
	char *new;

	if (!s1 || !set)
		return (NULL);

	start = 0;
	while (s1[start] && ft_check_set(s1[start], set))
		start++;

	end = ft_strlen(s1);
	while (end > start && ft_check_set(s1[end - 1], set))
		end--;

	new = (char *)malloc(end - start + 1);
	if (!new)
		return (NULL);

	ft_strlcpy(new, s1 + start, end - start + 1);
	return (new);
}

/*
int main(void)
{
    char *s = "   Hello World!!!  ";
    char *set = " !";
    char *trimmed;

    trimmed = ft_strtrim(s, set);
    if (!trimmed)
    {
        printf("Error: Memory allocation failed.\n");
        return 1;
    }

    printf("Trimmed string: '%s'\n", trimmed);
    free(trimmed);

    return 0;
}
*/