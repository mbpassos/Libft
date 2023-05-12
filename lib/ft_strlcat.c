/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbrito-p <mbrito-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/11 22:56:37 by mbrito-p          #+#    #+#             */
/*   Updated: 2023/05/11 22:56:37 by mbrito-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// strlcat() is a function that concatenates two strings. 
// It takes the full size of the buffer as a parameter (not just the length) 
// and guarantees to NUL-terminate the result. 
// The function appends string src to the end of dst, but the number 
// of characters that it will add is determined by the dstsize 
// parameter that you pass to the function.
// strlcat() will always make sure to leave room for a null 
// character ('\0') at the end of the string it is building. That's why 
// the comment says that it will add:
// "at most dstsize - strlen(dst) - 1 characters". strlen(dst) gives 
// you the length of the first string, and the - 1 is there to 
// make sure there is room for the null character.
// The function will append at most dstsize - strlen(dst) - 1 characters. 
// It will then NUL-terminate the result unless dstsize 
// is 0 or the original dst string was longer than dstsize. 
// In practice, this should not happen as it means that either dstsize 
// is incorrect or that dst is not a proper string. 
// If the src and dst strings overlap, the behavior is undefined.
//
// Parameters:
//   - dst: the destination string buffer to append to
//   - src: the source string to append to the destination string
//   - dstsize: the size of the destination buffer
//
// Return value: the total length of the original string and the 
// appended string that would have been created if enough 
// :space had been available.
#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	len_src;
	size_t	len_dest;
	size_t	str_result;

	i = 0;
	str_result = 0;
	len_src = ft_strlen(src);
	len_dest = ft_strlen(dest);
	if (size > len_dest)
		str_result = len_src + len_dest;
	else
		return (len_src + size);
	while (src[i] && (len_dest + 1) < size)
	{
		dest[len_dest] = src[i];
		len_dest++;
		i++;
	}
	dest[len_dest] = '\0';
	return (str_result);
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
