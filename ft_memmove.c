/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/13 20:43:13 by mbrito-p          #+#    #+#             */
/*   Updated: 2023/04/28 00:07:38 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//The  memmove()  function  copies n bytes from memory area src to memory
// area dest.  The memory areas may overlap: copying takes place as though
// the  bytes in src are first copied into a temporary array that does not
// overlap src or dest, and the bytes are then copied from  the  temporary
// array to dest.

#include "libft.h"

// The function definition takes a void pointer for the destination memory block,
// a const void pointer for the source memory block, and a size_t n for the number of bytes to copy
void	*ft_memmove(void *dest, const void *src, size_t n)
{
    // If the source and destination memory blocks are the same, there's no need to copy, so just return the destination pointer
	if (((unsigned char *)dest) == ((unsigned char *)src))
	{
		return (dest);
	}
    // If the destination pointer is greater than the source pointer, copy the memory in reverse order
	if (dest > src)
	{
		// Start from the last byte and copy backwards
		while (n > 0)
		{
			((unsigned char *)dest)[n - 1] = ((unsigned char *)src)[n - 1];
			n--;
		}
	}
    // If the source pointer is greater than the destination pointer, call ft_memcpy() to copy the memory
	else
	{
		ft_memcpy(dest, src, n);
	}
    // Return the destination pointer
	return (dest);
}

// int main()
// {
//     char str1[] = "abcdefghijhjkhjk";
//     char str2[] = "abcdefghij";

//     // Use standard library memmove to copy 5 bytes of str1 to str1+3
//     memmove(str1+3, str1, 10);
//     printf("str1 after memmove: %s\n", str1); // Output: abcabcdej

//     // Use ft_memmove to copy 5 bytes of str2 to str2+3
//     ft_memmove(str1+3, str1, 10);
//     printf("str2 after ft_memmove: %s\n", str2); // Output: abcabcdej

//     return 0;
// }