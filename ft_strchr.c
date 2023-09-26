/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strchr.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: selcyilm <selcyilm@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/09/24 17:43:32 by selcyilm      #+#    #+#                 */
/*   Updated: 2023/09/26 20:13:48 by selcyilm      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*The strchr() function returns a pointer to the first occurrence
of the character c in the string s.*/

char	*ft_strchr(const char *s, int c)
{
	int		i;
	char	*str;

	i = 0;
	str = (char *)s;
	while (str[i])
	{
		if (str[i] == (char)c)
			return (&str[i]);
		i++;
	}
	if (str[i] == (char)c)
		return (&str[i]);
	return (NULL);
}
