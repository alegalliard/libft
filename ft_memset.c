#include "libft.h"

void	*ft_memset(void *str, int c, size_t n)
{
	while (n--)
	{
		((unsigned char *)str)[n] = c;
	}
	return (str);
}
