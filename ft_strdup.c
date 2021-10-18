#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*clone;
	size_t	size;

	size = ft_strlen(s) + 1;
	clone = malloc(size * sizeof(char));
	if (!s || !clone)
		return (NULL);
	ft_memcpy(clone, s, size);
	clone[size] = '\0';
	return (clone);
}
