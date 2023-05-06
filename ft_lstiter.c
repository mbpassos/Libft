// Iterates the list ’lst’ and applies the function
// ’f’ on the content of each node.
// lst: The address of a pointer to a node.
// f: The address of the function used to iterate on
// the list.
#include "libft.h"

void ft_lstiter(t_list *lst, void (*f)(void *))
{
    if(!lst && !f )
        return ;
    while(lst)
    {
        f(lst->content);
        lst = lst->next;
    }
}

// void print_string(void *str)
// {
//     printf("%s ", (char*)str);
// }

// int main()
// {
//     t_list *node1 = ft_lstnew("Hello");
//     t_list *node2 = ft_lstnew("world");
//     t_list *node3 = ft_lstnew("!");

//     node1->next = node2;
//     node2->next = node3;

//     ft_lstiter(node1, print_string);

//     return 0;
// }