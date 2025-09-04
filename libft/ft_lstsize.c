#include "libft.h"

int     ft_lstsize(t_list *lst)
{
    int     count;
    t_list  *n;

    count = 0;
    n = lst;
    while (n != NULL)
    {
        count++;
        n = n->next;
    }
    return (count);
}
