#include <string.h>
#include <stdio.h>

char	*ft_strchr(const char *s, int c)
{
	int i;

	i=0;
	while(*s)
	{
		if(*s == c)
			return (char*)s;
		i++;
	}
}
// The strchr() function returns a pointer to the first occurrence of the character c in the string s.

int main(void)
{
	char str[] = "The strchr() function returns a pointer to the first occurrence of the character c in the string s.e ";
	char c = 'f';
	char *p;
	char *p2;

	p = strchr(str, c);
	p2 = ft_strchr(str, c);
	printf("String starting from %c is: %s\n", c, p);
	printf("String starting from %c is: %s\n", c, p);

	return (0);
}

       