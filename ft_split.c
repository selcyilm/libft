/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_split.c                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: selcyilm <selcyilm@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/10/20 10:19:16 by selcyilm      #+#    #+#                 */
/*   Updated: 2023/10/20 10:25:45 by selcyilm      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*Allocates (with malloc(3)) and returns an array
of strings obtained by splitting ’s’ using the
character ’c’ as a delimiter. The array must end
with a NULL pointer.
RETURN VALUE
The array of new strings resulting from the split.
NULL if the allocation fails.*/
static int	ft_count(char const *str, char c)
{
	int	count;

	if (!*str)
		return (0);
	count = 0;
	while (*str)
	{
		while (*str == c)
			str++;
		if (*str)
			count++;
		while (*str != c && *str)
			str++;
	}
	return (count);
}

char	**ft_split(char const *s, char c)
{
	char	**list;
	int		word_len;
	int		i;

	list = (char **)malloc((ft_count(s, c) + 1) * sizeof(char *));
	if (!list || !s)
		return (0);
	i = 0;
	while (*s)
	{
		while (*s == c && *s)
			s++;
		if (*s)
		{
			if (!ft_strchr(s, c))
				word_len = ft_strlen(s);
			else
				word_len = ft_strchr(s, c) - s;
			list[i++] = ft_substr(s, 0, word_len);
			s += word_len;
		}
	}
	list[i] = 0;
	return (list);
}
