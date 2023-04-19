/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/12 20:20:59 by mbrito-p          #+#    #+#             */
/*   Updated: 2023/04/19 17:51:09 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int main(void)
{
    char str1[] = "Hello, world!";
    char str2[] = "Hello, friends!";
    int result;
    
    result = ft_memcmp(str1, str2, strlen(str1));
    printf("Result of ft_memcmp implementation 1: %d\n", result);
    printf("Result of ft_memcmp implementation 1: %d\n", memcmp(str1, str2, strlen(str1)));
}