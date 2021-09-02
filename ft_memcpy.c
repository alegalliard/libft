#include	"libft.h";

void	*memcpy(void *dest, const void *src, size_t n)
{ //restrict = tipo qualificador: adiciona otimizações ao compilador e limita o efeito de aliasing 
// aliasing é quando o compilador usa atalhos - mesmo local de memória com mais de um nome
	int	i;

	i = 0;
	while (i < n)
	{
		((unsigned char *) dest)[i] = ((unsigned char *)src)[i];
	}
	
}

/*
The memcpy() function copies n bytes from memory area src to
       memory area dest.  The memory areas must not overlap.  Use
       memmove(3) if the memory areas do overlap.

*/