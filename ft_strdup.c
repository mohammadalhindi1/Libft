#include "libft.h"

char	*ft_strdup(char *src)
{
	int	i;
	char	*res;

	i = 0 ;
	while(src[i])
		i++;
	res = malloc(sizeof(*res) * i + 1);
	if (res == NULL)
		return (NULL);
	i = 0;
	while(src[i])
	{
		res[i]=src[i];
		i++;
	}
	res[i] = '\0';
	return (res);
}

int	main(void)
{

	printf("%s", ft_strdup("hindi"));
	return (0);
}
