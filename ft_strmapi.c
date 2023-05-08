// Applies the function ’f’ to each character of the
// string ’s’, and passing its index as first argument
// to create a new string (with malloc(3)) resulting
// from successive applications of ’f’.
#include "libft.h"

char *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
    size_t	i;
    size_t  len;
    char    *str_res;

    i = 0;
    len = ft_strlen(s);
    str_res = (char *)malloc(sizeof(char) * (len + 1));
    
    // The (char *) before malloc is a typecast that tells the compiler 
    // to treat the return value of malloc as a pointer to a character 
    // (char). In other words, it is converting the generic pointer 
    // type returned by malloc to a char pointer type.
    if(!str_res)
        return (NULL);
    while (i < len)
    // it cannot be changed to while (s[i]) as it would cause an infinite 
    // loop if the string s contains a null character before the end of the 
    // string.
    {
        str_res[i] = f(i, s[i]);
        i++;
    }
    str_res[i] = '\0';
    return (str_res);
}


