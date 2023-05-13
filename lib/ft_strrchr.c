// #include <string.h>
// Locate character in string
// The strrchr() function returns a pointer to the last occurrence 
// of the character c in the string s.
#include "libft.h"

char    *ft_strrchr(const char *s, int c)
{
    int i;

    i = 0;
    while (s[i])
        i++;
    while (i >= 0)
    {
        if (s[i] == (char)c)
            return ((char *)&s[i]);
        i--;
    }
    return (0); 
}

// int main(void)
// {
//     const char *str = "Hello, world!";
//     char c = 'o';
//     char *result = ft_strrchr(str, c);
//     if (result != NULL)
//     {
//         printf("'%c' at position %ld in s '%s'\n", c, result - str, str);
//     }
//     else
//     {
//         printf("'%c' was not found in the string '%s'\n", c, str);
//     }
//     return 0;
// }