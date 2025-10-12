#include "ft_printf.h"
# include <stdio.h>
# define LONG_MIN -2147483648
# define LONG_MAX 2147483647

int	main()
{
	int our_len, original_len;
	our_len = ft_printf(" %c %c %c \n", '0', 0, '1');
	original_len = printf(" %c %c %c \n", '0', 0, '1');
	printf("Our len: %d\n", our_len);
	printf("Original len: %d\n", original_len);
}
