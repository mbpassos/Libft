/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/18 19:04:57 by mbrito-p          #+#    #+#             */
/*   Updated: 2023/05/12 20:11:02 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// The function takes three arguments: haystack: a pointer to the larger string 
// in which to search for the substring needle: a pointer to the substring to 
// search for within the larger string len: the maximum number of characters 
// to search in the larger string
#include "libft.h"

/* This function locates the first occurrence of the null-terminated string needle
   in the null-terminated string haystack, where not more than len characters are searched. */
char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	h; /* Counter for haystack */
	size_t	n; /* Counter for needle */

	h = 0; /* Initialize h to 0 */
	n = 0; /* Initialize n to 0 */

	/* If needle is an empty string, return haystack */
	if (needle[n] == 0)
		return ((char *)haystack);

	/* While there are still characters in haystack */
	while (haystack[h])
	{
		/* While there are still characters in both haystack and needle
		   and the characters match and the remaining length is greater than h+n */
		while (haystack[h + n] && haystack[h + n] == needle[n] && len > (h + n))
			n++; /* Move to the next character in needle */
		
		/* If needle has been completely matched */
		if (!(needle[n]))
			return ((char *)haystack + h); /* Return the pointer to the start of the match */
		
		n = 0; /* Reset n to 0 */
		h++; /* Move to the next character in haystack */
	}

	return (0); /* If no match is found, return NULL */
}

// int main(void)
// {
//     char haystack[] = "Sportsmanship";
//     char needle[] = "man";
//     char *result;
//     char *o_result;

//     result = ft_strnstr(haystack, needle, strlen(haystack));
//     printf("Result: %s\n", result);
//     printf("Original Function Result: %s\n", o_result);

//     return 0;
// }