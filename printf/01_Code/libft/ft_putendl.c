/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: axlee <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/24 11:56:15 by axlee             #+#    #+#             */
/*   Updated: 2023/09/30 11:31:42 by axlee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Description: Prints the given string 's' followed by a newline character
** to the standard output.
**
** @s: The string to be printed.
**
** This function takes a pointer to a string and prints the string to
** the standard output (usually the console) followed by a
** newline character '\n'.
*/

#include "libft.h"

void	ft_putendl(char *s)
{
	ft_putendl_fd(s, 1);
}

int	main(void)
{
	char	message[50];

	printf("Testing ft_putendl:\n");
	printf("Expected output: Hello, World!\n");
	printf("Actual output: ");
	ft_putendl(message);
	return (0);
}
