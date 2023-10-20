/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_lstnew.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: selcyilm <selcyilm@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/10/20 14:45:41 by selcyilm      #+#    #+#                 */
/*   Updated: 2023/10/20 14:46:16 by selcyilm      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*Allocates (with malloc(3)) and returns a new node.
The member variable ’content’ is initialized with
the value of the parameter ’content’. The variable
’next’ is initialized to NULL.
RETURN VALUE
The new node
*/
t_list	*ft_lstnew(void *content)
{
	t_list	*new_list;

	new_list = ft_calloc(1, sizeof(t_list));
	if (!new_list)
		return (NULL);
	new_list->content = content;
	return (new_list);
}

/*int main()
{
	t_list *list1;
	list1 = NULL;

	list1 = ft_lstnew("hello");
	printf("%s\n", (char *)list1->content);
	printf("%p", list1->next);
}*/