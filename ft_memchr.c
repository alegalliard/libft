#include "libft.h"

void	*ft_memchr(const void *str, int c, size_t max)
{
	size_t	i;

	i = 0;
	while (i < max)
	{
		if (((unsigned char *)str)[i] == (unsigned char) c)
			return (((unsigned char *)str) + i);
		i++;
	}
	return (NULL);
}
