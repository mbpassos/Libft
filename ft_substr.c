/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbrito-p <mbrito-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/26 20:47:04 by mbrito-p          #+#    #+#             */
/*   Updated: 2023/04/26 20:47:04 by mbrito-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Allocates (with malloc(3)) and returns a substring
// from the string ’s’.
// The substring begins at index ’start’ and is of
// maximum size ’len’.
#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
    char	*substr;
    
    // If the input string is NULL, return NULL
    if (!s)
        return (NULL);
    
    // Ensure that the length of the substring does not exceed the length of the input string
    if (len > ft_strlen(s) - start)
        len = ft_strlen(s) - start;
    
    // Ensure that the start index is within the bounds of the input string
    if (start > ft_strlen(s))
        return (ft_strdup(""));
    
    // Allocate memory for the substring
    substr = malloc(sizeof(char) * (len + 1));
    if (!substr)
        return (NULL);
    
    // Copy the substring from the input string to the newly allocated memory
    ft_memcpy(substr, &s[start], len);
    
    // Add a null terminator to the end of the substring
    substr[len] = '\0';
    
    // Return the newly allocated substring
    return (substr);
}

// int main(void)
// {
//     char src[]="Craftsmanship";

//     printf("new sbtring is:%s",ft_substr(src, 5, 20));
//     return (0);
// }