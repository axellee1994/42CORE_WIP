/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: axlee <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/16 20:32:37 by axlee             #+#    #+#             */
/*   Updated: 2023/09/17 13:44:55 by axlee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Description Outputs the integer n to the file descriptor fd.
** Param. #1 The integer to print.
** Param. #2 The file descriptor.
** Return value None.
** Libc functions write(2).
*/

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	if (n == -2147483648)
		ft_putstr_fd("-2147483648", fd);
	else if (n < 0)
	{
		ft_putchar_fd('-', fd);
		ft_putnbr_fd(-n, fd);
	}
	else if (n >= 10)
	{
		ft_putnbr_fd(n / 10, fd);
		ft_putchar_fd(n % 10 + '0', fd);
	}
	else
		ft_putchar_fd(n + '0', fd);
}

/*int	main(void)
{
	int	nb;
	
	nb = 9582;
	ft_putnbr_fd(nb, 1);
	write(1, "\n", 1);
	return (0);
}*/

/* Code Purpose:
 *
 * This code provides functions for printing integers, characters, and 
 * strings to a specified file descriptor (stdout) and demonstrate
 * their usage
 *
 * Code Breakdown:
 *
 * 'ft_strlen' -> Calculayes the length of a null-terminated string 'str'
 * by iterating through its characters
 *
 * Returns the length as an integer
 *
 * 'ft_putstr_fd' -> Writes a null-terminated string 's' to the specified
 * file descriptor 'fd'
 *
 * Uses 'ft_strlen' to determine the length of the string for writing
 *
 * 'ft_putchar_fd' -> Writes a single character 'c' to the spcified file
 * descriptor 'fd'
 *
 * 'ft_putnbr_fd' -> Prints an integer 'n' to the specified file
 * descriptor 'fd'
 *
 * Handles special cases like the minimum integer value (-214783648) and
 * negative numbers using recursion
 *
 * Converts integers to strings and uses 'ft_putstr_fd' to write them
 *
 * Main Function:
 *
 * Initializes an integer variable 'nb' with the value 9852
 *
 * Calls 'ft_putnbr_fd' to print the integer nb' to stdout
 *
 * Write a newline character '\n' to stdout using the write function
 */
