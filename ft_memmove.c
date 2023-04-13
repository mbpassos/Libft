/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbrito-p <mbrito-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/13 20:43:13 by mbrito-p          #+#    #+#             */
/*   Updated: 2023/04/13 21:59:20 by mbrito-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//REVER ESSA FUNCAO 
//The memmove function is a versatile function that 
// can be used to copy memory regions in situations where the source 
// and destination regions may overlap. It is a powerful tool for 
// manipulating strings and other data structures in C.

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*dest_ptr;
	unsigned char	*src_ptr;

	dest_ptr = (unsigned char *) dest;
	src_ptr = (unsigned char *) src;
	if (dest_ptr < src_ptr)
	{
		while (n--)
			*dest_ptr++ = *src_ptr++;
	}
	else
	{
		unsigned char *last_dest = dest_ptr + (n - 1);
		unsigned char *last_src = src_ptr + (n - 1);
		while (n--)
			*last_dest-- = *last_src--;
	}
	return (dest);
}

int main()
{
    char str1[] = "abcdefghij";
    char str2[] = "abcdefghij";

    // Use standard library memmove to copy 5 bytes of str1 to str1+3
    memmove(str1+3, str1, 5);
    printf("str1 after memmove: %s\n", str1); // Output: abcabcdej

    // Use ft_memmove to copy 5 bytes of str2 to str2+3
    ft_memmove(str2+3, str2, 5);
    printf("str2 after ft_memmove: %s\n", str2); // Output: abcabcdej

    return 0;
}