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
