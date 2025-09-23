#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>
#define BUFFER_SIZE 3

char	*get_next_line(int fd)
{
	static char	*stash;
	static int	j;
	char		*str;
	int			bytes_read;
	int			ptr;

	str = (char *) malloc((sizeof(char) * 100));
	if (!str)
		return (NULL);
	ptr = 0;
	if (stash)
	{
		while (stash[j])
		{
			str[ptr++] = stash[j++];
		}
	}
	stash = (char *) malloc((sizeof(char) * (BUFFER_SIZE + 1)));
	if (!stash)
		return (NULL);
	while ((bytes_read = read(fd, stash, BUFFER_SIZE)) > 0)
	{
		stash[bytes_read] = '\0';
		j = 0;
		while (stash[j] != '\0')
		{
			if (stash[j] == '\n')
			{
				str[ptr] = '\0';
				j++;
				return (str);
			}
			str[ptr++] = stash[j++];
		}
	}
	str[ptr] = '\0';
	return (str);
}

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