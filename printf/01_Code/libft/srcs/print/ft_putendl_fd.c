/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: axlee <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/16 19:23:31 by axlee             #+#    #+#             */
/*   Updated: 2023/09/17 13:44:05 by axlee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Outputs the string s to the standard output followed by a ’\n’.
** Param. #1 The string to output.
** Return value None.
** Libc functions write(2).
*/

#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	ft_putstr_fd(s, fd);
	ft_putchar_fd('\n', fd);
}

/*int	main(void)
{
	char	str[50];

	strcpy(str, "Hello World");
	ft_putendl_fd(str, 1);
	return (0);
}*/

/* Code Purpose:
 *
 * This code defines functions for printing characters and strings to the
 * standard output(stdout) and demonstrates their usage in the main function
 *
 * Code Breakdown:
 *
 * 'ft_putchar' -> Prints a single character to the standard output
 *
 * 'ft_putstr' -> Prints a null terminator string character by character
 * to stdout using 'ft_putchar' after printing 
 *
 * 'ft_putendl_fd' -> Combines 'ft_putstr' and 'ft_putchar' to print a string
 * followed by a newline characyer
 *
 * Main Function:
 *
 * Initialize a character array 'str' with the value "Hello World" using
 * 'strcpy'
 *
 * Calls 'ft_putendl_fd' to print the string 'str' followed by a newline 
 * character to stdout (file descriptor 1);
 */
