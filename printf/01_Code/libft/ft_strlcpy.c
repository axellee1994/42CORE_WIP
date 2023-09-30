/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: axlee <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 18:46:03 by axlee             #+#    #+#             */
/*   Updated: 2023/09/19 20:18:07 by axlee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Description: Copy a string up to a specified length.
** @dest: The destination buffer where the string will be copied to.
** @src: The source string to be copied.
** @size: The maximum number of characters to copy,
** including the null terminator.
** Return value: Returns the total length of the source string.
*/

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t	i;

	i = 0;
	if (size == 0)
	{
		while (src[i])
			i++;
		return (i);
	}
	while (i < size - 1 && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	if (i < size)
		dest[i] = '\0';
	while (src[i] != '\0')
		i++;
	return (i);
}

/*int	main(void)
{
	char	dst[50];
	char	src[50];
	size_t	result;

	strcpy(dst, "Waffles");
	strcpy(src, "Pancakes");
	result = ft_strlcpy(dst, src, sizeof(src));
	printf("The new string length for %s is: %zu\n", dst, result);
	return (0);
}*/

/* Code Purpose:
 *
 * The code implements the ft_strlcpy function, which ensures the null
 * terimantion of the destination string, and prevents buffer overflows.
 *
 * Code Breakdown:
 *
 * It takes three parameters: dst, src, and dstsize.
 *
 * If dstsize is 0, it returns the length of the source string
 * (src) using sizeof(src)
 *
 * It initializes a counter variable i to 0
 *
 * It enters a while loop that continues as long as src[i] is not
 * null-terminated ('\0') and i is less than dstsize - 1.
 *
 * Inside the loop, it copies characters from src to dst one by one.
 *
 * It ensures that copying stops if dstsize is reached to prevent
 * buffer overflow.
 *
 * After the loop, it explicitly null-terminates the destination
 * string dst by setting dst[i] to '\0'.
 *
 * Returns the length of the source string (src) using sizeof
 *
 * Main Function:
 *
 * It declares and initializes character arrays dst and src.
 *
 * dst initially contains "Waffles," and src contains "Pancakes."
 *
 * Calls ft_strlcpy to copy the contents of src into dst with
 * a maximum allowed size of sizeof(src).
 *
 * Writes the modified dst and the length of the new string
 * to the standard output using printf.
 */
