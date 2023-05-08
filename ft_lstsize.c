// Counts the number of nodes in a list.
#include "libft.h"

int ft_lstsize(t_list *lst)
{
    int count;

    count = 0;
    while(lst)
    {
        count++;
        lst = lst->next;
    }
    return (count);
}

// int main(void)
// {
//     t_list *list;
//     t_list *new_node;

//     list = ft_lstnew("hey");
//     new_node = ft_lstnew("ho");

//     ft_lstadd_front(&list, *new_node);
//     printf("O número de nodes da lista é %d:", ft_lstsize(list));
// }