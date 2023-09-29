/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putbase_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: axlee <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/24 11:50:21 by axlee             #+#    #+#             */
/*   Updated: 2023/09/29 17:37:12 by axlee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Description: Converts an integer 'nbr' to a string in a custom base
** and writes it to a file descriptor 'fd'.
**
** @nbr: The integer to convert and print.
** @base: The custom base as a string (e.g., "0123456789ABCDEF" for
** hexadecimal).
** @fd: The file descriptor to write the converted string to.
** 
** This function takes an integer 'nbr' and converts it into a
** string representation using the provided custom base. It handles negative
** numbers and writes the resulting string to the specified file descriptor
** 'fd'. If 'fd' is 1, it prints to the standard output.
*/

#include "libft.h"

void	ft_putbase_fd(int nbr, const char *base, int fd)
{
	int		base_len;
	long	nb;
	char	c;

	base_len = ft_strlen(base);
	if (nbr < 0)
	{
		write(fd, "-", 1);
		nb = -((long)nbr);
	}
	else
		nb = (long)nbr;
	if (nb > (base_len - 1))
		ft_putbase_fd(nb / base_len, base, fd);
	c = *(base + (nb % base_len));
	write(fd, &c, 1);
}

int	main(void)
{
	printf("Test Case 1: ");
	ft_putbase_fd(42, "0123456789", 1);
	printf("\n");
	printf("Test Case 2: ");
	ft_putbase_fd(-123, "0123456789", 1);
	printf("\n");
	printf("Test Case 3: ");
	ft_putbase_fd(255, "0123456789ABCDEF", 1);
	printf("\n");
	return (0);
}

/* Code Purpose:
 *
 * This code converts an integer to a string in a custom base and writes it
 * to a specified file descriptior
 *
 * Code Breakdown:
 *
 * 'base_len' -> Stores the length of the custom base stirng
 * 'nb' -> A long integer used to handle negative numbers
 * 'c' -> A character used to store the digits of the converted number
 *
 * Checks the length of the custom base using the 'ft_strlen'
 *
 * Check if the input number 'nbr' is negative. If it is, write a '-'
 * character to the file descriptor and make 'nb' positive
 *
 * If the absolute value of 'nb' is geater than or equal to the base length
 * minus one, recursively call 'ft_putbase_fd' to convert and write the 
 * remaining digits
 *
 * Calculate the next characters 'c' in the converted string by taking the
 * modulus of 'nb' with the base length and using it as na index in the 
 * 'base' string
 *
 * Write the character 'c' to the file descriptor 
 *
 * Repeat steps 3-5 until the entire number is converted and written
 *
 * Main Function:
 *
 * Converts the code in either base 10 ('0123456789') or 
 * base 16 ("0123456789ABCDEF")
 *
 * Base 10 -> Digits from 0 to 9
 *
 * Base 16 -> Digits from 0 to 9 and letters A to F to represent values
 * 10 to 15
 */
