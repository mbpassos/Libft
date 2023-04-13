/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbrito-p <mbrito-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/13 15:45:27 by mbrito-p          #+#    #+#             */
/*   Updated: 2023/04/13 21:21:45 by mbrito-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_isalnum(int c)
{
	if ((c >= 48 && c <= 57) || (c >= 65 && c <= 90) || (c >= 97 && c <= 122))
		return (1);
	return (0);
}

// int	main(void)
// {
// 	printf("teste digit:%d\n", ft_isalnum(14));
// 	printf("teste digit:%d\n", ft_isalnum(67));
// 	printf("teste digit:%d\n", ft_isalnum(97));
// 	printf("teste digit:%d\n", ft_isalnum(49));
// }