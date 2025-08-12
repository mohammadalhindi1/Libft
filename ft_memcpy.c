/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malhendi <malhendi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/10 20:36:18 by malhendi          #+#    #+#             */
/*   Updated: 2025/08/12 19:37:58 by malhendi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t	i;

	i = 0;
	if (!dest && !src)
		return (NULL);

	if (dest != src)
	{
		while (i < n)             // حلقة تكرر n مرة (عدد البايتات اللي نريد نسخها)
		{
			// نسخ البايت رقم i من المصدر إلى الوجهة بعد تحويل المؤشرات إلى unsigned char*
			((unsigned char *)dest)[i] = ((unsigned char *)src)[i];
			i++;                  // زيادة العداد لنسخ البايت التالي
		}
	}
	return (dest);                // ترجع العنوان الأصلي للوجهة بعد النسخ
}

// This function copies n bytes from memory area src to memory area dest.
