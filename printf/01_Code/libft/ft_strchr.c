/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: axlee <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 13:06:53 by axlee             #+#    #+#             */
/*   Updated: 2023/09/19 19:08:06 by axlee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Description: Locates the first occurrence of the character 'c'
** in the string 's'.
** @s: The string to search within.
** @c: The character to locate (ASCII value or character code).
** Return value: Returns a pointer to the first occurrence of 'c'
** within 's', or NULL if 'c' is not found.
*/

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	while (*s && (*s != (char)c))
		s++;
	if ((*s) == (char)c || !c)
		return ((char *)s);
	return (NULL);
}

/*int	main(void)
{
	const char	*str = "Hello";
	const char	*result;
	char		i;

	str = "Hello";
	i = 'e';
	result = ft_strchr(str, i);
	if (result != NULL)
	{
		write(1, result, 1);
		write(1, "\n", 1);
	}
	else
	{
		write(1, "Character not found\n", 20);
	}
	return (0);
}*/

/* Code Purpose:
 *
 * This code searches for the first occurence of a character
 * within a string
 *
 * Code Breakdown:
 *
 * 's' -> The string to search within
 *
 * 'c' -> The character to locate (ASCII valye or character
 * code)
 *
 * Return Value: Returns a pointer to the first occurrence of 
 * 'c' within 's', or NULL if 'c' is not found
 *
 * Main Function:
 *
 * The function initializes a string 'str' with the value
 * "Hello" and a character in 'i' with the value 'e'
 *
 * It calls the 'ft_strchr' function to search for 'e' within
 * the string 'str' 
 *
 * If 'e' is found, it is printed to the standard (stdout)
 * along with a newline character '\n'
 *
 * If 'e' is not found, "Character is not found" is printed
 */
