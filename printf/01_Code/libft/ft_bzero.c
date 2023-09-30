/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: axlee <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 16:17:46 by axlee             #+#    #+#             */
/*   Updated: 2023/09/19 19:51:35 by axlee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Description: Sets a block of memory to zero.
** @str: A pointer to the memory block to set to zero.
** @n: The number of bytes to set to zero.
** Return value: None.
*/

#include "libft.h"

void	ft_bzero(void *str, size_t n)
{
	ft_memset(str, 0, n);
}

/*int	main(void)
{
	char	test_case[5];

	strcpy(test_case, "bzero");
	ft_bzero(test_case, 4);
	return (0);
}*/

/* Code Purpose:
 *
 * This function sets a block of memory to zero
 *
 * Code Breakdown:
 *
 * The function takes a pointer to a memory block 'str' and the number of
 * bytes 'n' to set to zero
 *
 * It internally calls the 'ft_memset' function with the same pointer 'str',
 * vale 0, and the number of bytes 'n' to set the memory block to zero
 *
 * Main Function:
 *
 * It initializes an array 'test_case' with the string "bzero"
 *
 * It then calls the 'ft_bzero' function to set the first 4 bytes of 
 * 'test_case' to zero
 */
