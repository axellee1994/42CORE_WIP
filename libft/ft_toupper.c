/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: axlee <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 11:44:05 by axlee             #+#    #+#             */
/*   Updated: 2023/09/19 16:36:30 by axlee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Description: Converts a lowercase character to its corresponding uppercase
** character if it's a lowercase letter.
**
** @i = The integer 'i' representing a character
** (ASCII value or character code).
**
** Return value: Returns the uppercase character if 'i' is a lowercase letter
** ('a' to 'z'), otherwise returns 'i' unchanged.
*/

#include "libft.h"

int	ft_toupper(int i)
{
	if (i >= 'a' && i <= 'z')
		return (i - 32);
	return (i);
}

/*int	main(void)
{
	char	test_cases[7];
	int		result;
	int		i;

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
		result = ft_toupper(test_cases[i]);
		write(1, &result, 1);
		i++;
	}
	write(1, "\n", 1);
	return (0);
}*/

/* Code Purpose:
 *
 * This code converts a lowercase character to its corresponding upper
 * case characters if it's a lowecrcase letter
 *
 * Code Breakdown:
 *
 * The code takes in a variable -> i, which represents a character
 * (ASCII value or character code)
 *
 * If 'i' is a lowercase letter ('a' to 'z'),th code will check and
 * returns the uppercase character of 'i', else 'i' remains unchanged
 *
 * It does so by subtracting 32 from 'i' to convert it to uppercase
 * (ASCII values difference between lowercase and uppercase
 * characters.)
 *
 * Main Function:
 *
 * The main function initialize an array 'test_cases' with a sequence
 * of characters, including lowercase and uppercase letters
 *
 * It then iterates through the 'test_cases' array, calling
 * 'ft_toupper' function on each character
 *
 * The result of the conversion is then written to the standard
 * output (stdout) using the 'write' function
 *
 * After processing all characters, a newline character '\n' is
 * written to separate the output 
 *
 * The program then returns 0 to indicate a successful execution
 */
