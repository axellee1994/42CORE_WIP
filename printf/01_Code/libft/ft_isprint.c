/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: axlee <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 18:31:09 by axlee             #+#    #+#             */
/*   Updated: 2023/09/19 19:36:10 by axlee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Description: Checks if the given integer 'i' represents a
** printable ASCII character.
** @i: The integer to check (ASCII value or character code).
** Return value: Returns 1 if 'i' represents a printable ASCII character
** (32 to 126), otherwise returns 0.
*/

#include "libft.h"

int	ft_isprint(int i)
{
	if (i >= 32 && i <= 126)
		return (1);
	return (0);
}

/*int	main(void)
{
	char	test_cases[6];
	int		result;
	int		i;

	test_cases[0] = ' ';
	test_cases[1] = 'A';
	test_cases[2] = '7';
	test_cases[3] = '~';
	test_cases[4] = 'b';
	test_cases[5] = '\0';
	i = 0;
	while (test_cases[i] != '\0')
	{
		result = ft_isprint(test_cases[i]) + '0';
		write(1, &result, 1);
		i++;
	}
	write(1, "\n", 1);
	return (0);
}*/

/* Code Purpose:
 *
 * The code checks if a given integer represents a printable ASCII character
 * (32 to 126)
 *
 * Code Breakdown:
 *
 * If 'i' is in the range of 32 to 126, it returns the value of 1, else the 
 * value of 0
 *
 * Main Function:
 *
 * Initialize an array of characters 'test_cases'
 *
 * Iterates through 'test_cases', calling it 'ft_isprint' for each character
 *
 * Converts the result to a character ('1' or '0') and writes it to the
 * standard output
 * 
 * Writes a newline character '\n' to the standard output after processing all
 * characters
 */
