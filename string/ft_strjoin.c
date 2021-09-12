#include "libft.h"
#include <stdio.h>

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*join;
	size_t	s1_len;
	size_t	s2_len;
	size_t	total;

	if (!s1 || !s2)
		return (NULL);
	s1_len = ft_strlen(s1);
	s2_len = ft_strlen(s2);
	total = s1_len + s2_len;
	join = malloc((total + 1) * sizeof(char));
	if (!join)
		return (NULL);
	ft_strlcat(join, s1, ++s1_len);
	ft_strlcat(join, s2, total);
	join[total] = '\0';
	return (join);
}
