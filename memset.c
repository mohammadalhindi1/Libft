#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	size_t	i;
	char	*str;

	i = 0;
	str = s;
	while (i < n)
	{
		str[i] = c;
		i++;
	}
	return (s);
}
// This function sets the first n bytes of the memory area pointed to by s to the value of c.
// It returns a pointer to the memory area s.
// The function uses a loop to iterate through each byte and set it to the specified value.
// The function assumes that the input pointer s is valid and that n is a non-negative value