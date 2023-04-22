// Allocates (with malloc(3)) and returns an array
// of strings obtained by splitting ’s’ using the
// character ’c’ as a delimiter. The array must end
// with a NULL pointer
#include "libft.h"

char	**ft_split(char const *s, char c)
{
	size_t	i;
	size_t	j;
	size_t	k;
	char	**final_arr;

	if (!s)
		return (NULL);
    final_arr = malloc(sizeof(char *) * (ft_strlen(s) / 2 + 2)); //2 + 2 represents 2 null terminatos and how many parts the string is divided.
	if (!final_arr)
		return (NULL);
	i = 0;
	k = 0;
	while (s[i])
	{
		j = i;
        //incremented until it reaches the end of the current substring or the delimiter character c
		while (s[j] && s[j] != c)
			j++;
        //if j > 0 
		if (j > i)
		{
            //The size of the memory block is calculated as j - i + 1, which is the length of the substring plus one extra byte for the null terminator.
			final_arr[k] = malloc(sizeof(char) * (j - i + 1));
			if (!final_arr[k])
                return (NULL);
            ft_strlcpy(final_arr[k], s + i, j - i + 1);
            k++;
		}
		i = j + (s[j] != '\0');
	}
	final_arr[k] = NULL;
	return (final_arr);
}
