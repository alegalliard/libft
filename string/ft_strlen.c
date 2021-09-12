int	ft_strlen(const char *str)
{
	int	count;

	count = 0;
	if (!str)
		return (0);
	while (str[count])
		count++;
	return (count);
}
