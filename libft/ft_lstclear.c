#include "libft.h"

void    ft_lstclear(t_list **lst, void (*del)(void*))
{
    t_list  *current;
    t_list  *next;

    if(lst && del)
    {
        current = *lst;
        while (current)
        {
            next = current;
            del(current->content);
            free(current);
            current = next;
        }
        *lst = NULL;
    }
}
