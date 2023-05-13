// Allocates (with malloc(3)) and returns a new
// string, which is the result of the concatenation
// of ’s1’ and ’s2’.Return value: The new string.
// NULL if the allocation fails.
#include "libft.h"

char    *ft_strjoin(char const *s1, char const *s2)
{
    int     i;
    int     j;
    size_t  len_s1;
    size_t  len_s2;
    char    *final_str;

    if(!s1 || !s2 )
        return (0);
    len_s1 = ft_strlen(s1);
    len_s2 = ft_strlen(s2);
    final_str = (char *)malloc(sizeof(char) * (len_s1 + len_s2 + 1));
    if (final_str == NULL)
        return (NULL);
    i = 0;
    j = 0;
    while(s1[i])
    {
        final_str[i] = s1[i];
        i++;
    }
    while(s2[j])
    {
        final_str[i + j] = s2[j];
        j++;
    }
    final_str[i + j] = '\0';
    return (final_str);    
}

// int main(void)
// {
//     char    s1[] = "Hello ";
//     char    s2[] = "World!";
//     printf("ft_strjoin:%s", ft_strjoin(s1, s2));
//     return (0);
// }