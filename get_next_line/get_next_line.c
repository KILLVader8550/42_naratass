#include "get_next_line.h"

char	*get_next_line(int fd)
{
	static char	*stash;
	char		*line;

	if (fd < 0 || BUFFER_SIZE <= 0)
		return (NULL);
	stash = get_stash(fd, stash);
	if (!stash)
		return (NULL);
	line = extract_line(stash);
	stash = update_stash(stash);
	return (line);
}

char	*extract_line(char *stash)
{
	char	*line;
	size_t	size;

	size = get_stash_size(stash);
	line = (char *) malloc(sizeof(char) * (size + 1));
	if (!line)
		return (NULL);
	ft_memcpy(line, stash, size);
	line[size] = '\0';
	return (line);
}

char	*update_stash(char *stash)
{
	size_t offset = get_stash_size(stash);
	if (!stash[offset])
	{
		free(stash);
		return (NULL);
	}
	char *new_stash = ft_strdup(stash + offset);
	free(stash);
	return (new_stash);
}

char	*get_stash(int fd, char *stash)
{
	char	*buf;
	int		bytes;

	buf = (char *) malloc(sizeof(char) * (BUFFER_SIZE + 1));
	if (!buf)
		return (NULL);
	while (!find_newline(stash))
	{
		bytes = read(fd, buf, BUFFER_SIZE);
		if (bytes <= 0)
			break ;
		buf[bytes] = '\0';
		stash = ft_strjoin(stash, buf);
		if (!stash)
		{
			free(buf);
			return (NULL);
		}
	}
	free(buf);
	return (stash);
}
