/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbrito-p <mbrito-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/26 20:46:56 by mbrito-p          #+#    #+#             */
/*   Updated: 2023/04/26 20:46:56 by mbrito-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Allocates (with malloc(3)) and returns a copy of
// ’s1’ with the characters specified in ’set’ removed
// from the beginning and the end of the string.
#include "libft.h"

int	is_char_in_set(char const *set, char c) //check if a given character is in the set string
{
	size_t	i;

	i = 0;
	while (set[i])
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
    char *trimmed;
	size_t	start;
	size_t	end;
	size_t	len;

	// If either s1 or set is NULL, return NULL
	if (!s1 || !set)
		return (NULL);

	// Get the length of s1
	len = strlen(s1);

	// Find the start index of the non-trimmed string
	start = 0;
	while (start < len && is_char_in_set(set, s1[start]))
		start++;

	// Find the end index of the non-trimmed string
	end = len - 1;
	while (end > start && is_char_in_set(set, s1[end]))
		end--;

	// Allocate memory for the trimmed string 
	trimmed = (char *)malloc(sizeof(char) * (end - start + 2));
	if (!trimmed)
		return (NULL);

	// Copy the trimmed string into the new buffer 
    //s1 + start is used to get a pointer to the beginning of the 
    //trimmed substring in the original string s1.
	ft_strlcpy(trimmed, s1 + start, end - start + 1);

	// Add the null terminator at the end of the trimmed string
	trimmed[end - start + 1] = '\0';

	// Return the trimmed string
	return (trimmed);
}

// int	main(void)
// {
// 	char	*str;
// 	char	*trimmed;

// 	// Test case 1: trim leading and trailing spaces
// 	str = "   hello world   ";
// 	trimmed = ft_strtrim(str, " ");
// 	printf("Original string: '%s'\n", str);
// 	printf("Trimmed string: '%s'\n", trimmed);
// 	free(trimmed);

// 	// Test case 2: trim leading and trailing tabs
// 	str = "\t\t\tfoo bar\t\t\t";
// 	trimmed = ft_strtrim(str, "\t");
// 	printf("Original string: '%s'\n", str);
// 	printf("Trimmed string: '%s'\n", trimmed);
// 	free(trimmed);

// 	return (0);
// }
