#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*ptr;
	unsigned char	*ptr1;

	if (n == 0)
		return (0);
	ptr = (unsigned char *)s1;
	ptr1 = (unsigned char *)s2;
	while ((*ptr == *ptr1) && n - 1 > 0)
	{
		ptr++;
		ptr1++;
		n--;
	}
	return ((int)(*ptr - *ptr1));
}
/*this function is part of the C standard library a character in a block of memory. 
a specified character in a block of memory. a specified character in a block of memory.
a specified character in a block of memory.
It returns a pointer to the first occurrence of the character c in 
the block of memory pointed to by s, or NULL if the character is not 
found within the first n bytes. The function iterates through the memory 
block until it either finds the character or reaches the end of the specified length.
If found, it returns a pointer to that position; otherwise, it returns NULL.
*/