#include "get_next_line.h"
#define BUFFER_SIZE 3

void	putstr(int *fd, char *str, char *stash, int *ptr, int *j)
{
	int	bytes_read;

	while ((bytes_read = read(*fd, stash, BUFFER_SIZE)) > 0)
	{
		stash[bytes_read] = '\0';
		*j = 0;
		while (stash[*j] != '\0')
		{
			if (stash[*j] == '\n')
			{
				str[(*ptr)] = '\0';
				(*j)++;
				return ;
			}
			str[(*ptr)++] = stash[(*j)++];
		}
		str[(*ptr)] = '\0';
	}
}

void	get_previous_stash(char *str, char *stash, int *ptr, int *j)
{
	if (stash && str)
	{
		while (stash[*j])
			str[(*ptr)++] = stash[(*j)++];
	}
}

char	*get_next_line(int fd)
{
	static char	*stash;
	static int	j;
	char		*str;
	int			ptr;

	str = (char *) malloc((sizeof(char) * 100));
	if (!str)
		return (NULL);
	ptr = 0;
	get_previous_stash(str, stash, &ptr, &j);
	if (!stash)
	{
		stash = (char *) malloc((sizeof(char) * (BUFFER_SIZE + 1)));
		if (!stash)
			return (NULL);
	}
	putstr(&fd, str, stash, &ptr, &j);
	return (str);
}
