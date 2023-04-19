//memchr is a standard library function in C that searches 
//a given memory block for the first occurrence of a specified byte.
//It scans the initial n bytes of the memory area pointed to by s for the first instance of
// The argumets are: s: A pointer to the memory block to search.c: The byte value to search for.
// n: The maximum number of bytes to search.Both c and the bytes 
// of the memory area pointed to by s are interpreted as unsigned char.

#include "libft.h"

void *ft_memchr(const void *s, int c, size_t n)
{
    //it casts the void pointer to an unsigned char pointer 
    //to ensure that the comparison is done on a byte-by-byte basis. 
    const unsigned char *p = s;

    while (n--)
    {
        // This while loop iteratea through the memory block. 
        // It decrements the 'n' parameter on each iteration, so 
        // the loop will terminate when either the byte is 
        // found or n reaches zero.
        if (*p == (unsigned char)c)
            return (void *)p;
        p++;
    }
    // It also returns NULL instead of a null pointer of 
    // type void *, which is equivalent.
    return NULL;
}

// int main()
// {
//     char str[] = "Hello, world!";
//     char *ptr1 = memchr(str, 'w', strlen(str));
//     char *ptr2 = ft_memchr(str, 'w', strlen(str));

//     if (ptr1 == ptr2)
//         printf("The ft_memchr function works as expected!\n");
//     else
//         printf("The ft_memchr function is incorrect.\n");

//     return 0;
// }

