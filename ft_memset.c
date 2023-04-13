/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbrito-p <mbrito-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/13 17:48:06 by mbrito-p          #+#    #+#             */
/*   Updated: 2023/04/13 19:53:44 by mbrito-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//The  memset()  function  fills  the  first  n bytes of the memory area
//pointed to by s with the constant byte c.

#include "libft.h"

void *ft_memset(void *s, int c, size_t n)
{
	char *str;
	size_t i;

	str = s;
	i = 0;	
	if (i < n)
	{
		str[i] = c;
		i++;
	}
	return(s);
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
