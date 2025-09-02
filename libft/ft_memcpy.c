#include "libft.h"

void    *ft_memcpy(void *restrict dst, const void *restrict src, size_t n)
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
