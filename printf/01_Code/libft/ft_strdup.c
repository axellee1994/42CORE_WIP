/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: axlee <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 15:35:45 by axlee             #+#    #+#             */
/*   Updated: 2023/09/15 16:34:48 by axlee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** strdup, strndup -- save a copy of a string
*/

#include "libft.h"

char	*ft_strdup(const char *src)
{
	char	*dup;
	int		i;

	i = 0;
	while (src[i] != '\0')
		i++;
	dup = (char *)malloc(i + 1);
	if (dup == NULL)
		return (0);
	else
	{
		i = 0;
		while (src[i] != '\0')
		{
			dup[i] = src[i];
			i++;
		}
	}
	dup[i] = '\0';
	return (dup);
}

/*int	main(void)
{
	char	str[50];
	char	*result;

	strcpy(str, "Hello World");
	result = ft_strdup(str);
	printf("%s", result);
	return (0);
}*/

/* Code Purpose:
 *
 * The function duplicates a given string 'src' and returns a pointer 
 * to the duplictaed string.
 *
 * Code Breakdown:
 *
 * 'ft_strdup' takes a single parameter, 'src', which is a pointer to a
 * constant character array(string) that I wish to duplicate
 *
 * 'dup' is a pointer to a character, which will eventually point to the
 * duplicated string.
 *
 * 'i' is an integer used as a loop counter.
 *
 * The first 'while' loop calculates the length of the source string by
 * counting characters until it encounters the null-terminator
 *
 * Then it uses 'malloc' to allocate memory for the duplicated string
 *
 * The size of the memory block is allocated is '(i + 1)' represent the 
 * length of the source string, and '+1' accounts for the null-terminator
 *
 * The cast '(char *) is used to convert the generic pointer returned by
 * 'malloc' to a 'char' pointer
 *
 * If 'malloc' returns NULL, it means there is not enough memory available
 * and will return an error.
 *
 * The second 'while' loop copies each character from the source string
 * 'src' to the duplicated string 'dup'
 *
 * It then iterates through the characters of 'src' and copies them one 
 * by one.
 *
 * After copying all the characters from 'src' to 'dup', a null terminator
 * is added to ensure that it is a valid C-Style String
 *
 * The function then returns a pointer to the duplicaed string 'dup'
 *
 * Main Function:
 *
 * Declares a character array 'str' and a pointer 'result'
 *
 * 'str' initially contains "Hello World"
 *
 * Calls 'ft_strdup' to duplicate the contents of 'str'
 *
 * Prints the duplicated string using 'printf'
 */
