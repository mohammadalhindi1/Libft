#include "libft.h"

int	ft_isalnum(int c) //is alphanumeric هل هو حرف أو رقم؟
{
    return ((c >= '0' && c <= '9') || (c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'));
}