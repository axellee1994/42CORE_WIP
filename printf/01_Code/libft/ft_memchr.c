/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: axlee <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 15:03:15 by axlee             #+#    #+#             */
/*   Updated: 2023/09/19 20:33:40 by axlee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** memchr -- locate byte in byte string
** @s = The pointer to the block of memory where the search is performed
** @c = Value to be passed as an int, but the function perfoms a byte per byte
**      search using the unsigned char conversion of this value
** @n = Number of bytes to be analysed
*/

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n && (unsigned char)c != ((unsigned char *)s)[i])
		i++;
	if (i == n)
		return (NULL);
	return ((void *)s + i);
}

/*int	main(void)
{
	char	str[50];
	char	search;
	char	*result;

	strcpy(str, "Hello 42 Singapore");
	search = 'a';
	result = ft_memchr(str, search, strlen(str));
	printf("The string after | %c | is | %s | \n", search, result);
	return (0);
}*/

/* Code Purpose:
 *
 * This code searches the first occurance of a chracter 'c' in a given memory
 * block 's' of size 'n'.
 *
 * Code Breakdown:
 *
 * It takes three parameters: s (a pointer to the memory block to search),
 * c (the character to search for), and n
 * (the maximum number of bytes to search).
 *
 * Inside the function, it initializes a variable i to 0 to track
 * the current position.
 *
 * It then enters a loop that continues as long as i is less than n and the
 * character c is not found at the current position in s.
 *
 * If the character c is found, it returns a pointer to the location in s
 * where c was found.
 *
 * If the loop finishes without finding c, it returns NULL to indicate
 * that c was not found in the specified memory block.
 *
 * Main function:
 *
 * It initializes a character array str and a character variable search.
 *
 * It copies the string "Hello 42 Singapore" into the str array and sets
 * search to the character 'a'.
 *
 * It calls the ft_memchr function with str, search, and the length of str.
 *
 * The result of the ft_memchr function is stored in the result variable.
 *
 * Finally, it prints the result, showing the string after the
 * character search.
*/
