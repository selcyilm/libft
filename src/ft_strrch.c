#include "libft.h"

/*The strrchr() function shall locate the last occurrence of c
(converted to a char) in the string pointed to by s.  The
terminating NUL character is considered to be part of the string.*/

char	*ft_strrchr(const char *s, int c)
{
	int	i;

	char *str = (char *)s;
	i = ft_strlen(str);
	while (i >= 0)
	{
		if (str[i] == c)
			return (&str[i]);
		i--;
	}
	return (NULL);
}
