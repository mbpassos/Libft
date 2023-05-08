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

char *ft_substr(char const *s, unsigned int start, size_t len)
{
    char *new_str;
    size_t len_s;
    size_t final;

    final = 0;
    len_s =ft_strlen(s);
    if(!s)
        return(0);
    if(start < len_s)
    {
        final = len_s - start; //ensure that the substring doesnt exceed the total length of the inital string.
    }
    if (final > len)
    {
        final = len; //ensures that the function extracts a substring that is no longer than the specified length. 
    }
    new_str = (char *)malloc(sizeof(char) * (final + 1)); //does typecasting and adds null to the end because of null terminator
    if (!new_str)
        return(0);
    ft_strlcpy(new_str, s + start, final + 1); //copies the substring from the original safely 
    return (new_str);
}

// int main(void)
// {
//     char src[]="Craftsmanship";

//     printf("new sbtring is:%s",ft_substr(src, 5, 20));
//     return (0);
// }