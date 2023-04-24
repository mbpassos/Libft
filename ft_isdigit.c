/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbrito-p <mbrito-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/13 15:22:28 by mbrito-p          #+#    #+#             */
/*   Updated: 2023/04/24 22:16:00 by mbrito-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return(1);
	return(0);
}

// int	main(void)
// {
// 	printf("teste digit:%d\n", ft_isdigit(64));
// 	printf("teste digit:%d\n", ft_isdigit(49));
// }
