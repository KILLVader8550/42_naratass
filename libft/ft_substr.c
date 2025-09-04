#include "libft.h"

char    *ft_substr(char const *s, size_t start, size_t len)
{
    char    *sub_str;
    size_t  str_size;

    str_size = ft_strlen(s);
    if (str_size < start)   
    {
        sub_str = (char *) malloc(sizeof(char) * 1);
        sub_str[0] = '\0';
    }
    if (len > str_size - start)
        len = str_size - start;
    sub_str = (char *) malloc(sizeof(char) * (len + 1));
    if (!sub_str)
        return (NULL);
    ft_memcpy(sub_str, s + start, len);
    sub_str[len] = '\0';
    return (sub_str);
}
