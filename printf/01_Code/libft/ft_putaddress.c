/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putaddress.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: axlee <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/24 11:43:53 by axlee             #+#    #+#             */
/*   Updated: 2023/09/29 16:25:35 by axlee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Description: Converts a memory address to a hexadecimal string
** and calculates its length, then prints both.
** @format: The memory address to convert (void pointer).
** Return value: Returns the length of the hexadecimal string.
*/

#include "libft.h"

static	int	rec_print(unsigned long n, const char *base)
{
	int	len;

	len = 0;
	if (n > (ft_strlen(base) - 1))
		len += rec_print(n / ft_strlen(base), base);
	len += ft_putchar(*(base + (n % ft_strlen(base))));
	return (len);
}

int	ft_putaddress(void *format)
{
	unsigned long	n;
	const char		*base;
	int				len;

	n = (unsigned long)format;
	base = "0123456789abcdef";
	len = ft_putstr("0x");
	len += rec_print(n, base);
	return (len);
}

/*int	main(void)
{
	void	*memory_address;
	int		length;

	memory_address = (void *)0x12345678;
	length = ft_putaddress(memory_address);
	printf("The length of the hexadecimal address string:%d \n", length);
	return (0);
}*/

/* Code Purpose:
 *
 * This code takes a memory address, converts it to hexadecimal string with a
 * "0x" prefix, and calculates its length. It then prints both the hexadecimal
 * sring and its length
 *
 * Code Breakdown:
 *
 * 'rec_print' -> Recurvsively converts an unsigned long integer to a
 * hexadecimal stirng using a given character set and calculates the length of
 * a string 
 *
 * It initializes a variable 'len' to 0
 *
 * If 'n' is greater than the highest index in the 'base' string, it recursively
 * calls itself with 'n / ft_strlen(base)' to process the next digit and 
 * accumulates the result in 'len'
 *
 * It then adds the hexadecimal character corresponding to 'n % ft_strlen(base)'
 * to the result and increments 'len'
 *
 * Finally it returns 'len', which is the length of the hexadecimal string
 *
 * 'ft_putaddress' -> It takes a memory address 'void *format' and converts it
 * to a hexadecimal string using the charaters in the 'base' string, and prints
 * it with a "0x" prefix. It also calculates and returns the length of the string
 *
 * It casts the memory address to an unsigned long integer n.
 *
 * Initializes a constant character array base containing the characters for
 * the hexadecimal representation.
 *
 * Initializes a variable len with the length of the string "0x" using the
 * ft_putstr function (not shown in the provided code).
 *
 * Calls the rec_print function with n and base, accumulating the length of the
 * resulting string in len.
 *
 * Returns len, which is the length of the hexadecimal string.
 *
 * Main Function:
 *
 * It initializes a void pointer memory_address with a sample
 * memory address (0x12345678 in this case).
 *
 * Calls the ft_putaddress function to convert and print the memory address.
 *
 * Prints the length of the resulting hexadecimal string.
 */
