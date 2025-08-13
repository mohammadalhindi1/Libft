#include "libft.h"

//#include <string.h>
//#include <stdio.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		if (((unsigned char *)s1)[i] != ((unsigned char *)s2)[i])
			return (((unsigned char *)s1)[i] - ((unsigned char *)s2)[i]);
		i++;
	}
	return (0);
}

/*
int main(void)
{
    char str1[] = "Hello";
    char str2[] = "Hella";

    int orig_cmp = memcmp(str1, str2, 5);
    int my_cmp = ft_memcmp(str1, str2, 5);

    printf("Orig_memcmp: %d\n", orig_cmp);
    printf("My ft_memcmp: %d\n", my_cmp);

    return 0;
}
*/
