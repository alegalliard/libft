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

/*
Aloca uma matriz na memória com elementos inicializados como 0.
count: Número de elementos.

size: O comprimento, em bytes, de cada elemento.

The calloc() function allocates memory for an array of 
nmemb elements of size bytes each and returns a pointer 
to the allocated memory.  The memory is set to zero.  
If nmemb or size is 0, then calloc() returns either NULL, 
or a unique pointer value that  can  later  be  
successfully  passed  to free().   If  the multiplication 
of nmemb and size would result in integer overflow, then 
calloc() returns an error.  By contrast, an integer over‐
flow would not be detected in the following call to malloc(), 
with the result that an incorrectly sized block of memory 
would be allocated:

           malloc(nmemb * size);

*/