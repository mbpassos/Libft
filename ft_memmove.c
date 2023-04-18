/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbrito-p <mbrito-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/13 20:43:13 by mbrito-p          #+#    #+#             */
/*   Updated: 2023/04/18 21:54:53 by mbrito-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//The  memmove()  function  copies n bytes from memory area src to memory
// area dest.  The memory areas may overlap: copying takes place as though
// the  bytes in src are first copied into a temporary array that does not
// overlap src or dest, and the bytes are then copied from  the  temporary
// array to dest.

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*dest_ptr;
	unsigned char	*src_ptr;
	//typecasting the pointer to make sure it iterates byte by byte
	dest_ptr = (unsigned char *) dest;
	src_ptr = (unsigned char *) src;
	// check whether the destination pointer comes before the source pointer 
	// in memory we can safely copy the memory block from source to destination 
	// without worrying about overwriting any bytes that haven't been copied yet.
	if (dest_ptr < src_ptr)
	{
		//this conditions ensures that the cycle terminates when n becomes zero
		while (n--)
			*dest_ptr++ = *src_ptr++;
	}
	else
	//in this case, dest is allocated in front of source, so the iteration has to be in
	// reverse to avoid overwriting
	{
		unsigned char *last_dest = dest_ptr + (n - 1);
		unsigned char *last_src = src_ptr + (n - 1);
		while (n--)
			*last_dest-- = *last_src--;
	}
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