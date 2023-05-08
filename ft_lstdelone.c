// Takes as a parameter a node and frees the memory of
// the node’s content using the function ’del’ given
// as a parameter and free the node. The memory of
// ’next’ must not be freed.
// lst: The node to free.
// del: The address of the function used to delete
// the content.
#include "libft.h"

void ft_lstdelone(t_list *lst, void (*del)(void*))
{
    // If the list node and the delete function exis
    if(lst && del)
    {
        // Call the delete function on the content of the list node
        del(lst->content);
        // Free the memory allocated for the list node
        free(lst);
        // Set the pointer to the list node to NULL to prevent a dangling pointer
        // A dangling pointer is a pointer that refers to a memory location that has been deallocated or freed. 
        // In other words, it is a pointer that points to an invalid or non-existent memory address.
        lst = NULL;
    }
}

// void delete_string(void *str)
// {
//     free(str);
// }

// int main(void)
// {
//     // Create a new node with a string "hello"
//     t_list *node = ft_lstnew(strdup("hello"));

//     // Call ft_lstdelone to delete the node
//     ft_lstdelone(node, delete_string);

//     // Print a message to indicate successful execution
//     printf("Program completed successfully.\n");

//     return 0;
// }