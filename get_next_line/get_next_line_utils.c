#include "get_next_line.h"

size_t	ft_strlen(const char *s)
{
	size_t	count;

	if (!s)
		return (0);
	count = 0;
	while (s[count])
		count++;
	return (count);
}

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char	*pdest;
	unsigned char	*psrc;

	if (!dst && !src)
		return (NULL);
	pdest = (unsigned char *)dst;
	psrc = (unsigned char *)src;
	while (n--)
		*pdest++ = *psrc++;
	return (dst);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	len1;
	size_t	len2;
	char	*str;
	
	if (!s1 && !s2)
		return (NULL);
	if (!s1)
		return (ft_strdup(s2));
	if (!s2)
		return (ft_strdup(s1));
	len1 = ft_strlen(s1);
	len2 = ft_strlen(s2);
	str = (char *) malloc(sizeof(char) * (len1 + len2 + 1));
	if (!str)
		return (NULL);
	ft_memcpy(str, s1, len1);
	ft_memcpy(str + len1, s2, len2);
	str[len1 + len2] = '\0';
	free((char *)s1);
	return (str);
}

int	find_newline(const char *s)
{
	int	i;
	
	i = 0;
	if (!s)
		return (0);
	while (s[i])
	{
		if (s[i] == '\n')
			return (1);
		i++;
	}
	return (0);
}

size_t	get_stash_size(char *stash)
{
	size_t	size;

	size = 0;
	if (!stash)
		return (0);
	while (stash[size] && stash[size] != '\n')
		size++;
	if (stash[size] == '\n')
		size++;
	return (size);
}

char	*ft_strdup(const char *s)
{
	char	*dest;
	int		i;
	int		len;

	len = ft_strlen(s);
	dest = (char *) malloc(sizeof(char) * (len + 1));
	if (dest == NULL)
		return (NULL);
	i = 0;
	while (i < len)
	{
		dest[i] = s[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
