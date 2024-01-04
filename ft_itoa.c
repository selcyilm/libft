/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_itoa.c                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: selcyilm <selcyilm@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/10/20 11:07:08 by selcyilm      #+#    #+#                 */
/*   Updated: 2024/01/04 14:12:41 by selcyilm      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*Allocates (with malloc(3)) and returns a string
representing the integer received as an argument.
Negative numbers must be handled
RETURN VALUE
The string representing the integer.
NULL if the allocation fails.*/
static int	ft_count(int n)
{
	int	i;

	i = 0;
	while (n != 0)
	{
		n = n / 10;
		i++;
	}
	if (i == 0)
		i++;
	return (i);
}

char	*ft_itoa(int n)
{
	char		*p;
	int			size;
	long long	a;

	a = (long long)n;
	size = ft_count(n);
	if (n < 0)
	{
		a = -a;
		size += 1;
	}
	p = malloc(sizeof(char) * (size + 1));
	if (!p)
		return (NULL);
	p[size] = 0;
	while (size-- > 0)
	{
		p[size] = a % 10 + '0';
		a /= 10;
	}
	if (n < 0)
		p[0] = '-';
	return (p);
}
