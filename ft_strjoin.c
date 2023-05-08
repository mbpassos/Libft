/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbrito-p <mbrito-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/26 20:46:22 by mbrito-p          #+#    #+#             */
/*   Updated: 2023/04/26 20:46:22 by mbrito-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Allocates (with malloc(3)) and returns a new
// string, which is the result of the concatenation
// of ’s1’ and ’s2’.

#include "libft.h"

char *ft_strjoin(char const *s1, char const *s2)
{
    int i;
    int j;
    char    *new_str;

    i = 0;
    j = 0;
    if(!s1 || !s2 )
        return (0);
    new_str = (char *)malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));     
    if(!new_str)
        return (0);    
    while(s1[i])
    {
        new_str[i] = s1[i];
        i++;    
    }
    while(s2[j])
    {
        new_str[i + j] = s2[j];
        j++;
    }    
    new_str[i + j] = '\0';
    return(new_str);
}

// int main(void)
// {
//     char    s1[] = "Hello ";
//     char    s2[] = "World!";

//     printf("ft_strjoin:%s", ft_strjoin(s1, s2));
//     return (0);
// }