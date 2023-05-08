/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbrito-p <mbrito-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/08 20:25:51 by mbrito-p          #+#    #+#             */
/*   Updated: 2023/05/08 20:25:51 by mbrito-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


// Deletes and frees the given node and every
// successor of that node, using the function ’del’
// and free(3).
// Finally, the pointer to the list must be set to NULL.
// lst: The address of a pointer to a node.
// del: The address of the function used to delete
// the content of the node.
#include "libft.h"

void ft_lstclear(t_list **lst, void (*del)(void*))
{
    // Declare two pointers to t_list
    t_list *upcomming;
    t_list *current;

    // Check if lst is NULL or the pointer to the list is NULL
    if (!lst || !*lst)
        return;

    // Set current to the first element in the list
    current = *lst;

    // Loop through the list until the end is reached
    while (current)
    {
        // Store the pointer to the next element in the list
        upcomming = current->next;

        // Call the del function on the content of the current element
        del(current->content);

        // Free the memory allocated for the current element
        free(current);

        // Move to the next element in the list
        current = upcomming;
    }

    // Set the pointer to the list to NULL to prevent a dangling pointer
    *lst = NULL;
}