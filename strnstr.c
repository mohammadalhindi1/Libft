#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len) //find first occurrence of needle in haystack up to len characters
{
    size_t	i;
    size_t	j;

    if (!*needle)
        return ((char *)haystack);
    i = 0;
    while (haystack[i] && i < len)
    {
        j = 0;
        while (needle[j] && haystack[i + j] == needle[j] && (i + j) < len)
            j++;
        if (!needle[j])
            return ((char *)(haystack + i));
        i++;
    }
    return (0);
}