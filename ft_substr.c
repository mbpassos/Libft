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

// Define the function ft_substr that takes in a string s, an unsigned integer start and a size_t len as arguments.
char	*ft_substr(char const *s, unsigned int start, size_t len)
{
    char	*substr; // Declare a pointer to char called substr.
    size_t	str_size; // Declare a variable of type size_t called str_size.

    // If the string s is null, return null.
    if (!s)
        return (NULL);

    // Get the length of the string s.
    str_size = ft_strlen(s);

    // If start is greater than the length of the string s, 
    // allocate memory for a new string containing the null character and return it.
    if (str_size < start)
    {
        substr = (char *)malloc(sizeof(char) * 1);
        if (!substr)
            return (NULL);
        substr[0] = '\0';
        return (substr);
    }

    // If len is greater than the difference between the length of the string s and the starting index,
    // set len to the difference between the length of the string s and the starting index.
    if (len > str_size - start)
        len = str_size - start;

    // Allocate memory for the new substring based on len and the size of a character.
    substr = (char *)malloc(sizeof(char) * (len + 1));
    if (!substr)
        return (NULL);

    // Copy the contents of the string s starting from the given start index up to len characters 
    // into the newly allocated memory block pointed to by substr.
    ft_memcpy(substr, s + start, len);

    // Append a null terminating character to the end of the newly created substring.
    substr[len] = '\0';

    // Return the newly created substring.
    return (substr);
}


// int main(void)
// {
//     char src[]="Craftsmanship";
//     printf("new sbtring is:%s",ft_substr(src, 5, 20));
//     return (0);
// }