#include "libft.h"

static int  ft_digit_count(long l)
{
    int i;

    i = 0;
    if (l <= 0)
    {
        l *= -1;
        i++;
    }
    while (l > 0)
    {
        l /= 10;
        i++;
    }
    return (i);
}

static char     *convert_to_str(char *str, long l, int i)
{
    if (l == 0)
    {
        str[0] = '0';
        return (str);
    }
    if (l < 0)
    {
        str[0] = '-';
        l *= -1;
    }
    while (l > 0)
    {
        str[i--] = l % 10 + '0';
        l /= 10;
    }
    return (str);
}

char    *ft_itoa(int n)
{
    char    *str;
    int     i;
    long    l;

    l = n;
    i = ft_digit_count(l);
    str = (char *) malloc(sizeof(char) * (i + 1));
    str[i--] = '\0';
    return (convert_to_str(str, l, i));
}
