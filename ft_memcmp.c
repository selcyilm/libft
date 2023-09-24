/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memcmp.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: selcyilm <selcyilm@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/09/24 17:43:21 by selcyilm      #+#    #+#                 */
/*   Updated: 2023/09/24 20:50:58 by selcyilm      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t	i;
	char	*new_s1;
	char	*new_s2;

	new_s2 = (char *)s2;
	new_s1 = (char *)s1;
	if (n == 0)
		return (0);
	while (new_s1[i] == new_s2[i])
	{
		i++;
		if (i == n)
			return (0);
	}
	return (new_s1[i] - new_s2[i]);
}
