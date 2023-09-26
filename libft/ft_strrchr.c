/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: axlee <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 14:10:42 by axlee             #+#    #+#             */
/*   Updated: 2023/09/19 20:31:46 by axlee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Description: Finds the last occurrence of a character in a string.
** @s: The input string to search within.
** @c: The character to find.
** Return value: Returns a pointer to the last occurrence of 'c' in 's',
** or NULL if 'c' is not found.
*/

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	unsigned char	uc;
	int				i;

	i = 0;
	uc = (unsigned char)c;
	while (s[i] != '\0')
		i++;
	while (i >= 0)
	{
		if (s[i] == uc)
			return ((char *)s + i);
		i--;
	}
	return (NULL);
}

/*int   main(void)
{
        const char      *str = "Hello";
        const char      *result;
        char            i;

        str = "Hello";
        i = 'l';
        result = ft_strrchr(str, i);
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
 * This code finds the last occurrence of a character in a string
 *
 * Code Breakdown:
 *
 * 'ft_strrchr' takes two parameters
 *
 * 's' -> A pointer to the input string to search within
 *
 * 'c' -> The character to find
 *
 * It finds fir the end of the input string 's'
 *
 * Then it searches for the character 'c' from the end of the string
 * backwards, returning a pointer to the last occurrence of 'c' or 
 * NULL if not found
 *
 * Main Function:
 *
 * The function initializes a string 'str' with the valye of "Hello"
 * and a character in 'i' with the value 'l'
 *
 * It calls the 'ft_strrchr' function to search for the 'l' within
 * the string 'str'
 *
 * If 'l' is found, it printed to the standard (stdout) and if it is
 * not found, it prints a "Character not found"
 *
 * Then it returns 0 to indicate successfull execution
 */
