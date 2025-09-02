#include "libft.h"

void    ft_putnbr_fd(int n, int fd)
{
    char *nbr;

    nbr = ft_itoa(n);
    write(fd, nbr, ft_strlen(nbr));
}
