/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/14 16:53:03 by mbrito-p          #+#    #+#             */
/*   Updated: 2023/04/22 20:31:56 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//Certainly! strlcpy is a string function that is similar to strcpy, but 
//it also takes a size argument to ensure that the destination buffer 
//is not overrun.

#include "libft.h"

size_t ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t i;
	size_t src_len;

	src_len = ft_strlen(src); 
	i = 0;
	while (i < (size - 1) && src[i])
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return(src_len);
}

// int		main(void)
// {
// 	char	src[] = "Hello, world!";
// 	char	dst[15];	
// 	printf("ft_strlcpy: %lu\n", ft_strlcpy(dst, src, 5));
// 	return (0);
// }