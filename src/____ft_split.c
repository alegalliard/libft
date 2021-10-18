#include "libft.h"
#include <stdio.h>

char **allocate_vec(size_t arr_size, size_t *store_sizes)
{
	char **splited = (char **) malloc(arr_size* sizeof(char *));
}

size_t count_words(char const *s, char c)
{
	size_t i;
	size_t vec_size;

	i = 0;
	vec_size = 1;
	while (s[i])
	{
		if(s[i] == c) {
			vec_size++;
		}
		i++;
	}
	return (vec_size);
}

size_t **count_str(char const *s, char c)
{
	size_t i;
	size_t vec_size;
	size_t *r;

	r = malloc(count_words(s, c) * sizeof(size_t));

	i = 0;
	vec_size = 1;
	while (s[i])
	{
		if(s[i] == c) {
			vec_size++;
		}
		i++;
	}
	return (vec_size);
}


char	**ft_split(char const *s, char c)
{
	char **vector;
	char *strings_sizes;
	size_t i;
	int count;
	return (vector);
}

//clear && gcc ft_split.c -fsanitize=address -fno-omit-frame-pointer && ./a.out
//clear && gcc ft_split.c && ./a.out


int main()
{
	const char *frase = "sou goku gordao";
	char sp = ' ';
	//char **res = ft_split(frase, sp);


	//printf("De: %s (%ld) \n", frase, s);
	//printf("para: 1- %s | 2- %s \n", res[0], res[1]);

	return 0;
}