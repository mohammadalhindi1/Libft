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

	ary = (void *)malloc(nmemb * size);
	if (ary == NULL)
		return (NULL);
	ft_bzero(ary, (nmemb * size));
	return (ary);
}
