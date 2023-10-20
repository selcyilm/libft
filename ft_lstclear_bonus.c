/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_lstclear_bonus.c                                :+:    :+:            */
/*                                                     +:+                    */
/*   By: selcyilm <selcyilm@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/10/20 15:48:17 by selcyilm      #+#    #+#                 */
/*   Updated: 2023/10/20 15:50:37 by selcyilm      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*current;

	if (!*lst)
		return ;
	while (lst != NULL)
	{
		current = (*lst)->next;
		ft_lstdelone(*lst, del);
		*lst = current;
	}
}
