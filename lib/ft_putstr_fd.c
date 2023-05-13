// Outputs the string ’s’ to the given file
// descriptor.
#include "libft.h"

void ft_putstr_fd(char *s, int fd)
{
    if (!s)
        return ;
    write (fd, s, ft_strlen(s));
}

// int main(void)
// {
//     char *str = "Hello, world!";
//     int fd = 1; 
//     ft_putstr_fd(str, fd);
//     return 0;
// }