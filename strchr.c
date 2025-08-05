#include "libft.h"

int    ft_strchr(const char *s, int c) //find character in string
{
    while (*s)
    {
        if (*s == (char)c)
            return (1); // character found
        s++;
    }
    return (0); // character not found
}