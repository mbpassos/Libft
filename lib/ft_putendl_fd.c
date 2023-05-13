// Outputs the string ’s’ to the given file descriptor
// followed by a newline.
#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	size_t	len;

	len = ft_strlen(s);
	write(fd, s, len);
	write(fd, "\n", 1); 
}

// #include <fcntl.h> // for open function
// int main(void)
// {
//     int fd;
//     char *str;

//     str = "Hello, world!";
//     fd = open("output.txt", O_WRONLY | O_CREAT | O_TRUNC, 0644); // open file in write mode, create if it doesn't exist, truncate if it does
//     if (fd < 0) // check if file opened successfully
//     {
//         ft_putstr_fd("Error: could not open file\n", 2); // write error message to standard error
//         return (1); // exit with error code
//     }
//     ft_putendl_fd(str, fd); // write string to file with newline
//     close(fd); // close file descriptor
//     return (0); // exit with success code
// }