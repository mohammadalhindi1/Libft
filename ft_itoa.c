/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malhendi <malhendi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/10 21:13:22 by malhendi          #+#    #+#             */
/*   Updated: 2025/08/18 21:19:27 by malhendi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int num_len(int n)
{
    int len = (n <= 0) ? 1 : 0;
    while (n)
    {
        n /= 10;
        len++;
    }
    return len;
}

char    *ft_itoa(int n)
{
    char    *str;
    long    num = n;    
    int     len = num_len(n);

    str = (char *)malloc(sizeof(char) * (len + 1));
    if (!str)
        return NULL;

    str[len] = '\0';     

    if (num < 0)
        num = -num;       

    if (n == 0)
        str[0] = '0';

    while (num)
    {
        str[--len] = (num % 10) + '0';
        num /= 10;
    }

    if (n < 0)
        str[0] = '-';

    return str;
}
/*
int main(void)
{
    char *str;

    str = ft_itoa(12345);
    printf("%s\n", str);
    free(str);

    str = ft_itoa(-9876);
    printf("%s\n", str);
    free(str);

    str = ft_itoa(0);
    printf("%s\n", str);
    free(str);

    return 0;
}
*/