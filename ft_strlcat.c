/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbrito-p <mbrito-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/14 20:13:59 by mbrito-p          #+#    #+#             */
/*   Updated: 2023/05/11 23:35:53 by mbrito-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//concatenates strings. Unlike strncat, strlcat() take the full 
//size of the buffer (not just the length) and guarantee 
//to NUL-terminate the result
/*	DESCRIPTION:
**	strlcat() appends string src to the end of dst.
**	It will append at most dstsize strlen(dst) - 1 characters.
**	It will then NUL-terminate, unless dstsize is 0 or
**	the original dst string was longer than dstsize
**	(in practice this should not happen as it means that
**	either dstsize is incorrect or that dst is not a properstring).
**	If the src and dst strings overlap, the behavior is undefined.
*/

#include "libft.h"

// size_t	ft_strlcat(char *dest, const char *src, size_t size)
// {
// 	size_t	i;
// 	size_t	j;

// 	/* If size is less than or equal to the length of dest, the result would be truncated
//     (the process of cutting off a portion of a string).
// 	   Thus, we simply return size plus the length of src. */
// 	if (size <= ft_strlen(dest))
// 	{
// 		return (size + ft_strlen(src));
// 	}
// 	/* Calculate the length of dest */
// 	i = ft_strlen(dest);
// 	/* Initialize j to 0 */
// 	j = 0;
// 	/* While src[j] is not the NUL character and the resulting string would not exceed size */
// 	while (src[j] != 0 && (i + 1) < size)
// 	{
// 		dest[i] = src[j];
// 		i++;
// 		j++;
// 	}
// 	/* Ensure that the resulting string is always NUL-terminated */
// 	dest[i] = 0;
// 	/* Return the total length of the original string and the appended string */
// 	return (i + ft_strlen(&src[j]));
// }

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
    size_t  i;
    size_t  len_src;
    size_t  len_dest;
    size_t  str_result;

    i = 0;
    str_result = 0;
    len_src = ft_strlen(src);
    len_dest = ft_strlen(dest);
    if (size > len_dest )	
		str_result = len_src + len_dest;
	else
        return(len_src + size);
    while(src[i] && (len_dest + 1) < size)
    {
        dest[len_dest] = src[i];
        len_dest++;
        i++;
    }    
    dest[len_dest] = '\0';
    return(str_result);
}


// int main(void)
// {
//     char str1[20] = "Hello, ";
//     char *str2 = "world!";
//     size_t dest_size = sizeof(str1);
//     size_t result = ft_strlcat(str1, str2, dest_size);
//     printf("Result: %zu, Destination string: %s\n", result, str1);

//     return 0;
// }