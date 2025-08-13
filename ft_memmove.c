#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t	i;

	if (!dest && !src)
		return (NULL);
	if (dest > src)
	{
		while (n--)
			((unsigned char *)dest)[n] = ((unsigned char *)src)[n];
	}
	else
	{
		i = 0;
		while (i < n)
		{
			((unsigned char *)dest)[i] = ((unsigned char *)src)[i];
			i++;
		}
	}
	return (dest);
}

/*
int main(void)
{
    char str1[] = "HellaWorld";
    char str2[] = "HelloWorld";

    memmove(str1 + 5, str1, 5);
    ft_memmove(str2 + 5, str2, 5);

    printf("Origm_emmove: %s\n", str1);
    printf("My ft_memmove: %s\n", str2);

    return 0;
}
*/