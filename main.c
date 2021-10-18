#include <stdio.h>
#include <unistd.h>
#include <ctype.h>
#include "libft.h"


int	main(void)
{
	char *str1 = "dolly guarana";
	ft_memmove(str1 + 1, str1, 5);

	return (0);
}
