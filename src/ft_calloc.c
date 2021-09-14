#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	size_t	mem_size;
	void	*arr;

	mem_size = count * size;
	arr = malloc(mem_size);
	if (!arr)
		return (NULL);
	ft_memset(arr, 0, mem_size);
	return (arr);
}
