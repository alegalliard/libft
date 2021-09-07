#include "libft.h"

static	int	is_sign_or_space(int c)
{
	return (c == '-' || c == '+' || ft_isspace(c));
}

int	ft_atoi(const char *c)
{
	size_t	i;
	int64_t	num;
	int		sign;

	i = 0;
	num = 0;
	sign = 1;
	while (c[i])
	{
		if (is_sign_or_space(c[i]) && ft_isdigit(c[i + 1]))
		{
			if (c[i] == '-')
				sign = -1;
			i++;
		}
		if (!ft_isdigit(c[i]))
			break ;
		num = (num * 10) + (c[i] - '0');
		i++;
	}
	return (num * sign);
}
