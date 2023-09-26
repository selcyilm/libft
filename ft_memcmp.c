/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memcmp.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: selcyilm <selcyilm@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/09/24 17:43:21 by selcyilm      #+#    #+#                 */
/*   Updated: 2023/09/26 20:22:10 by selcyilm      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			i;
	unsigned char	*new_s1;
	unsigned char	*new_s2;

	i = 0;
	new_s2 = (unsigned char *)s2;
	new_s1 = (unsigned char *)s1;
	if (n == 0)
		return (0);
	while (new_s1[i] == new_s2[i] && i < n - 1)
	{
		i++;
		if (i == n)
			return (0);
	}
	return (new_s1[i] - new_s2[i]);
}
