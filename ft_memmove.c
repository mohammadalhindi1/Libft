#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t			i;
	char			j;
	unsigned char	*d;
	unsigned char	*s;

	i = 0;
	j = 1;
	d = (unsigned char *)dest;
	s = (unsigned char *)src;
	if (!dest && !src)
		return (NULL);
	if (dest > src)
	{
		j = -1;
		d += n - 1;
		s += n - 1;
	}
	while (i < n)
	{
		*d = *s;
		d += j;
		s += j;
		i++;
	}
	return (dest);
}
/*This code is a C implementation of the memmove function, 
which safely copies memory from one location to another, 
handling overlapping regions correctly. 
The function checks if the destination is greater than the source 
to determine the direction of copying, ensuring that data is not corrupted during the move.
It uses a loop to copy each byte from the source to the destination, 
adjusting pointers based on whether the copy is forward or backward.
If either pointer is NULL, it returns NULL. The function 
is designed to work with any type of data, as it operates on byte-level pointers. 
*/