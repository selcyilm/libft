/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_puchar_fd.c                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: selcyilm <selcyilm@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/10/08 15:51:08 by selcyilm      #+#    #+#                 */
/*   Updated: 2023/10/08 15:51:10 by selcyilm      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*Outputs the character ’c’ to the given file
descriptor.*/
void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}
