/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbrito-p <mbrito-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/17 20:33:14 by mbrito-p          #+#    #+#             */
/*   Updated: 2023/04/17 20:41:01 by mbrito-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* LIBRARY: <string.h>
** SYNOPSIS: locate character in string (first occurrence)
** DESCRIPTION: The strchr() function locates the first
** occurrence of c (converted to a char) in the string pointed to by s.
** The terminating null character is considered to be part of the string;
** therefore if c is `\0', the functions locate the terminating `\0'. */
#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	/* While s points to a non-null character and the character c is not equal to s */
	while (*s && (unsigned char)c != *s)
		s++; /* Move to the next character in s */
	
	/* If the character c is found, return a pointer to that character */
	if ((unsigned char)c == *s)
		return ((char *)s);
	
	/* Otherwise, return a null pointer */
	return (0);
}

// int main() {
//    char str[] = "hello world";
//    char *ptr = ft_strchr(str, 'w');
//    if (ptr != NULL) {
//       printf("The character 'w' was found in the string at position %ld.\n", ptr - str);
//    } else {
//       printf("The character 'w' was not found in the string.\n");
//    }
//    return 0;
// }