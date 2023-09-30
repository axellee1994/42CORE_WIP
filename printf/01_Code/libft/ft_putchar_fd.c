/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: axlee <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/16 18:53:26 by axlee             #+#    #+#             */
/*   Updated: 2023/09/16 19:21:02 by axlee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Outputs the char c to the file descriptor fd.
** @c = The character to output.
** @fd =  The file descriptor.
** Return value None.
** Libc functions write(2).
*/

#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}

/*int	main(void)
{
	char	letter;

	letter = 'A';
	ft_putchar_fd(letter, 2);
	return (0);
}*/

/* Code Purpose:
 *
 * The code writes a single character to a specified file descriptor.
 *
 * Code Breakdown:
 *
 * 'ft_putchar' -> Takes two arguments 'c' (a character to print) and 'fd' 
 * (file descriptor where the character will be printed)
 *
 * Uses the 'write' function to write the character 'c' to the specified file
 * descriptor 'fd'
 *
 * Main Function:
 *
 * Declars a character variable 'letter' and assigns it the value 'A'
 *
 * Calls the 'ft_putchar_fd' function to print the character 'A' to file
 * descriptor '2'.
 *
 * '2' -> Associated with the standard error (stderr) stream.
 */
