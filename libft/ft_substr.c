#include "libft.h"

char    *ft_substr(char const *s, size_t start, size_t len)
{
    char    *str;
    size_t  i;

    if (!s)
        return (NULL);
    str = malloc((sizeof(char)) * (len + 1));
    if (!str)
        return (NULL);
    i = 0;
    while (i < len && s[i])
    {
        str[i] = s[i];
        ++i;
    }
    str[i] = '\0';
    return (str);
}
