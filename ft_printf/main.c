#include "libftprintf.h"

int	main()
{
	int original_len, our_len;
	our_len = ft_printf("Hello World!\n%s\n%x\n%c\n%p\n%d\n%u\n", "Love!", 42, 't', &original_len, -42, -1);
	original_len = printf("Hello World!\n%s\n%x\n%c\n%p\n%d\n%u\n", "Love!", 42, 't', &original_len, -42, -1);
	printf("Our len: %d\n", our_len);
	printf("Original len: %d\n", original_len);
}
