/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbrito-p <mbrito-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/08 20:26:45 by mbrito-p          #+#    #+#             */
/*   Updated: 2023/05/08 20:26:45 by mbrito-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


// The fputc() function writes the character c (converted to an ``unsigned
// char'') to the output stream pointed to by stream.
// 42 PDF] Outputs the character ’c’ to the given file descriptor.
#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}

