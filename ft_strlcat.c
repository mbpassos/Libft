/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbrito-p <mbrito-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/14 20:13:59 by mbrito-p          #+#    #+#             */
/*   Updated: 2023/04/14 21:03:53 by mbrito-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//concatenates strings. Unlike strncat, strlcat() take the full 
//size of the buffer (not just the length) and guarantee 
//to NUL-terminate the result
#include "libft.h"

size_t ft_strlen(const char *s)
{
    size_t len = 0;
    while (s[len])
        len++;
    return len;
}

size_t ft_strlcat(char *dst, const char *src, size_t size)
{
    size_t dst_len = ft_strlen(dst);
    size_t src_len = ft_strlen(src);

	// By checking if dst_len + 1 >= size, we ensure that 
	// there is enough space to add a null terminator to 
	// the end of the concatenated string, even if the size of 
	// the destination buffer is exactly equal to 
	// the length of the original string. Remeber that 
	//strlen does not include the null terminator on the count
    if (dst_len + 1 >= size)
        return src_len + size;

    size_t i = 0;
	//src[i] is already checking if the character is a null 
	//terminator because if it is the null terminator.
	//If this character is not a null terminator ('\0'), 
	//then the condition src[i] will evaluate to true 
	//dst_len + 1 + i represents the total number of 
	//characters copied so far.
    while (src[i] != '\0' && dst_len + 1 + i < size)
    {
		//this is to place the new concatenation string in the last position
        dst[dst_len + i] = src[i];
        i++;
    }
    dst[dst_len + i] = '\0';

    return dst_len + src_len;
}

// int main(void)
// {
//     char str1[20] = "Hello, ";
//     char *str2 = "world!";
//     size_t dest_size = sizeof(str1);
//     size_t result = ft_strlcat(str1, str2, dest_size);
//     printf("Result: %zu, Destination string: %s\n", result, str1);

//     return 0;
// }