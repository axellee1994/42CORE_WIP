/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: axlee <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/15 16:33:15 by axlee             #+#    #+#             */
/*   Updated: 2023/09/19 20:56:41 by axlee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Description: Converts an integer to a string.
** @n: The integer to convert.
** Return value: Returns a dynamically allocated string representation
** of the integer.
** The caller is responsible for freeing the allocated memory.
*/

#include "libft.h"

static unsigned int	ft_number_size(int number)
{
	unsigned int	length;

	length = 0;
	if (number == 0)
		return (1);
	if (number < 0)
		length += 1;
	while (number != 0)
	{
		number /= 10;
		length++;
	}
	return (length);
}

char	*ft_itoa(int n)
{
	unsigned int	number;
	unsigned int	length;
	char			*string;

	length = ft_number_size(n);
	string = (char *)malloc(sizeof(char) * (length + 1));
	if (string == NULL)
		return (NULL);
	if (n < 0)
	{
		string[0] = '-';
		number = -n;
	}
	else
		number = n;
	if (number == 0)
		string[0] = '0';
	string[length] = '\0';
	while (number != 0)
	{
		string[length - 1] = (number % 10) + '0';
		number = number / 10;
		length--;
	}
	return (string);
}

/*int	main(void)
{
	char	*val;
	int		nmb;

	nmb = 89;
	val = ft_itoa(nmb);
	printf("This is number %d\n", nmb);
	printf("This is string %s\n", val);
	free(val);
	return (0);
}*/

/* Code Purpose:
 *
 * 'ft_number_size' -> Counts the number of digits in an integer
 *
 * 'ft_itoa' -> Converts an integer to a dynamically allocated string
 *
 * Code Breakdown:
 *
 * 'ft_number_size' -> The function takes an integer called 'number' as
 * an input and calculates how many digits are in that number
 *
 * It starts by assuming there are zero digits ('length' is set to 0)
 *
 * If the input number is exactly 0, it's treated as having one digit, and
 * the function immediately returns 1
 *
 * If the input number is negative, the function counts thenegative sign
 * as an extra digit, so it increments 'length' by 1
 *
 * Then it enters a loop that keeps running as long as the number is not
 * zero
 *
 * In each loop iteration, the number is divided by 10, effectively removing the
 * last digit
 *
 * The 'length' variable is incremented in each iteration to keep track of how
 * many digits have been counter
 *
 * Finally, the function return the 'length' value, which represents the number
 * of * digits in the input number
 *
 * 'ft_itoa' -> The function calculates the number of digits in the integer 'n' 
 * and store it in the variable 'length'
 *
 * It then allocate memory for a string that will store the converted integer. 
 * The size of the memory block is determined by 'length + 1' to account for the
 * digits and a null terminator
 *
 * If 'n' is negative, set the first character of the string to '-' to indicate
 * a negative number and make 'n' positive
 *
 * If 'n' is zero, set the first character of the string to '0'
 *
 * Null-terminate the string to mark its end
 *
 * Using a loop, convert each digit of 'n' into a chracter and store it in the 
 * string from right to left
 *
 * Return the string as athe result of the conversion
 *
 * Main Function:
 *
 * 'char *val' -> Declares a character pointer to store the converted string
 *
 * 'int nmb' initializes an integer 'nmb' with the value 89
 *
 * 'val = ft_itoa(nbm) -> Calls 'ft_itoa' to convert the integer to a string
 * and assigns it to 'val'
 *
 * 'print f' statements prin the original integer and the converted string
 *
 * 'free(val) -> Frees the dynamically allocated memory for the string
 */
