#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t	i;
	char	*str;

	str = s;
	i = 0;
	while (i < n)
	{
		str[i] = 0;
		i++;
	}
    if (n > 0)
        str[n - 1] = 0; // Ensure the last byte is set to zero 
}
// This function sets the first n bytes of the memory area pointed to by s to zero.