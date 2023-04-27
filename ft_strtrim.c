/* Allocates (with malloc(3)) and returns a copy of ’s1’
** with the characters specified in ’set’ removed from the beginning
** and the end of the string.
*/

#include "libft.h"

/* The ft_isset function checks whether a character c is contained in the set string */
static int	ft_isset(char c, char const *set)
{
	int	i;

	i = 0;
	while (set[i])
		if (c == set[i++])
			return (1);
	return (0);
}

/* The ft_strtrim function trims the leading and trailing characters in s1 that are contained in set */
char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	len;
	char	*str;
	size_t	i;
	size_t	j;

	i = 0;
	/* If s1 is NULL, return NULL */
	if (!s1)
		return (NULL);
	/* Get the length of s1 */
	len = ft_strlen(s1);
	/* Find the index of the first non-set character in s1 */
	while (ft_isset(s1[i], set))
		i++;
	/* If all characters in s1 are set characters, return an empty string */
	if (i == len)
		return (ft_strdup(""));
	/* Find the index of the last non-set character in s1 */
	j = ft_strlen(s1);
	while (ft_isset(s1[--j], set));
	/* Calculate the length of the trimmed string */
	j = (j + 1) - i;
	/* Allocate memory for the trimmed string */
	str = ft_substr(s1, i, j);
	/* Return the trimmed string */
	return (str);
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
