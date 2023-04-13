/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbrito-p <mbrito-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/13 16:21:32 by mbrito-p          #+#    #+#             */
/*   Updated: 2023/04/13 16:31:32 by mbrito-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
		return (1);
	return(0);
}

// int	main(void)
// {
// 	printf("teste isprint:%d\n", ft_isprint(30));
// 	printf("teste isprint:%d\n", ft_isprint(48));
// }


