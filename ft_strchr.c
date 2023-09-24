/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strchr.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: selcyilm <selcyilm@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/09/24 17:43:32 by selcyilm      #+#    #+#                 */
/*   Updated: 2023/09/24 17:43:33 by selcyilm      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*The strchr() function returns a pointer to the first occurrence
of the character c in the string s.*/

char	*ft_strchr(const char *s, int c)
{
	while (*s)
	{
		if (*s == c)
			return ((char *)s);
		s++;
	}
	if (*s == 0)
		return ((char *)str);
	return (NULL);
}
