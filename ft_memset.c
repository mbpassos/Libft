/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/13 17:48:06 by mbrito-p          #+#    #+#             */
/*   Updated: 2023/04/27 21:17:13 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//The  memset()  function  fills  the  first  n bytes of the memory area
//pointed to by s with the constant byte c.

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	/* 
	** Cast s to an unsigned char pointer to enable byte-level manipulation.
	** This is done because the memset() function is meant to work with bytes.
	*/
	unsigned char	*ptr;

	ptr = (unsigned char *)s; // Assign s to the pointer variable 'ptr'
	while (n-- > 0) // Loop through the memory area 's' for n bytes
		*(ptr++) = (unsigned char)c; // Set each byte in 's' to 'c'
	return (s); // Return a pointer to the start of the memory area 's'
}

// int	main(void)
// {
// 	char str[]="Lila";
	
// 	printf("Before the function:%s", str);
//  //converts integer to unsigned char  
// 	ft_memset(str, 106, 2);
// 	printf("After the function:%s", str);
// 	return (0);
// }
