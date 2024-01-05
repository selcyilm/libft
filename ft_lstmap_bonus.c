/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_lstmap_bonus.c                                  :+:    :+:            */
/*                                                     +:+                    */
/*   By: selcyilm <selcyilm@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/01/05 10:07:22 by selcyilm      #+#    #+#                 */
/*   Updated: 2024/01/05 10:15:59 by selcyilm      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* PARAMS:
lst: The address of a pointer to a node.
f: The address of the function used to iterate on
the list.
del: The address of the function used to delete
the content of a node if needed.
RETURN VALUE:
The new list.
NULL if the allocation fails.
DESCRIPTION:
Iterates the list ’lst’ and applies the function
’f’ on the content of each node. Creates a new
list resulting of the successive applications of
the function ’f’. The ’del’ function is used to
delete the content of a node if needed.
*/
t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_lst;
	t_list	*new_obj;
	void	*data;

	if (!lst || !f || !del)
		return (NULL);
	new_lst = NULL;
	new_obj = NULL;
	while (lst)
	{
		data = f(lst->content);
		new_obj = ft_lstnew(data);
		if (!new_obj)
		{
			del(data);
			ft_lstclear(&new_obj, del);
			return (NULL);
		}
		ft_lstadd_back(&new_lst, new_obj);
		lst = lst->next;
	}
	return (new_lst);
}
