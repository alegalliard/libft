#include	"libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t	i;

	while (i < n)
	{
		((unsigned char *)s)[i] = 0;
		i++;
	}
}
