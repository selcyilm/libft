#include "libft.h"

/*The  memset() function fills the first n bytes of the memory area 
pointed to by s with the con‐stant byte c.*/

void	*ft_memset(void *s, int c, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		((char *)s)[i] = (char)c;
		i++;
	}
	return (s);
}
