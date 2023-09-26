/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: axlee <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 17:59:17 by axlee             #+#    #+#             */
/*   Updated: 2023/09/19 16:59:06 by axlee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Description: Checks if the given integer 'i' represents an
** alphanumeric character (a letter or a digit).
** @i: The integer to check (ASCII value or character code).
** Return value: Returns 1 if 'i' represents an alphanumeric character
** (a letter or a digit), otherwise returns 0.
*/

#include "libft.h"

int	ft_isalnum(int i)
{
	if ((i >= 'a' && i <= 'z') || (i >= 'A' && i <= 'Z')
		|| (i >= '0' && i <= '9'))
		return (1);
	return (0);
}

/*int	main(void)
{
	char	test_cases[11];
	int		result;
	int		i;

	test_cases[0] = '0';
	test_cases[1] = '4';
	test_cases[2] = '7';
	test_cases[3] = '3';
	test_cases[4] = 'A';
	test_cases[5] = 'f';
	test_cases[6] = 'Q';
	test_cases[7] = 'P';
	test_cases[8] = 'H';
	test_cases[9] = 'n';
	test_cases[10] = '\0';
	i = 0;
	while (test_cases[i] != '\0')
	{
		result = ft_isalnum(test_cases[i]) + '0';
		write(1, &result, 1);
		i++;
	}
	write(1, "\n", 1);
	return (0);
}*/

/* Code Purpose:
 *
 * This function checks whether a given integer represents an alphanumeric
 * character (a letter or a digit)
 *
 * Code Breakdown:
 *
 * The integer 'i' is used to check (ASCII value or character code)
 *
 * The function will return 1 if 'i' represents an alphanumeric character,
 * else it returns 0
 *
 * Main Function:
 *
 * The main function initialize an array 'test_cases' with a sequence of 
 * characters, including digits, uppercase letters, and lowercase letters
 *
 * It then iterates through the 'test_cases' array, calling the 'ft_isalnum' 
 * function on each character
 *
 * The result of the check is converted to '0' or '1' and written to the 
 * standard output (stdout) using the 'write' function
 *
 * After processing all characters, a newline character '\n' is written to
 * seperate the output
 */
