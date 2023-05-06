// Returns the last node of the list.
#include "libft.h"

t_list *ft_lstlast(t_list *lst)
{
    if (!lst)
		return (NULL);
    
    while (lst->next != NULL)
    {
        lst = lst->next;
    }

    return lst;
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

// 	last = ft_lstlast(list);
	
// 	printf("The last node of the list is: %s\n", (char *)last->content);	

// 	return (0);
// }