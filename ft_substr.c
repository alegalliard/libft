#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*sub;
	int		s_len;
	size_t	i;
	size_t	j;

	s_len = ft_strlen(s);
	if (!s_len || !len || start > s_len)
		return (NULL);
	sub = malloc((len + 1) * sizeof(char));
	i = start;
	j = 0;
	while (s[i] && j < len)
		sub[j++] = s[i++];
	sub[j] = '\0';
	return (sub);
}
