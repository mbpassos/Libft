/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbrito-p <mbrito-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/12 20:20:59 by mbrito-p          #+#    #+#             */
/*   Updated: 2023/04/17 20:41:41 by mbrito-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int main() {
   char str[] = "hello world";
   char *ptr = ft_strchr(str, 'w');
   if (ptr != NULL) {
      printf("The character 'w' was found in the string at position %ld.\n", ptr - str);
   } else {
      printf("The character 'w' was not found in the string.\n");
   }
   return 0;
}