/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/18 19:04:57 by mbrito-p          #+#    #+#             */
/*   Updated: 2023/04/19 12:53:48 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// The function takes three arguments: haystack: a pointer to the larger string 
// in which to search for the substring needle: a pointer to the substring to 
// search for within the larger string len: the maximum number of characters 
// to search in the larger string
#include "libft.h"

char *ft_strnstr(const char *haystack, const char *needle, size_t len)
{
    size_t	i;
	size_t	j;
    //i will keeptrack of iterating haystack, and j to iterate over needle.
	i = 0;
    j = 0;
    //if the big string is null and the len is zero. 
	if (!haystack && !len)
		return (0);
    //checks if needle is an empty string or if needle is equal to haystack
	if (needle[0] == '\0' || needle == haystack)
		return ((char *)haystack);
	while (haystack[i] != '\0')
	{		
		while (haystack[i + j] == needle[j] && (i + j) < len)
		{
			if (haystack[i + j] == '\0' && needle[j] == '\0')
                // The & operator returns the memory address of 
                // the element at index i in the haystack string. 
                // Since the strnstr function returns a char * pointer, 
                // we need to typecast the memory address to the correct data type.
				return ((char *)&haystack[i]);
			j++;
		}
        //quando chega no null terminator da needle retorna o 
		if (needle[j] == '\0')
			return ((char *)(haystack + i));
		i++;
	}
	return (0);
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