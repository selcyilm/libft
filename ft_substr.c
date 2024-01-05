/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_substr.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: selcyilm <selcyilm@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/10/08 16:30:18 by selcyilm      #+#    #+#                 */
/*   Updated: 2024/01/05 11:09:43 by selcyilm      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*Allocates (with malloc(3)) and returns a substring
from the string ’s’.
The substring begins at index ’start’ and is of
maximum size ’len’.
RETURN VALUE
The substring.
NULL if the allocation fails.*/
char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*p;

	if (!s)
		return (NULL);
	if (ft_strlen(s) <= start)
		return (ft_strdup(""));
	if (len >= ft_strlen(s) - start)
		len = ft_strlen(s) - start + 1;
	else
		len++;
	p = malloc((len) * sizeof(char));
	if (!p)
		return (NULL);
	ft_strlcpy(p, &s[start], len);
	return (p);
}
