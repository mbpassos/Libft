/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbrito-p <mbrito-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/26 20:46:47 by mbrito-p          #+#    #+#             */
/*   Updated: 2023/04/26 20:46:47 by mbrito-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// The strrchr() function returns a pointer to the last occurrence of the character c in the string s.
#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	i;

	i = 0;
   // to find the lenght of the string
	while (s[i])
		i++;
   //starting from the last position check for the character 
	while (i >= 0)
	{
		if (s[i] == (char)c)
         //s + i to return the position of the last found 
         // c character on the string. s is the first position, i 
         // is the int number representing the position where 
         // th character was found
			return ((char *)(s + i));
		i--;
	}
	return (0);
}

// int main(void)
// {
//     const char *str = "Hello, world!";
//     char c = 'o';
//     char *result = ft_strrchr(str, c);

//     if (result != NULL)
//     {
//         printf("'%c' was found at position %ld in the string '%s'\n", c, result - str, str);
//     }
//     else
//     {
//         printf("'%c' was not found in the string '%s'\n", c, str);
//     }

//     return 0;
// }