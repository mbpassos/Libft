// Allocates (with malloc(3)) and returns a new node.
// The member variable ’content’ is initialized with
// the value of the parameter ’content’. The variable
// ’next’ is initialized to NULL.
#include "libft.h"

t_list	*ft_lstnew(void *content)
{
    t_list *node;

    node = (t_list *)malloc(sizeof(t_list));
    if (!node)
        return (NULL);
    node->content = content;
    node->next = NULL;
    return (node);

}

// int main(void)
// {
//     // Create a new node with an integer value
//     int data = 42;
//     t_list *node = ft_lstnew(&data);

//     // Check if the node was created successfully
//     if (node == NULL)
//     {
//         printf("Error: Failed to create new node\n");
//         return EXIT_FAILURE;
//     }

//     // Print the contents of the new node
//     printf("New node created with value %d\n", *(int *)node->content);

//     // Free the memory allocated for the node
//     free(node);

//     return EXIT_SUCCESS;
// }