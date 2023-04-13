/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbrito-p <mbrito-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/13 16:01:42 by mbrito-p          #+#    #+#             */
/*   Updated: 2023/04/13 16:09:27 by mbrito-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	return (0);
}

// int	main(void)
// {
// 	printf("teste isascii:%d\n", ft_isascii(10));
// 	printf("teste isascii:%d\n", ft_isascii(128));
// 	printf("teste isascii:%d\n", ft_isascii(56));
// 	printf("teste isascii:%d\n", ft_isascii(140));
// }