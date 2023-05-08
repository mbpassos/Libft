/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/12 20:20:59 by mbrito-p          #+#    #+#             */
/*   Updated: 2023/05/06 01:51:50 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"


// This function takes a void pointer as an argument, which is cast 
// to an int pointer. The function then allocates memory for a new int 
// and stores the square of the integer pointed to by n in that memory. 
// The function returns a void pointer to the new int.
// Function to square an integer
void *square(void *n)
{
    int *result = malloc(sizeof(int)); // Allocate memory for the result of the operation
    if (!result) // Check if memory allocation failed
        return NULL; // Return NULL if it did
    *result = (*(int *)n) * (*(int *)n); // Square the integer value by dereferencing the void pointer n, casting it to an integer pointer, dereferencing it again to obtain the integer value, and then squaring it
    return result; // Return a void pointer to the squared integer
}

// Function to free an integer
void delete_int(void *n)
{
    free(n); // Free the memory allocated for the integer value
}

int main(void)
{
    // Create a list of integers
    t_list *lst = ft_lstnew(malloc(sizeof(int))); // Create a new list node and allocate memory for an integer
    if (!lst) // Check if memory allocation failed
        return 0; // Exit the program with a failure code if it did
    *(int *)lst->content = 1; // Cast the content of the node to an integer pointer, dereference it to obtain the integer value, and then set it to 1
    ft_lstadd_back(&lst, ft_lstnew(malloc(sizeof(int)))); // Create a new node at the end of the list and allocate memory for another integer
    *(int *)lst->next->content = 2; // Cast the content of the next node to an integer pointer, dereference it to obtain the integer value, and then set it to 2
    ft_lstadd_back(&lst, ft_lstnew(malloc(sizeof(int)))); // Create a new node at the end of the list and allocate memory for another integer
    *(int *)lst->next->next->content = 3; // Cast the content of the next node after the last one to an integer pointer, dereference it to obtain the integer value, and then set it to 3

    // Use ft_lstmap to create a new list of squared integers
    t_list *squared_lst = ft_lstmap(lst, square, delete_int); // Apply the square function to each integer in the original list and create a new list of squared integers
    if (!squared_lst) // Check if memory allocation failed
        return 0; // Exit the program with a failure code if it did

    // Print the squared integers
    t_list *node = squared_lst; // Set the current node to the first node in the squared list
    // In this line, the pointer node is initialized to point to the same address as squared_lst, 
    // which is the first node in the linked list. This means that node now points to the beginning of 
    // the new list, and we can use it to traverse the list and access the content of each node. We can 
    // use the node->next pointer to move to the next node in the list, and so on, until we 
    // reach the end of the list (when node->next is NULL).
    while (node) // Loop while the current node is not NULL
    {
        printf("%d\n", *(int *)node->content); // Cast the content of the current node to an integer pointer, dereference it to obtain the integer value, and then print it
        node = node->next; // Move to the next node in the squared list
    }

    // Clean up memory
    ft_lstclear(&lst, free); // Free the memory used by the original list and its contents
    ft_lstclear(&squared_lst, free); // Free the memory used by the squared list and its contents

    return 0; // Exit the program with a success code
}