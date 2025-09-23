#include "get_next_line.h"
#include <fcntl.h>

int main()
{
	int fd = open("text.txt", O_RDONLY);
	char	*str;

	str = get_next_line(fd);
	printf("first line: %s\n", str);
	str = get_next_line(fd);
	printf("second line: %s\n", str);

	free(str);
	close(fd);
	return (0);
}
