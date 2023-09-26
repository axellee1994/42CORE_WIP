/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: axlee <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 08:27:03 by axlee             #+#    #+#             */
/*   Updated: 2023/09/19 16:37:14 by axlee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Description: Checks if the given integer 'i' represents
** an alphabetic character.
** @i= The integer to check (ASCII value or character code).
** Return value: Returns 1 if 'i' represents an alphabetic character
** (A-Z or a-z), otherwise returns 0.
*/

#include "libft.h"

int	ft_isalpha(int i)
{
	if (('a' <= i && i <= 'z') || ('A' <= i && i <= 'Z'))
		return (1);
	else
		return (0);
}

/*int	main(void){
	char	test_cases[] = {'A', 'b', 'C', '4', '%', 'Z'};
	int	i;

	i = 0;

	while (test_cases[i] != '\0') {
	if (ft_isalpha(test_cases[i])) {
		write(1, &test_cases[i], 1);
		}
		i++;
	}
	write(1, "\n", 1);
	return (0);
}*/

/* Code Purpose:
 *
 * This function checks whether a given integer corresponds to an alphabetic
 * character (A-Z or a-z)
 *
 * Code Breakdown:
 *
 * 'ft_isalpha' checks if the integer 'i' represents an alphabetic character
 *
 * It returns 1 if 'i' is in the range of lowercase letters ('a' - 'z') or
 * uppercase letters ('A' -'Z')
 *
 * Otherwise it returns 0
 *
 * Main Function:
 *
 * Defines an array 'test_cases' containing various characters, including
 * uppercase letters, lowercase letters, digits and symbols
 *
 * Initializes an integer 'i' to 0 for iterating through the 'test_cases'
 * array
 *
 * Iterates through the test_cases array using a while loop until the end of
 * the string ('\0') is reached.
 *
 * For each character test_cases[i], it calls the ft_isalpha function to
 * check if it's an alphabetic character:
 *
 * If it's alphabetic, it uses the write function to print the character
 * to the standard output (stdout).
 *
 * After processing all characters, it prints a newline character '\n'
 * to separate the output.
 *
 * The program returns 0 to indicate successful execution.
 */
