/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbrito-p <mbrito-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/13 16:38:04 by mbrito-p          #+#    #+#             */
/*   Updated: 2023/05/11 20:18:46 by mbrito-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// The  bzero()  function  erases  the  data in the n bytes of the memory
// starting at the location pointed to by s, by writing zeros (bytes con‐
// taining '\0') to that area.

#include "libft.h"

void ft_bzero(void *s, size_t n)
{
    unsigned char   *ptr;
    
    ptr = (unsigned char *)s;
    while(n-- > 0)
    {
        *(ptr++) = '\0';
    }
}

// int main(void) 
// {
// 	char str[] = "Problematic";
// 	printf("Before ft_bzero:%s",str);
// 	ft_bzero(str, 6);
// 	printf("After ft_bzero:%s",str);	   
// }