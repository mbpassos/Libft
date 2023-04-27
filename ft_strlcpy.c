/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/14 16:53:03 by mbrito-p          #+#    #+#             */
/*   Updated: 2023/04/27 23:10:45 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*  DESCRIPTION:
** 	The strlcpy() and strlcat() functions copy and concatenate strings
**	respectively.  They are designed to be safer, more consistent, and less
**	error prone replacements for strncpy(3) and strncat(3).  Unlike those
**	functions, strlcpy() and strlcat() take the full size of the buffer (not
**	just the length) and guarantee to NUL-terminate the result (as long as
**	size is larger than 0 or, in the case of strlcat(), as long as there is
**	at least one byte free in dst).  Note that you should include a byte for
**	the NUL in size.  Also note that strlcpy() and strlcat() only operate on
**	true "c" strings.  This means that for strlcpy() src must be NUL-termi-
**	nated and for strlcat() both src and dst must be NUL-terminated.
**
** 	The strlcpy() function copies up to size - 1 characters from the NUL-
**	terminated string src to dst, NUL-terminating the result.
*/

#include "libft.h"

/* The ft_strlcpy function copies up to dstsize - 1 characters from the string src to dst,
 * NUL-terminating the result if dstsize is not 0.
 * It ensures that the resulting string will always be NUL-terminated.
 * The size of the source string is returned.
 */

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	srcsize;
	size_t	i;

	/* Get the length of the source string */
	srcsize = ft_strlen(src);
	/* Initialize i to -1 
	In the ft_strlcpy function, i is initialized to -1 
	to ensure that the first character of src is copied 
	to the beginning of dst. This is because in C, arrays 
	are indexed starting from 0, and initializing i to -1 means 
	that the first iteration of the loop will increment i to 0, 
	which corresponds to the first character of src. If i were 
	initialized to 0 instead, the loop would skip the first character 
	of src and start copying from the second character.	
	*/
	i = -1;
	/* If dstsize is not 0 */
	if (dstsize != 0)
	{
		/* Copy up to dstsize - 1 characters from src to dst the -1 takes the null terminator */
		while (src[++i] && i < (dstsize - 1))
			dst[i] = src[i];
		/* Ensure that the resulting string is always NUL-terminated */
		dst[i] = '\0' ;
	}
	/* Return the size of the source string */
	return (srcsize);
}

// int		main(void)
// {
// 	char	src[] = "Hello, world!";
// 	char	dst[15];	
// 	printf("ft_strlcpy: %lu\n", ft_strlcpy(dst, src, 5));
// 	return (0);
// }