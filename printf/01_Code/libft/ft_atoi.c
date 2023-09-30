/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: axlee <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 14:36:06 by axlee             #+#    #+#             */
/*   Updated: 2023/09/19 20:39:55 by axlee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Description: Converts a string to an integer.
** @str: The input string to convert.
** Return value: Returns the integer representation of the string.
*/

#include "libft.h"

int	ft_atoi(const char *str)
{
	int	result;
	int	i;
	int	sign;

	result = 0;
	i = 0;
	sign = 1;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
		i++;
	if (str[i] == '+')
		i++;
	else if (str[i] == '-')
	{
		sign = -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		result = result * 10 + (str[i] - 48);
		i++;
	}
	return (result * sign);
}

/*int	main(void)
{
	char	str[50];
	int		val;

	strcpy(str, "-1234567");
	val = ft_atoi(str);
	printf("%d\n", val);
	return (0);
}*/

/* Code Purpose:
 *
 * THis code converts a string to an integer
 *
 * Code Breakdown:
 *
 * The ft_atoi function takes a string str as input.
 * 
 * It initializes three variables: result to store the final integer value,
 * i for iterating through the string, and sign to determine the sign of
 * the integer (positive or negative).
 *
 * The function first skips any leading whitespace characters
 * (tab, newline, space, carriage return, and form feed) in the string.
 *
 * It then checks for an optional sign character (+ or -). If a - is found,
 * it sets the sign variable to -1 and increments the index i.
 *
 * The function then iterates through the remaining characters,
 * converting them to integers and building the result.
 *
 * It multiplies the current result by 10 and adds the integer value
 * of the current character (using ASCII conversion).
 *
 * The iteration continues until a non-digit character is encountered.
 *
 * The final result is multiplied by the sign to account for positive
 * or negative numbers.
 *
 * The function returns the calculated integer value.
 *
 * Main Function:
 *
 * The main function tests the ft_atoi function by defining
 * a string str containing "-1234567".
 *
 * It calls ft_atoi with the input string.
 *
 * Finally, it prints the result using printf.
*/
