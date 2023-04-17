/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbrito-p <mbrito-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/12 20:20:59 by mbrito-p          #+#    #+#             */
/*   Updated: 2023/04/14 20:57:10 by mbrito-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int main(void)
{
    char str1[20] = "Hello, ";
    char *str2 = "world!";
    size_t dest_size = sizeof(str1);
    size_t result = ft_strlcat(str1, str2, dest_size);
    printf("Result: %zu, Destination string: %s\n", result, str1);

    return 0;
}

