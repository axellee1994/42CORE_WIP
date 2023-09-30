/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: axlee <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 12:07:25 by axlee             #+#    #+#             */
/*   Updated: 2023/09/19 20:31:18 by axlee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Description: Compares two strings up to a specified length.
** @s1: The first string to compare.
** @s2: The second string to compare.
** @n: The maximum number of characters to compare.
** Return value: Returns an integer less than, equal to, or greater than zero
** depending on whether s1 is less than, equal to, or greater than s2.
*/

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	if (n == 0)
		return (0);
	while (s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0' && i < n - 1)
		i++;
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}

/*int	main(void)
{
	char	s1[50];
	char	s2[50];

	strcpy(s1, "test\200");
	strcpy(s2, "test\0");
	printf("%d\n", ft_strncmp(s1, s2, 5));
	return (0);
}*/

/* Code Purpose:
 *
 * This code compares two strings up to a specified length
 *
 * Code Breakdown:
 *
 * 'ft_strncmp' function takes three parameters:
 * 
 * 's1' -> The first string to compare
 *
 * 's2' -> The second string to compare
 *
 * 'n' -> The maxmimum number of characters to compare
 *
 * It iterates through the characters of 's1' and 's2' while they are 
 * equal, not at the end of either string, and within the specified
 * length 'n'
 *
 * The function returns an integer that indicates whether 's1' is less
 * than, equal to, or greater than 's2'
 *
 * Main Function:
 *
 * Initializes two character arrays with strings containing special
 * characters
 *
 * 'strcpy' copies the special character strings into 's1' and 's2'
 *
 * 'ft_strncmp' is called to compare the two strings up to the first
 * 5 characters
 *
 * 'printf' prints the comparison result
 *
 * The function returns 0, indicating successful execution
 */
