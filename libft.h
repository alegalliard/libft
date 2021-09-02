//.h = precompiler header file

#ifndef LIBFT_H
# define LIBFT_H

/* Main libraries */

#include <unistd.h>
#include <stddef.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdarg.h>


//carrega os prototypes
//Strings
int	ft_isalpha(int c);
int	ft_isdigit(int c);
int	ft_isascii(int c);
int	ft_isprint(int c);
int	ft_isalnum(int c);

//Memória
void	*ft_memset(void *str, int c, size_t n);
void	ft_bzero(void *s, size_t n);
void	*memcpy(void *dest, const void *src, size_t n);

#endif
/*
Okay, let's understand the difference between active and passive code.

The active code is the implementation of functions, procedures, methods, i.e. the pieces of code that should be compiled to executable machine code. We store it in .c files and sure we need to compile it.

The passive code is not being execute itself, but it needed to explain the different modules how to communicate with each other. Usually, .h files contains only prototypes (function headers), structures.

An exception are macros, that formally can contain an active pieces, but you should understand that they are using at the very early stage of building (preprocessing) with simple substitution. At the compile time macros already are substituted to your .c file.

*/