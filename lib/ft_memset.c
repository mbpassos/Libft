/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbrito-p <mbrito-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/11 19:14:59 by mbrito-p          #+#    #+#             */
/*   Updated: 2023/05/11 19:14:59 by mbrito-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <string.h>
// It fills a block of memory (specified by the pointer s and the size n) 
// with a constant byte value (c).
// The function first casts the s pointer to an unsigned char 
// pointer and assigns it to the ptr variable. This is done to enable 
// byte-level manipulation.
// The function then enters a loop that iterates n times.
// The comparison n-- > 0 checks whether n is greater than 0 after the 
// decrement. If n is 0 or negative, the loop stops. 
// The expression *(ptr++) = (unsigned char)c sets the value of the 
// current byte pointed to by ptr to the value of c, and then increments the 
// value of ptr by 1. This is done using the dereference operator * to 
// access the value at the memory address pointed to by ptr, and then 
// the post-increment operator ++ to increment the value of ptr.
// Since c is cast to an unsigned char before being used in the assignment, 
// it only sets the value of the current byte, rather than the entire 
// int value. This is important because ft_memset is only intended to set 
// each byte in the memory area pointed to by s to the same value, not 
// to set the entire memory area to the same value as an int.
#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*ptr;

	ptr = (unsigned char *)s;
	while (n-- > 0)
	{
		*(ptr++) = (unsigned char)c;
	}
	return (s);
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
