/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbrito-p <mbrito-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/08 20:27:19 by mbrito-p          #+#    #+#             */
/*   Updated: 2023/05/08 20:27:19 by mbrito-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


// Applies the function ’f’ on each character of
// the string passed as argument, passing its index
// as first argument. Each character is passed by
// address to ’f’ to be modified if necessary.
// ft_strmapi transforms the input string into a new 
// string by applying a function to each character and 
// its index, whereas ft_striteri simply applies a 
// function to each character and its index in the input 
// string without modifying the original string.
#include "libft.h"

void ft_striteri(char *s, void (*f)(unsigned int, char*))
{
    unsigned int i;
    // Both unsigned int and size_t are unsigned integer types that 
    // can store non-negative numbers. However, there are some differences 
    // between them:
    // Range: size_t is guaranteed to be able to represent the maximum size 
    // of an object that can be stored in memory on the system. Therefore, 
    // size_t has a larger range than unsigned int, 
    // and it can be used to represent the size of large arrays or objects.
    // Portability: The size of unsigned int is not fixed across different 
    // platforms, while size_t is defined by the C standard and is 
    // guaranteed to have the appropriate size for the architecture 
    // it is compiled on.
    // Usage: size_t is commonly used in functions that deal with memory 
    // allocation and object sizes, such as malloc() and sizeof(), 
    // while unsigned int is often used in loop counters or to 
    // represent other non-negative integer values.
    i = 0;
	if (!s || !f)
		return ;
	while (s[i])
	{
		f(i, &s[i]);
		i++;
	}
}

// void ft_print_char_index(unsigned int index, char *c)
// {
//     printf("Index %d: %c\n", index, *c);
// }

// int main(void)
// {
//     char str[] = "Hello, world!";
//     ft_striteri(str, ft_print_char_index);
//     return 0;
// }