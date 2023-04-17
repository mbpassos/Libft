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

// The strchr function in C is used to search a given string 
// (i.e., a sequence of characters) for the first occurrence 
// of a specified character.The str parameter is a pointer to the string 
// in which the search is to be performed. 
// The c parameter is the character that you want to search for in the string.
// The function returns a pointer to the first occurrence 
// of the character c in the string str. If the character 
// is not found, the function returns NULL.
#include "libft.h"

char *ft_strchr(const char *s, int c)
{
	while (*s != '\0') {
        if (*s == c) {
            return (char *)s;
        }
        s++;
    }
    if (*s == c) {
        return (char *)s;
    }
    return NULL;
}
