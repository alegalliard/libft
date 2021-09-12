#include "libft.h"
#include <stdio.h>

static void	check_substr(const char *s1, const char *set, size_t *i)
{
	size_t	set_size;
	size_t	j;
	size_t	k;

	j = 0;
	k = 0;
	set_size = ft_strlen(set);
	while (set[j] && s1[k] == set[j])
	{
		if (s1[k + 1] != set[j + 1])
		{
			if (set_size == 1)
				(*i)++;
			break ;
		}
		k++;
		j++;
		if (j == set_size - 1)
			(*i) += (k + 1);
	}
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*clone;
	size_t	s1_size;
	size_t	i;
	size_t	*z;
	size_t	ci;

	i = 0;
	z = &i;
	ci = 0;
	s1_size = ft_strlen(s1);
	clone = malloc((s1_size + 1) * sizeof(char *));
	if (!clone)
		return (NULL);
	while (s1[i])
	{
		check_substr(&s1[i], set, z);
		((char *)clone)[ci++] = s1[i++];
	}
	clone[ci] = '\0';
	return (clone);
}
