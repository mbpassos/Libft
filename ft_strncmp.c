/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbrito-p <mbrito-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/26 20:46:35 by mbrito-p          #+#    #+#             */
/*   Updated: 2023/04/26 20:46:35 by mbrito-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// The  function compares the two strings s1 and s2.  The locale is not taken into account (for a locale-aware com‐
// parison, see strcoll(3)).  
// In the context of the strncmp function, the statement "the locale is not taken into account" means 
// that the function does not use the user's locale settings when comparing the two strings. 
// Instead, it performs a simple binary comparison of the strings based on the 
// numerical values of their characters.It returns an integer less than, equal to, or 
// greater than zero if s1 is  found, respectively, to be less than, to match, or be greater than s2.
// The strncmp() function is similar, except it compares only the first (at most) n bytes of s1 and s2.
#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (s1[i] == s2[i] && s1[i] && s2[i] && i < n)
		i++;
	if (i == n)
		return (0);
	else
		return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}

// int main(void)
// {
//     char str1[] = "Hello";
//     char str2[] = "World!";

//     printf("In this case st2 > str1 so, the value should be negative:%d", ft_strncmp(str1, str2, 10));
//     return (0);
// }