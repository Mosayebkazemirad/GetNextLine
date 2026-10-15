<<<<<<< HEAD
#include "libft.h"

t_list *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
    t_list *new;
    t_list *elem;
    void *content;

    if (!f || !del)
        return (NULL);
    new = NULL;
    while (lst)
    {
        content = f(lst->content);
        elem = ft_lstnew(content);
        if (!elem)
        {
            del(content);
            ft_lstclear(&new, del);
            return (NULL);
        }
        ft_lstadd_back(&new, elem);
        lst = lst->next;
    }
    return (new);
}
=======
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkazemir <mkazemir@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/12 09:14:50 by mkazemir          #+#    #+#             */
/*   Updated: 2026/10/12 09:16:14 by mkazemir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new;
	t_list	*elem;
	void	*content;

	if (!f || !del)
		return (NULL);
	new = NULL;
	while (lst)
	{
		content = f(lst->content);
		elem = ft_lstnew(content);
		if (!elem)
		{
			del(content);
			ft_lstclear(&new, del);
			return (NULL);
		}
		ft_lstadd_back(&new, elem);
		lst = lst->next;
	}
	return (new);
}
>>>>>>> a69c5e1 (new)
