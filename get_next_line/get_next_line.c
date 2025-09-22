#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>
#define BUFFER_SIZE 10

char	*get_next_line(int fd)
{
	static char	*stash;
	char		*str;
	static int	j;
	int			bytes_read;
	int			ptr;

	str = (char *) malloc((sizeof(char) * 100));
	if (!str)
		return (NULL);
	ptr = 0;
	while (str[j] != '\0')
	{
		str[ptr++] = stash[j++];
	}
	stash = (char *) malloc((sizeof(char) * (BUFFER_SIZE + 1)));
	if (!stash)
		return (NULL);
	ptr = 0;
	while ((bytes_read = read(fd, stash, BUFFER_SIZE)) > 0)
	{
		stash[bytes_read] = '\0';
		j = 0;
		while (stash[j] != '\0')
		{
			if (stash[j] == '\n')
			{
				free(stash);
				stash = NULL;
				str[ptr] = '\0';
				return (str);
			}
			str[ptr++] = stash[j++];
		}
	}
	free(stash);
	stash = NULL;
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
}
