#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	size_t	m;
	unsigned char	*str;

	m = 0;
	str = s;
	while (m < n)
	{
		str[m] = c;
		m++;
	}
	return (s);
}
