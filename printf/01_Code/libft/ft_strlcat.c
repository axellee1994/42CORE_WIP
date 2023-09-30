/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: axlee <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 12:39:08 by axlee             #+#    #+#             */
/*   Updated: 2023/09/19 20:15:57 by axlee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** strlcat - Append a length-limited, C-string to another
** @dst: The string to be appended to
** @src: The string to append to it
** @size: The size of the destination buffer.
*/

#include "libft.h" 

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	while (dst[i] && i < size)
		i++;
	while (src[j] && (i + j + 1) < size)
	{
		dst[i + j] = src[j];
		j++;
	}
	if (i < size)
		dst[i + j] = '\0';
	return (i + ft_strlen(src));
}

/*int	main(void)
{
	char	src[10];
	char	dst[10];
	size_t	nb;

	strcpy(src, "Hello");
	strcpy(dst, "World");
	nb = sizeof(dst);
	printf("Str: %zu\n", ft_strlcat(dst, src, nb));
	return (0);
}*/

/*Code Purpose:
 *
 * This code performs string concatenation with size checking. The main
 * function uses this custon function to concaternate two strings and
 * print the result.
 *
 * Code Breakdown:
 *
 * ft_strlcat takes three arguments: dst (destination string),
 * src (source string), and size (maximum size of the destination).
 *
 * It initializes two variables, i and j, to keep track of positions
 * in the strings.
 *
 * The while loop with dst[i] checks for the end of the destination
 * string and ensures that i stays within the specified size.
 *
 * The second while loop with src[j] copies characters from the source
 * to the destination, considering the available space.
 *
 * After copying, it adds a null terminator to ensure the concatenated
 * string is properly terminated.
 *
 * The function returns the total length of the concatenated string.
 *
 * Main Function:
 *
 * In the main function, two character arrays, src and dst,
 * are initialized.
 *
 * The strcpy function copies "Hello" to src and "World" to dst.
 *
 * nb is set to the size of dst.
 *
 * The ft_strlcat function is called to concatenate src
 * into dst, considering the size limit of dst.
 *
 * The result is printed using printf, displaying the total
 * length of the concatenated string.
*/
