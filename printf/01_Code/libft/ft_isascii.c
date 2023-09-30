/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: axlee <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 10:45:00 by axlee             #+#    #+#             */
/*   Updated: 2023/09/19 19:31:09 by axlee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Description: Checks if the given integer 'i' is an ASCII character.
** @i: The integer to check (ASCII value or character code).
** Return value: Returns 1 if 'i' is an ASCII character (0 to 127),
** otherwise returns 0.
*/

#include "libft.h"

int	ft_isascii(int i)
{
	if (i >= 0 && i <= 127)
		return (1);
	else
		return (0);
}

/*int	main(void)
{
	char	test_cases[7];
	char	character;
	int		i;
	int		result;

	test_cases[0] = 'A';
	test_cases[1] = 'b';
	test_cases[2] = 'C';
	test_cases[3] = 'd';
	test_cases[4] = 'E';
	test_cases[5] = 'f';
	test_cases[6] = '\0';
	i = 0;
	while (test_cases[i] != '\0')
	{
		result = ft_isascii(test_cases[i]);
		character = result + '0';
		write(1, &character, 1);
		i++;
	}
	write (1, "\n", 1);
	return (0);
}*/

/* Code Purpose:
 *
 * This code checks if a given integer represents an ASCII character (0 to 127)
 *
 * Code Breakdown:
 *
 * The functions checks if 'i' is in the range of 0 to 127 and returns 1 if it
 * is, otherwise 0
 *
 * Main Function:
 *
 * It initializes an array of chracters called 'test_cases'
 *
 * The code then iterates through 'test_cases', calling 'ft_isascii' for each
 * character and printing the resylt.
 *
 * The output will be a sequence of '1's and '0's, indicating whether each
 * character in 'test_cases' is an ASCII character
 *
 * The outpout may look like: "100100\n", where '1' means ASCII character and
 * '0' means not ASCII.
 */
