/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/12 20:20:59 by mbrito-p          #+#    #+#             */
/*   Updated: 2023/04/23 14:50:16 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	main(void)
{
	char	*str;
	char	*trimmed;

	// Test case 1: trim leading and trailing spaces
	str = "   hello world   ";
	trimmed = ft_strtrim(str, " ");
	printf("Original string: '%s'\n", str);
	printf("Trimmed string: '%s'\n", trimmed);
	free(trimmed);

	// Test case 2: trim leading and trailing tabs
	str = "\t\t\tfoo bar\t\t\t";
	trimmed = ft_strtrim(str, "\t");
	printf("Original string: '%s'\n", str);
	printf("Trimmed string: '%s'\n", trimmed);
	free(trimmed);

	return (0);
}




