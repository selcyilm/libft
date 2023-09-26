/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memcpy.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: selcyilm <selcyilm@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/09/24 17:43:26 by selcyilm      #+#    #+#                 */
/*   Updated: 2023/09/26 20:24:57 by selcyilm      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	char	*new_dest;
	char	*new_src;
	size_t	i;

	new_dest = (char *)dest;
	new_src = (char *)src;
	i = 0;
	while (i < n)
	{
		new_dest[i] = new_src[i];
		i++;
	}
	return (new_dest);
}
