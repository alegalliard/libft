#include "libft.h"
#include <stdio.h>

static size_t split_size(char const *s, char c)
{
	size_t arr_size;

	arr_size = 0;
	while (*s)
	{
		if (*s == c)
			arr_size++;
		*s++;
	}
	return (arr_size + 1);
}

char	**ft_split(char const *s, char c)
{
	char *pointer;
	size_t i;

	if (!s || !c)
		return (NULL);
	pointer = malloc(split_size(s, c) * sizeof(char));
	if (!pointer)
		return (NULL);

	i = 0;
	while ()
	{

	}
	return (NULL);
}

int main()
{
	char frase = "oi eu sou o goku";
	char result[10];
	size_t t = split_size(frase, ' ');

	//result = ft_split(frase, ' ');

	printf("Resultado %ld \n", t);

}