int	ft_memcmp(const void *str1, const void *str2, size_t max)
{
	size_t	i;

	i = 0;
	if (max == 0)
		return (0);
	while (i < max)
	{
		if (((unsigned char *)str1)[i] != ((unsigned char *)str2)[i])
			return (((unsigned char *)str1)[i] - ((unsigned char *)str2)[i]);
		i++;
	}
	return (0);
}
