/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbrito-p <mbrito-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/12 20:20:59 by mbrito-p          #+#    #+#             */
/*   Updated: 2023/04/18 19:45:46 by mbrito-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int main()
{
    char str1[] = "abcdefghijhjkhjk";
    char str2[] = "abcdefghijhjkhjk";

    // Use standard library memmove to copy 5 bytes of str1 to str1+3
    memmove(str1+3, str1, 10);
    printf("str1 after memmove: %s\n", str1); // Output: abcabcdej

    // Use ft_memmove to copy 5 bytes of str2 to str2+3
    ft_memmove(str2+3, str2, 10);
    printf("str2 after ft_memmove: %s\n", str2); // Output: abcabcdej

    return 0;
}