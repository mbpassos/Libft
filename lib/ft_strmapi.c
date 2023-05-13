// Applies the function ’f’ TO each character of the
// string ’s’, and passing its index as first argument
// to create a new string (with malloc(3)) resulting
// from successive applications of ’f’.
// Return value: The string created from the 
// successive applications of ’f’.
// Returns NULL if the allocation fails.

#include "libft.h"

char    *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
    size_t	i;
    size_t  len;
    char    *str_res;

    i = 0;
    len = ft_strlen(s);
    str_res = (char *)malloc(sizeof(char) * (len + 1));
    if(!str_res)
        return (NULL);
    while (i < len)
    {
        str_res[i] = f(i, s[i]);
        i++;
    }
    str_res[i] = '\0';
    return (str_res);
}

// int main()
// {
//     char str[] = "hello world";
//     char *new_str;
//     // apply the double_char function to each character in str
//     new_str = ft_strmapi(str, double_char);
//     // print the original and new strings
//     printf("Original string: %s\n", str);
//     printf("New string: %s\n", new_str);
//     // free the memory allocated for new_str
//     free(new_str);
//     return 0;
// }