/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbrito-p <mbrito-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/08 20:27:13 by mbrito-p          #+#    #+#             */
/*   Updated: 2023/05/08 20:27:13 by mbrito-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


// The strdup function in C library is used to duplicate a string, 
// which means it allocates memory for a new string and copies the 
// contents of the original string into the new memory. 

#include "libft.h"

char *ft_strdup(const char *str) {
    size_t len = ft_strlen(str) + 1;//gets length and add i for null terminator
    char *new_str = malloc(len);//allocates memory for the new string using malloc.
    if (new_str == NULL)
		return (0);
    ft_memcpy(new_str, str, len);
	// new_str[len] = '\0'; nao sei se 'e necessario
    return (new_str);//returns a pointer to the new memory, which contains a duplicate of the original string.
}

// int main() {
//     char *str = "Hello, world!";
//     char *str_copy1 = strdup(str);
//     char *str_copy2 = ft_strdup(str);
    
//     printf("Original string: %s\n", str);
//     printf("strdup result: %s\n", str_copy1);
//     printf("ft_strdup result: %s\n", str_copy2);
    
//     free(str_copy1);
//     free(str_copy2);
//     return 0;
// }
