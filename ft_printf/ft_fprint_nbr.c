#include "ft_printf.h"

void	ft_fprint_nbr(char *buf, int cnt, char format)
{
	int	i;

	i = 0;
	while (i < cnt)
	{
		if (format == 'X')
			buf[cnt - i - 1] = ft_toupper(buf[cnt - i - 1]);
		write(1, &buf[cnt - i - 1], 1);
		i++;
	}
}