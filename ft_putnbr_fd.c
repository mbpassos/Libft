// Outputs the integer ’n’ to the given file
// descriptor.
#include "libft.h"

void ft_putnbr_fd(int n, int fd)
{
    long int    long_int;
    // This is done to handle the case where n 
    // is the minimum value of int and cannot 
    // be represented as a positive int.
    // Otherwise I would have t create a condition:
    // if (nb == -2147483648) to contemplate this number
    // long int is typically 64 bytes instead of the int 32
    //which means long int has wider ranges and also takes more memory

    long_int = n;
    if (long_int < 0)
    {
        ft_putchar_fd('-', fd);
        long_int *= -1;
    }
    // If l is greater than 9, we recursively call the function with l/10 as the argument
	if (long_int > 9)
		ft_putnbr_fd(long_int / 10, fd);
	
	// We write the last digit of l (converted to a character) to the file descriptor
	ft_putchar_fd(long_int % 10 + '0', fd);
}

// int	main(void)
// {
// 	// We test ft_putnbr_fd by writing different integers to the standard output (file descriptor 1)
// 	ft_putnbr_fd(12345, 1);  // Output: 12345
// 	ft_putchar_fd('\n', 1);
// 	ft_putnbr_fd(-6789, 1);  // Output: -6789
// 	ft_putchar_fd('\n', 1);
// 	ft_putnbr_fd(0, 1);      // Output: 0
// 	ft_putchar_fd('\n', 1);
	
// 	return (0);
// }
