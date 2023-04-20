// calloc() is a standard library function in C that is 
// used to dynamically allocate memory for an array of elements. 
// nmemb - the number of elements to allocate.
// size - the size of each element in bytes.
// The calloc() function is similar to the malloc() function, 
// but it also initializes the allocated memory to zero.
// In some cases, leaving the memory uninitialized may not cause 
// any problems. However, in other cases, it can lead to hard-to-debug
// bugs or security vulnerabilities. 
#include "libft.h"

void *ft_calloc(size_t nmemb, size_t size) 
{
    size_t total_size; 
    size_t i;
    unsigned char *p;
    void *ptr;    
    
    total_size = nmemb * size; // calculate the total size of the memory block
    ptr = malloc(total_size); // allocate memory using malloc
    if (ptr != NULL) { // check if allocation was successful
        p = ptr; // cast the pointer to an unsigned char pointer
        i = 0; // initialize counter
        while (i < total_size) { //set each byte to 0 could ue ft_bzero also
            p[i] = 0; // set the ith byte to 0
            i++; // increment the counter
        }
    }
    return ptr; // return pointer to allocated memory
}

// int main() {
//     // test case 1: allocate 10 ints using ft_calloc and initialize them to 0
//     int *arr1 = (int*)ft_calloc(10, sizeof(int));
//     if (arr1 != NULL) {
//         for (int i = 0; i < 10; i++) {
//             printf("%d ", arr1[i]); // expected output: 0 0 0 0 0 0 0 0 0 0
//         }
//         printf("\n");
//         free(arr1);
//     }
    
//     // test case 2: allocate 10 ints using calloc and initialize them to 0
//     int *arr2 = (int*)calloc(10, sizeof(int));
//     if (arr2 != NULL) {
//         for (int i = 0; i < 10; i++) {
//             printf("%d ", arr2[i]); // expected output: 0 0 0 0 0 0 0 0 0 0
//         }
//         printf("\n");
//         free(arr2);
//     }
    
//     // test case 3: allocate 10 ints using ft_calloc and initialize them to 42
//     int *arr3 = (int*)ft_calloc(10, sizeof(int));
//     if (arr3 != NULL) {
//         memset(arr3, 42, 10 * sizeof(int));
//         for (int i = 0; i < 10; i++) {
//             printf("%d ", arr3[i]); // expected output: 42 42 42 42 42 42 42 42 42 42
//         }
//         printf("\n");
//         free(arr3);
//     }
    
//     // test case 4: allocate 10 ints using calloc and initialize them to 42
//     int *arr4 = (int*)calloc(10, sizeof(int));
//     if (arr4 != NULL) {
//         memset(arr4, 42, 10 * sizeof(int));
//         for (int i = 0; i < 10; i++) {
//             printf("%d ", arr4[i]); // expected output: 42 42 42 42 42 42 42 42 42 42
//         }
//         printf("\n");
//         free(arr4);
//     }
    
//     // test case 5: allocate 10 ints using ft_calloc and calloc, and compare the memory blocks
//     int *arr5_1 = (int*)ft_calloc(10, sizeof(int));
//     int *arr5_2 = (int*)calloc(10, sizeof(int));
//     if (arr5_1 != NULL && arr5_2 != NULL) {
//         memset(arr5_1, 42, 10 * sizeof(int));
//         memset(arr5_2, 42, 10 * sizeof(int));
//         if (memcmp(arr5_1, arr5_2, 10 * sizeof(int)) == 0) {
//             printf("Memory blocks are equal\n"); // expected output: Memory blocks are equal
//         }
//         free(arr5_1);
//         free(arr5_2);
//     }
    
//     return 0;
// }