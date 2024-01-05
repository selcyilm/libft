/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_split.c                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: selcyilm <selcyilm@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/10/20 10:19:16 by selcyilm      #+#    #+#                 */
/*   Updated: 2024/01/05 10:17:50 by selcyilm      ########   odam.nl         */
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

/*int	ft_word(char const *str, char c)
{
	int	i;
	int	word;
	int	stat;

	i = 0;
	word = 0;
	stat = 0;
	while (str[i])
	{
		if (str[i] != c && stat == 0)
		{
			word++;
			stat = 1;
		}
		else if (str[i] == c)
			stat = 0;
		i++;
	}
	return (word);
}

int	ft_char(const char *str, char c)
{
	int	i;

	i = 0;
	while (str[i] != c && str[i])
		i++;
	return (i);
}

void	safe_free(char **to_be, int pos)
{
	int	i;

	i = 0;
	while (i < pos)
	{
		free(to_be[i]);
		to_be[i] = NULL;
		i++;
	}
	to_be[i] = 0;
}

char	**ft_split(char const *s, char c)
{
	char	**p;
	int		i;
	int		word;

	p = malloc(sizeof(char *) * (ft_word(s, c) + 1));
	if (!p || !s)
		return (NULL);
	i = 0;
	word = ft_word(s, c);
	while (i < word)
	{
		p[i] = malloc(sizeof(char) * (ft_char(s, c) + 1));
		if (!p)
			return (safe_free(p, i), NULL);
		while (*s == c)
			s++;
		p[i] = ft_substr(s, 0, ft_char(s, c));
		s += ft_char(s, c);
		i++;
	}
	p[i] = 0;
	return (p);
}

int main(int ac, char **av)
{
	if (ac == 3)
	{
		int i = ft_word(av[1], av[2][0]);
		int j = 0;
		char **str = ft_split(av[1], av[2][0]);
		while (j < i)
		{
			printf("str[%d]= %s\n", j, str[j]);
			j++;
		}
	}
}*/