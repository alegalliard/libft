#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*sub;
	unsigned int	s_len;
	size_t			i;
	size_t			j;

	if (!s || !len)
		return (NULL);
	s_len = ft_strlen(s);
	sub = malloc((len + 1) * sizeof(char));
	if (!sub || start > s_len)
		return (NULL);
	i = start;
	j = 0;
	while (s[i] && j < len)
		sub[j++] = s[i++];
	sub[j] = '\0';
	return (sub);
}
