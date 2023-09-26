/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: axlee <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/16 19:02:09 by axlee             #+#    #+#             */
/*   Updated: 2023/09/17 15:07:31 by axlee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Outputs the string s to the standard output.
** Param. #1 The string to output.
** Return value None.
** Libc functions write(2).
*/

#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	write(fd, s, ft_strlen(s));
}

/*int	main(void)
{
	char	str[50];

	strcpy(str, "Hello World");
	ft_putstr_fd(str, 1);
	return (0);
}*/

/* Code Purpose:
 *
 * This code calculates the length of a string, and prints it using the
 * 'ft_putstr_fd' function, which writes to a specified file descriptor.
 *
 * Code Breakdown:
 *
 * 'ft_strlen' -> Calculates the length of a given str 'str'
 *
 * It uses a 'while' loop to count the characters in the string, until
 * it reaches the null terminator '\0', which marks the end of the string
 *
 * Returns the length of the string as an integer
 *
 * 'ft_putstr_fd' -> Takes two arguements 's' (a string to be printed) and
 * 'fd' (the file descriptor where the string will be written)
 *
 * It uses the 'write; function to write the string 's' to the specified
 * file descriptor 'fd', and it determines the length of the string using
 * 'ft_strlen'
 *
 * Main Function:
 *
 * Declares a character array 'str' with a size of 50 and initializes it 
 * with string "Hello World" using 'strcpy'
 *
 * Call the 'ft_putstr_fd' function to print the string to file descriptor
 * '1' which corresponds to the standard output.
 */
