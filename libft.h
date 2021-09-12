//.h = precompiler header file

#ifndef LIBFT_H
# define	LIBFT_H

/* Main libraries */
# include <stddef.h>
# include <unistd.h>
# include <stdlib.h>
# include <stdarg.h>
# include <stdbool.h>
# include <stdarg.h>

//carrega os prototypes
//Strings
int		ft_isalpha(int c);
int		ft_isdigit(int c);
int		ft_isascii(int c);
int		ft_isprint(int c);
int		ft_isalnum(int c);
int		ft_isspace(int c);
int		ft_strlen(const char *str);
char	*ft_strchr(const char *s, int c);
int		ft_strncmp(const char *str1, const char *str2, size_t max);
size_t	ft_strlcpy(char *dest, const char *src, size_t size);
size_t	ft_strlcat(char *dest, const char *src, size_t size);
char	*ft_strnstr(const char *str, const char *sub, size_t max);
char	*ft_substr(char const *s, unsigned int start, size_t len);
char	*ft_strjoin(char const *s1, char const *s2);
char    *ft_strtrim(char const *s1, char const *set);

//Memória
void	ft_bzero(void *s, size_t n);
void	*ft_memset(void *str, int c, size_t n);
void	*ft_memcpy(void *dest, const void *src, size_t n);
void	*ft_memmove(void *dest, const void *src, size_t n);
void	*ft_memchr(const void *str, int c, size_t max);
void	*ft_calloc(size_t count, size_t size);
int		ft_memcmp(const void *str1, const void *str2, size_t max);
char	*ft_strdup(const char *s);
char	*ft_strdup(const char *s);

//conversão
int		ft_atoi(const char *c);

#endif
/*
Okay, let's understand the difference between active and passive code.

The active code is the implementation of functions, procedures, methods,
 i.e. the pieces of code that should be compiled to executable machine 
 code. We store it in .c files and sure we need to compile it.

The passive code is not being execute itself, but it needed to explain 
the different modules how to communicate with each other. Usually, .h 
files contains only prototypes (function headers), structures.

An exception are macros, that formally can contain an active pieces,
 but you should understand that they are using at the very early stage 
 of building (preprocessing) with simple substitution. At the compile 
 time macros already are substituted to your .c file.

*/