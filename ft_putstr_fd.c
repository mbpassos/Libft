/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbrito-p <mbrito-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/08 20:27:03 by mbrito-p          #+#    #+#             */
/*   Updated: 2023/05/08 20:27:03 by mbrito-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


// Outputs the string ’s’ to the given file
// descriptor.
#include "libft.h"

void ft_putstr_fd(char *s, int fd)
{
    if(!s)
        return ;
    write(fd, s, ft_strlen(s));
    // fd is the file descriptor to write to, 
    // s is a pointer to the buffer to write from, 
    // and ft_strlen(s) is the number of bytes to write.
}

// int main(void)
// {
//     char *str = "Hello, world!";
//     int fd = 1; // File descriptor for standard output (i.e., the terminal)

//     ft_putstr_fd(str, fd);
//     return 0;
// }