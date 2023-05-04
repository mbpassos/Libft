/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/12 20:20:59 by mbrito-p          #+#    #+#             */
/*   Updated: 2023/05/04 23:06:01 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int main(void)
{
    // Create a new node with an integer value
    int data = 42;
    t_list *node = ft_lstnew(&data);

    // Check if the node was created successfully
    if (node == NULL)
    {
        printf("Error: Failed to create new node\n");
        return EXIT_FAILURE;
    }

    // Print the contents of the new node
    printf("New node created with value %d\n", *(int *)node->content);

    // Free the memory allocated for the node
    free(node);

    return EXIT_SUCCESS;
}



