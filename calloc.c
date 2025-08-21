/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malhendi <malhendi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/10 20:33:31 by malhendi          #+#    #+#             */
/*   Updated: 2025/08/18 17:17:43 by malhendi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*ary;

	if (nmemb == 0 || size == 0)
	{
		ary = malloc(1);
		if (ary == NULL)
			return (NULL);
		return (ary);
	}

	ary = malloc(nmemb * size);
	if (ary == NULL)
		return (NULL);

	ft_bzero(ary, nmemb * size);

	return (ary);
}


/*
int main(void)
{
    int *arr;
    size_t n = 5;
    size_t i;

    arr = ft_calloc(n, sizeof(int)); 
    if (!arr)
    {
        printf("malloc failed\n");
        return 1;
    }

    printf("ft_calloc:\n");
    for (i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");

    free(arr);
    return 0;
}
*/