/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: axlee <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 18:08:46 by axlee             #+#    #+#             */
/*   Updated: 2023/09/19 19:40:04 by axlee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Description: Calculates the length of a null-terminated string.
** @str: The input string.
** Return value: Returns the length of the string.
*/

#include "libft.h"

int	ft_strlen(const char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

/*
int	main(void)
{
	printf("%d\n", ft_strlen("Hello World"));
}
*/

/* Code Purpose:
 *
 * This code calculates the length of a null-terminated string
 *
 * Code Breakdown:
 *
 * The function takes a pointer to a character array 'str' as input
 *
 * It initializes an integer 'i' to 0
 *
 * It then enters a loop that increments 'i' until it reaches the null
 * terminator '\0' which marks the end of the string
 *
 * Finally, it returns the value of 'i', which represents the length of the
 * string
 *
 * Main Function:
 *
 * This function calles the 'ft_strlen', which whill print the length
 * of the string "Hello World", which is 11
 */
