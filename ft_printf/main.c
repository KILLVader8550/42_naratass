#include "ft_printf.h"
#include <stdio.h>
#include <limits.h>

int	main()
{
	int our_len, original_len;
	our_len = ft_printf("%x\n", -9);
	original_len = printf("%x\n", -9);
	printf("Our len: %d\n", our_len);
	printf("Original len: %d\n", original_len);
}
