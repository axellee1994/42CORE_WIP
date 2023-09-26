/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isspace.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: axlee <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/24 11:42:05 by axlee             #+#    #+#             */
/*   Updated: 2023/09/26 16:54:45 by axlee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** The ft_isspace function checks if a given character is a whitespace
** character.
**
** Parameters:
** c - The character to be checked.
**
** Return:
** If the character is a whitespace character, the function returns 8192,
** otherwise it returns 0.
**
** Description:
** The ft_isspace function takes an integer 'c' representing a character's
** ASCII value. It checks if the character falls within the range of
** whitespace characters (ASCII values 9 to 13) or if it is the space
** character (ASCII value 32). If the condition is met, indicating that
** the character is a whitespace character, the function returns 8192.
** Otherwise, it returns 0.
**
** Example:
** int result = ft_isspace(' '); // Returns 8192
** int result2 = ft_isspace('A'); // Returns 0
*/

#include "libft.h"

int	ft_isspace(int c)
{
	if ((c > 8 && c < 14) || (c == 32))
		return (8192);
	return (0);
}

int	main(void)
{
	char	input_char;
	int		result;

	printf("Enter a character: ");
	scanf("%c", &input_char);
	result = ft_isspace(input_char);
	if (result == 8192)
		printf("The character is a space or a tab. \n");
	else
		printf("The character is not a space or a tab, \n");
	return (0);
}

/* Code Purpose:
 *
 * The code is designed to determine whether a given character is a
 * space or a tab and then provides feedback to the user based
 * on the result.
 *
 * Code Breakdown:
 *
 * The code takes an integer 'c' as input and returns '8192' if the 
 * input is a space or tab(' ' or ASCII value '32')
 *
 * Otherwise it returns '0'
 *
 * Main Function:
 *
 * It declares a variable 'input_char' to store the user's input
 * charatcer and an 'int' variable 'result'
 *
 * It prompts the user to enter a character using 'printf'
 *
 * It reads the character from the user using 'scanf' and stores it
 * in the 'input_char'
 *
 * It calls the 'ft_isspace' function with 'input_char' as the
 * argument and stores the result in the 'result' variable
 *
 * It the checks the value of 'result'
 *
 * If 'result' is equal to '8192', it prints:
 * "The character is a space or a tab"
 *
 * else
 *
 * "The character is not a space or a tab"
 */
