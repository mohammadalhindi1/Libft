/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malhendi <malhendi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/18 17:18:01 by malhendi          #+#    #+#             */
/*   Updated: 2025/08/18 17:26:49 by malhendi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    ft_putnbr_fd(int n, int fd)
{
    char dgt;

    if (fd == -1)
        return ;

    if (n == -2147483648)               
    {
        write(fd, "-2147483648", 11);
        return ;
    }
    else if (n < 0)                    
    {
        write(fd, "-", 1);            
        n = -n;                       
        ft_putnbr_fd(n, fd);          
    }
    else                            
    {
        if (n > 9)                       
        {
            ft_putnbr_fd(n / 10, fd);    
            ft_putnbr_fd(n % 10, fd);    
        }
        else                             
        {
            dgt = n + '0';       
            write(fd, &dgt, 1);       
        }
    }
}

/*
int main(void)
{
    ft_putnbr_fd(42, 1);       
    write(1, "\n", 1);

    ft_putnbr_fd(-12345, 1);   
    write(1, "\n", 1);

    ft_putnbr_fd(0, 1);         

    ft_putnbr_fd(-2147483648, 1); 
    write(1, "\n", 1);

    return 0;
}
*/
