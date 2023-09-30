/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: axlee <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 10:15:27 by axlee             #+#    #+#             */
/*   Updated: 2023/09/19 20:34:27 by axlee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* 
** memcmp -- compare by string
** @s1 = Pointer to the first block of memory
** @s2 = Pointer to the second block of memoru
** @n = number of bytes you want to compare
*/

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	char	*str1;
	char	*str2;
	size_t	i;

	i = 0;
	str1 = (char *)s1;
	str2 = (char *)s2;
	while (i < n)
	{
		if (str1[i] != str2[i])
			return ((unsigned char)str1[i] - (unsigned char)str2[i]);
		i++;
	}
	return (0);
}

/*int	main(void)
{
	char	str1[50];
	char	str2[50];
	int		result;

	strcpy(str1, "Hello World");
	strcpy(str2, "Goodbye World");
	result = ft_memcmp(str1, str2, 5);
	if (result > 0)
		printf("str 2 is less than str1");
	else if (result < 0)
		printf("str 1 is less than str 2");
	else
		printf("Both strings are equal");
	return (0);
}*/

/* Code Purpose:
 * This code is used to compare two blocks of memory
 *
 * Code Breakdown:
 *
 * 's1' & 's2' are pointers to the memory blocks to compare
 * 'n' is the number of bytes to compare
 *
 * '*str1' & '*str2' are pointers to the characters, which are used to treat
 * the memory blocks as sequences of characters.
 *
 * 'i' is a counter variable.
 *
 * Then it converts 's1' and 's2' to 'char' pointers to work with the memory
 * blocks as arrays.
 *
 * Starts a while looop while 'i' is less that 'n', which compares cahracters
 * at the current postion in both memory blocks. If a difference is found, 
 * return the difference as an integer.
 *
 * Unsigned char is used to ensure that characters are teated as numbers, and 
 * the difference is calculated correctly to avoid issues with signed 
 * characters.
 *
 * Counter is increased by 1 to move to the next byter in the memory blocks.
 * 
 * If the loop completes without finding any difference, resturn 0 to indicate
 * the memory blocks are equal.
 *
 * Main Function:
 *
 * Create two arrays and assign strings to it. Create an int variable 
 * 'result' to store the ft_memcmp and compare up to 5 bytes. 5 bytes = up to 
 * the 5th character of the position. 
 *
 * If the memory blocks are equal up to the 'n' bytes, it will return 0. If
 * there is a difference, it will return the difference between the differeing
 * characters.
 */
