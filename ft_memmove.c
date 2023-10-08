/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memmove.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: selcyilm <selcyilm@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/10/08 15:15:14 by selcyilm      #+#    #+#                 */
/*   Updated: 2023/10/08 15:15:16 by selcyilm      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*The  memmove()  function  copies n bytes from memory area src to 
memory area dest. The memory areas may overlap:copying takes place 
as though the bytes in src are first copied into a temporary array 
that does not overlap  src or dest, and the bytes are then copied 
from the temporary array to dest.
RETURN VALUES
The memmove() function returns a pointer to dest. */
void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*d_dest;
	unsigned char	*s_src;

	d_dest = (unsigned char *)dest;
	s_src = (unsigned char *)src;
	if (d_dest == 0 && s_src == 0)
		return (0);
	if (d_dest > s_src)
	{
		while (n > 0)
		{
			n--;
			d_dest[n] = s_src[n];
		}
	}
	else
		ft_memcpy(dest, src, n);
	return (dest);
}
