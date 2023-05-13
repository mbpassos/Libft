/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbrito-p <mbrito-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/26 20:45:48 by mbrito-p          #+#    #+#             */
/*   Updated: 2023/04/26 20:45:48 by mbrito-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// memcmp, on the other hand, compares two blocks of memory 
// byte by byte up to a specified number of bytes. It returns 
// a value indicating whether the blocks of memory are equal, 
// or whether one is greater or less than the other.

#include "libft.h"

int ft_memcmp(const void *s1, const void *s2, size_t n)
{
    unsigned char *ptr_1;
    unsigned char *ptr_2;

    ptr_1 = (unsigned char*)s1;
    ptr_2 = (unsigned char*)s2;
    //n-- is basicaly an assurance that n has to bigger than 0
    while (n--)
	{
		if (*ptr_1 != *ptr_2)
			return (*ptr_1 - *ptr_2);
		ptr_1++;
		ptr_2++;
	}
	return (0);

}

// int ft_memcmp(const void *s1, const void *s2, size_t n)
// {
//     const unsigned char *ptr_s1;
//     const unsigned char *ptr_s2;

//     ptr_s1 = s1;
//     ptr_s2 = s2;
//     while(n--)
//     {
//         if (*ptr_s1 != *ptr_s2)
//             return (*ptr_s1 - *ptr_s2);
//         ptr_s1++;
//         ptr_s2++;
//     }
//     return (0);
// }

// int main(void)
// {
//     char str1[] = "Hello, world!";
//     char str2[] = "Hello, friends!";
//     int result;
    
//     result = ft_memcmp(str1, str2, strlen(str1));
//     printf("Result of ft_memcmp implementation 1: %d\n", result);
//     printf("Result of ft_memcmp implementation 1: %d\n", memcmp(str1, str2, strlen(str1)));
// }