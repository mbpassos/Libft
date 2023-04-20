/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/12 20:20:59 by mbrito-p          #+#    #+#             */
/*   Updated: 2023/04/21 13:07:59 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int main() {
    char *str = "Hello, world!";
    char *str_copy1 = strdup(str);
    char *str_copy2 = ft_strdup(str);
    
    printf("Original string: %s\n", str);
    printf("strdup result: %s\n", str_copy1);
    printf("ft_strdup result: %s\n", str_copy2);
    
    free(str_copy1);
    free(str_copy2);
    return 0;
}

