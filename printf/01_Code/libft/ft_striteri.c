/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: axlee <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/16 17:29:28 by axlee             #+#    #+#             */
/*   Updated: 2023/09/20 14:00:56 by axlee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Description Applies the function f to each character of the string passed
** as argument, and passing its index as first argument. Each
** character is passed by address to f to be modified if necessary.
** @*s = The string to iterate.
** @*f =  The function to apply to each character of s and its index.
** Return value None.
** Libc functions None.
*/

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	unsigned int	i;

	if (!s || !f)
		return ;
	i = 0;
	while (s[i] != '\0')
	{
		f(i, s + i);
		i++;
	}
}

/*void	ft_inner_func(unsigned int i, char *str)
{
	printf("My inner function: index = %d and %c\n", i, *str);
}*/

/*int	main(void)
{
	char	str[50];

	strcpy(str, "Hello");
	printf("The result is %s\n", str);
	ft_striteri(str, ft_inner_func);
	printf("The result is %s\n", str);
	return (0);
}*/

/* Code Purpose:
 *
 * This code demonstates how to iterate through a string, apply
 * a custom function to each character, and print debug messages while
 * processing the string.
 *
 * Code Breakdown:
 *
 * 'ft_striteri' -> Accept a string 's' and a function pointer 'f'
 *
 * Iterates through each character of the input string 's'
 *
 * Calls the function 'f(i, s + i) for each character, passing the index
 * 'i' and a pointer to the current character
 *
 * Returns space if there was it does not belong to 's' or 'f'
 *
 * 'ft_inner_func' -> Receives an index 'i' and a character pointer 'str'
 *
 * Prints a debug message displaying the index and character
 *
 * Main Function:
 *
 * Initialize a character array 'str' with the string "Hello"
 *
 * Prints the original string using 'printf'
 *
 * Calls 'ft_striteri' to iterate through the string and apply 
 * 'ft_inner_func' to each character, displaying debug messages.
 *
 * Prints the string again using 'print f
 */
