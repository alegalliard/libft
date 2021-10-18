int	ft_isspace(int c)
{
	return (c == ' '
		|| c == '\n'
		|| c == '\f'
		|| c == '\t'
		|| c == '\v'
		|| c == '\r');
}
