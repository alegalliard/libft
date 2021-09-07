#include "libft.h"

char	*ft_strnstr(const char *str, const char *sub, size_t max)
{
	int	i;
	int	j;
	int	curr;
	int	sub_len;

	i = 0;
	j = 0;
	curr = 0;
	sub_len = ft_strlen(sub);
	while (str[i] && i < max)
	{
		curr = i;
		while (sub[j] && str[curr] == sub[j])
		{
			curr++;
			j++;
		}
		if (j == sub_len && curr <= max)
			return ((char *)str + curr - sub_len);
		j = 0;
		i++;
	}
	return (NULL);
}
