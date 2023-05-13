// #include <string.h>
// Function returns a pointer to a new string which 
// is a duplicate of the string s. Memory for the new 
// string is obtained with malloc(3), and can be 
// freed with free(3).
// Returns a pointer to the duplicated string. 
// It returns NULL if insufficient memory was available
#include "libft.h"

char    *ft_strdup(const char *s)
{
    size_t  full_size;
    char    *s_cpy;
    
    full_size = ft_strlen(s) + 1;
    s_cpy = malloc(full_size);
    if (s_cpy == NULL)
        return (0);
    ft_memcpy(s_cpy, s, full_size);
    return (s_cpy);
}

// int main() {
//     char *str = "Hello, world!";
//     char *str_copy1 = strdup(str);
//     char *str_copy2 = ft_strdup(str);    
//     printf("Original string: %s\n", str);
//     printf("strdup result: %s\n", str_copy1);
//     printf("ft_strdup result: %s\n", str_copy2);    
//     free(str_copy1);
//     free(str_copy2);
//     return 0;
// }