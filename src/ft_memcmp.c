#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t	i;

	char *new_s1 = (char *)s1;
	char *new_s2 = (char *)s2;
	if (n == 0)
		return (0);
	while (new_s1[i] == new_s2[i])
	{
		i++;
		if (i == n)
			return (0);
	}
	return (new_s1[i] - new_s2[i]);
}
