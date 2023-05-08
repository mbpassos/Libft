/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/13 20:05:13 by mbrito-p          #+#    #+#             */
/*   Updated: 2023/04/28 00:08:17 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//The  memcpy()  function copies n bytes from memory area src to memory area dest.  
//The memory areas must not overlap.  
//Use memmove(3) if the memory areas do overlap.
#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	// Declare two char pointers to keep track of the destination and source memory locations
	char		*pdest;
	const char	*psrc;

	// If both the source and destination pointers are NULL, return NULL
	if (src == NULL && dest == NULL)
		return (NULL);

	// Assign the destination and source pointers to pdest and psrc, respectively
	pdest = dest;
	psrc = src;

	// Loop through the memory locations, copying n bytes of data from source to destination
	while (n--)
		*pdest++ = *psrc++;

	// Return the destination pointer
	return (dest);
}

// By declaring dest_ptr and src_ptr as unsigned char pointers, 
// I ensure that the pointers are able to point to individual 
// bytes in the memory buffers, rather than to entire objects. 
// This allows the while loop to copy bytes from the src 
// buffer to the dest buffer byte by byte, 
// rather than copying entire objects at once.

// It is worth noting that in C, the char data type is 
// guaranteed to be 1 byte in size, so using 
// unsigned char pointers is a convenient way to work 
// with memory at the byte level.

// int	main(void)
// {
// 	char	src[] = "Hello, world!";
// 	char	dest[20];
// 	size_t	n = strlen(src) + 1;

// 	// Use the ft_memcpy function to copy n bytes from the src buffer to the dest buffer
// 	ft_memcpy(dest, src, n);

// 	// Print the contents of the dest buffer to verify that the copy was successful
// 	printf("src: %s\n", src);
// 	printf("dest: %s\n", dest);

// 	return (0);
// }

