#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	count;
	size_t	i;

	count = 0;
	i = 0;
	while (dest[count] && count < size)
		count++;
	while (src[i] && (count + i + 1) < size)
	{
		dest[i + count] = src[i];
		i++;
	}
	if (count < size)
		dest[count + i] = '\0';
	return (count + ft_strlen(src));
}
