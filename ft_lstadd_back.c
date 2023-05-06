// Adds the node ’new’ at the end of the list.
// lst: The address of a pointer to the first link of
// a list.
// new: The address of a pointer to the node to be
// added to the list.
#include "libft.h"

void ft_lstadd_back(t_list **lst, t_list *new)
{
    t_list	*temp;

	// Check if the new node or the list itself is NULL
	if (!new || !lst)
		return ;

	// Check if the list is empty
	if (!*lst)
	{
		*lst = new; // If the list is empty, set the new node as the first node
		return ;
	}

	// Traverse the list to the last node
	temp = ft_lstlast(*lst);

	// Add the new node to the end of the list
	temp->next = new;
}

// int	main(void)
// {
// 	t_list *list = NULL;
// 	t_list *new_node;
//     t_list *last;

// 	// Create the first node of the list
// 	list = ft_lstnew("Node 1");

// 	// Add a new node to the front of the list
// 	new_node = ft_lstnew("Node 2");
// 	ft_lstadd_front(&list, new_node);

// 	// Add another node to the front of the list
// 	new_node = ft_lstnew("Node 3");
// 	ft_lstadd_front(&list, new_node);

//     // Create node and add to the end of the list
// 	last = ft_lstnew("Node 4");
//     ft_lstadd_back(&list, last);

//     while (list)
// 	{
// 		printf("%s\n", (char *)list->content);
// 		list = list->next;
// 	}	

// 	return (0);
// }