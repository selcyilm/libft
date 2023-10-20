/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_lstlast_bonus.c                                 :+:    :+:            */
/*                                                     +:+                    */
/*   By: selcyilm <selcyilm@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/10/20 15:31:44 by selcyilm      #+#    #+#                 */
/*   Updated: 2023/10/20 15:31:52 by selcyilm      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*Returns the last node of the list.
RETURN VALUE
Last node of the list*/
t_list	*ft_lstlast(t_list *lst)
{
	if (!lst)
		return (NULL);
	while (lst->next != NULL)
		lst = lst->next;
	return (lst);
}
