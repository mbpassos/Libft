// To prevent multiple inclusion, header files typically use header guards or pragma 
// once directives to ensure that the contents of the file are only included once.
// Header guards use preprocessor directives to check whether a particular symbol has been defined. 
// If it has not been defined, the header file is included and the symbol is defined. 
// If it has already been defined, the header file is not included again
#ifndef LIBFT_H
#define LIBFT_H

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

size_t ft_strlen(const char *s);
int ft_isalpha(int c);
int ft_isdigit(int c);
int ft_isalnum(int c);
int ft_isascii(int c);
int ft_isprint(int c);
void ft_bzero(void *s, size_t n);
void *ft_memset(void *s, int c, size_t n);
void *ft_memcpy(void *dest, const void *src, size_t n);
void *ft_memmove(void *dest, const void *src, size_t n);
int ft_toupper(int c);
int	ft_tolower(int c);
size_t ft_strlcpy(char *dst, const char *src, size_t size);
size_t ft_strlcat(char *dst, const char *src, size_t size); 
#endif