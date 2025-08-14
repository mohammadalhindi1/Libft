#include "libft.h"

char *ft_strjoin(char const *s1, char const *s2)
{
    char *new;
    size_t len1;
    size_t len2;

    if (!s1 || !s2)
        return (NULL);
    
    len1 = ft_strlen(s1);
    len2 = ft_strlen(s2);
    
    new = (char *)malloc(sizeof(char) * (len1 + len2 + 1));
    if (!new)
        return (NULL);
    
    ft_strlcpy(new, s1, len1 + 1);
    ft_strlcat(new, s2, len1 + len2 + 1);
    
    return (new);
}
/*
int main(void)
{
    char *s1 = "Hello, ";
    char *s2 = "World!";
    char *result;

    result = ft_strjoin(s1, s2); 
    if (result == NULL)
    {
        printf("Error: Memory allocation failed.\n");
        return 1;
    }

    printf("Joined string: %s\n", result); 

    free(result); 
    return 0;
}
*/