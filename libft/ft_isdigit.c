/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: axlee <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 21:28:06 by axlee             #+#    #+#             */
/*   Updated: 2023/09/19 16:46:26 by axlee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Description: Checks if the given integer 'i' represents a digit character.
** @i: The integer to check (ASCII value or character code).
** Return value: Returns 1 if 'i' represents a digit character
** ('0' to '9'), otherwise returns 0.
*/

#include "libft.h"

int	ft_isdigit(int i)
{
	if ('0' <= i && i <= '9')
		return (1);
	return (0);
}

/*int	main(void)
{
	int	test_case;
	int	result;
	char	output;

	test_case = '9';
	result = ft_isdigit(test_case);

	if (result)
	{
		output = '1';
		write(1, &output, 1);
	}
	else
	{
		output = '0';
		write(1, &output, 1);
	}
	write(1, "\n", 1);
	return (0);
}
*/

/* Code Purpose:
 *
 * This code checks whether a given integer represents a digit character
 * ('0' to '9') and prints out the result
 *
 * Code Breakdown:
 *
 * The function checks the given integer 'i' if it represents a digit
 * character '0' to '9'
 *
 * If it is in between '0' to '9', it returns the value of 1, else
 * it returns the value of 0
 *
 * Main Function:
 *
 * The main function initialize an integer 'test_case' with the ASCII
 * value of the character '9' 
 *
 * It calls the 'ft_isdigit' function to check if 'test_case' with 
 * the ASCII valye of the character '9'
 *
 * The function then check if the 'test_case' represents a digit
 * character
 *
 * The result is used to print '1' if it is a digit, else '0' if not
 *
 * A newline character '\n' is printed to separate the output
 */
