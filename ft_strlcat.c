/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strlcat.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: selcyilm <selcyilm@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/10/08 14:04:17 by selcyilm      #+#    #+#                 */
/*   Updated: 2023/10/08 14:04:31 by selcyilm      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*  The strlcat() function appends the NUL-terminated string src to 
	the end of dst.  It will append at most size - strlen(dst) -
	1 bytes, NUL-terminating the result.*/
size_t	strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	while (dst[i] && i < size)
		i++;
	while (src[j] && (i + j + 1) < size)
	{
		dst[i + j] = src[j];
		j++;
	}
	if (i < size)
	{
		dst[i + j] = 0;
	}
	return (i + ft_strlen(src));
}
