#include "libft.h"

t_list  *ft_lstlast(t_list *lst)
{
    t_list  *n;

    n = lst;
    if (!n)
        return (NULL);
    while (n->next != NULL)
        n = n->next;
    return (n);
}
