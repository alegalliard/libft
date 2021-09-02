#include "libft.h";

void	*ft_memset(void *str, int c, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		((unsigned char *)str)[i] = c;
		i++;
	}
	return (str);
}
/*
os parênteses (int *) e (unsigned char *) são "castings".

int *taloko = (int *)malloc(10 * sizeof(int));
o retorno de maloc é um void *. O que vc está fazendo é convertendo o retorno de malloc de void * para int * antes de colocar na variável "taloko".

PS: Este casting não é extremamente necessário, uma vez que o retorno de malloc será convertido ao ser armazenado na variavel "taloko".

return ((unsigned char *)cogumelo)[i] = c;
Como no outro caso, você está transformando a variável cogumelo, seja lá o tipo que for, em unsigned char *.

PS: neste caso, você não transforma "pra sempre". O tipo da variável vai mudar APENAS nesta instrução.
*/