#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	const unsigned char	*temp_src;
	unsigned char		*temp_dest;
	size_t				i;

	i = 0;
	temp_src = (unsigned char *)src;
	temp_dest = (unsigned char *)dest;
	if (temp_dest > temp_src)
	{
		while (++i <= n)
			temp_dest[i - 1] = temp_src[i - 1];
	}
	else
		ft_memcpy(temp_dest, temp_src, n);
	return (dest);
}
