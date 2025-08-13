#include "libft.h"
//#include <string.h>
//#include <stdio.h>

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t	i;

	i = 0;
	if (!dest && !src)
		return (NULL);
	while (i < n)
	{
		((unsigned char *)dest)[i] = ((unsigned char *)src)[i];
		i++;
	}
	return (dest);
}

/*
int main(void)
{
    char src[] = "Hello";
    char dest1[10];
    char dest2[10];
    
    memcpy(dest1, src, 6);
    ft_memcpy(dest2, src, 6);

    printf("Orig_memcpy: %s\n", dest1);
    printf("My ft_memcpyy: %s\n", dest2);

    return 0;
}
*/