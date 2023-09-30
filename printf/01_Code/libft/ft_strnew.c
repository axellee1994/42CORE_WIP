/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: axlee <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/24 12:56:54 by axlee             #+#    #+#             */
/*   Updated: 2023/09/29 16:23:05 by axlee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Description: Allocates memory for a new string of a specified size 'n'.
**
** @n: The size of the string to allocate memory for.
**
** This function dynamically allocates memory to create a new string
** of size 'n'.
** If the memory allocation is successful, it returns a pointer to the
** newly allocated string. If the allocation fails, it returns NULL
** to indicate an error.
*/

#include "libft.h"

char	*ft_strnew(size_t n)
{
	char	*str;

	str = (char *)malloc(sizeof(char) * (n + 1));
	if (!str)
		return (NULL);
	return (str);
}

/*int	main(void)
{
	char	*emptystring;
	char	*str;

	emptystring = ft_strnew(0);
	if (emptystring == NULL)
		printf("Test Case 1: Passed (Empty String)\n");
	else
		printf("Test Case 1 : Failed (Empty String)\n");
	str = ft_strnew(5);
	if (str != NULL)
	{
		strcpy(str, "Hello");
		printf("Test Case 2: Passed (String: %s)\n", str);
		free (str);
	}
	else
		printf("Test Case: Failed (String)\n");
	return (0);
}*/

/* Code Purpose:
 *
 * This code dynamically allocates memory for a new string of a specified size
 *
 * Code Breakdown:
 *
 * 'ft_strnew' ->  Returns a pointer to the allocated string of NULL if 
 * allocation fails
 *
 * If checks if memory allocation succeded and returns the allocated string or
 * NULL
 *
 * Main Function:
 *
 * Allocates memory for an empty string using 'ft_strnew(0)'
 *
 * Check if allocation succeeded (it should return NULL for an empty string)
 *
 * For testcase 2:
 *
 * Allocates memory for a string of length 5 and initializs it with "Hello"
 * using 'ft_strnew(5)
 *
 * Checks if allocation succeeded -> Should reutrn a valid string pointer
 *
 * Copies "Hello" into the allocated memory
 *
 * Prints "Test Case 2: Passed (String: Hello)" if allocation and copying 
 * are successful
 */
