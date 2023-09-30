/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: axlee <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 12:38:02 by axlee             #+#    #+#             */
/*   Updated: 2023/09/19 16:53:25 by axlee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Description: Converts the given integer 'i' to its corresponding
** lowercase character if it's an uppercase letter.
** @i: The integer to convert (ASCII value or character code).
** Return value: Returns the lowercase character if 'i' is an uppercase letter
** ('A' to 'Z'), otherwise returns 'i' unchanged.
*/

#include "libft.h"

int	ft_tolower(int i)
{
	if (i >= 65 && i <= 90)
		return (i + 32);
	return (i);
}

/*int	main(void)
{
	char	test_case[7];
	int		result;
	int		i;

	test_case[0] = 'a';
	test_case[1] = 'B';
	test_case[2] = 'c';
	test_case[3] = 'D';
	test_case[4] = 'e';
	test_case[5] = 'F';
	test_case[6] = 'g';
	test_case[7] = '\0';
	i = 0;
	while (test_case[i] != '\0')
	{
		result = ft_tolower(test_case[i]);
		write(1, &result, 1);
		i++;
	}
	write(1, "\n", 1);
	return (0);
}*/

/* Code Purpose:
 *
 * This function converts an uppercase character to its corresponding
 * characters to its corresponding lowercase characters if it's
 * an uppercase letter
 *
 * Code Breakdown:
 *
 * The integer 'i' is the parameter which is used to conver (ASCII or
 * character code)
 *
 * It returns the lowercase character if 'i' is an uppercase letter,
 * otherwise returns 'i' unchanged
 *
 * Main Function:
 *
 * Initializes an array 'test_case' with a sequence of characters, 
 * including uppercase and lowercase letters.
 *
 * It then iterates through the 'test_case' array, calling the 
 * 'ft_tolower' function on each character
 *
 * The result of the conversion is written to the standard output
 * (stdout) using the 'write' function.
 *
 * After processing all characters, a newline character '\n' is
 * written to separate the output
 */
