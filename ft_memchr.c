
#include "libft.h"
//#include <string.h>
//#include <stdio.h>
void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	index;

	index = 0;
	while (index < n)
	{
		if (((unsigned char *)s)[index] == (unsigned char)c)
			return (((unsigned char *)s) + index);
		index++;
	}
	return (NULL);
}

/*
int main(void)
{
    const char str[] = "Hello World";
   
    void *orig_result = memchr(str, 'o', strlen(str));
    void *my_result = ft_memchr(str, 'o', strlen(str));

    printf("Orig_memchr: %s\n", (char *)orig_result);
    printf("My ft_memchr: %s\n", (char *)my_result);

    return 0;
}
*/