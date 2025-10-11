#include "get_next_line.h"
#include <fcntl.h>

int main()
{
	int fd = open("text.txt", O_RDONLY);
	// int fd = 1;
	char	*str;

	str = get_next_line(fd);
	printf("line 1: %s", str);
	free(str);
	str = get_next_line(fd);
	printf("line 2: %s", str);
	free(str);
	str = get_next_line(fd);
	printf("line 3: %s", str);
	free(str);
	close(fd);
	return (0);
}
