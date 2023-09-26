/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: axlee <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/15 11:02:27 by axlee             #+#    #+#             */
/*   Updated: 2023/09/17 16:00:22 by axlee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Allocates (with malloc(3)) and returns a “fresh” substring
** from the string given as argument. The substring begins at
** indexstart and is of size len. If start and len aren’t refering
** to a valid substring, the behavior is undefined. If the
** allocation fails, the function returns NULL.
** @*s= The string from which create the substring.
** @start = The start index of the substring.
** @len = The size of the substring.
** Return value The substring.
** Libc functions malloc(3)
*/

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*str;
	size_t	s_len;

	s_len = ft_strlen(s);
	if (!s)
		return (NULL);
	if (start > s_len)
		return (ft_strdup(""));
	if (start + len > s_len)
		len = s_len - start;
	str = malloc(len + 1);
	if (!str)
		return (NULL);
	s += start;
	if (s)
		ft_strlcpy(str, s, len + 1);
	return (str);
}

/*int	main(void)
{
	char	str[50];
	char	*result;

	strcpy(str, "Hello World");
	result = ft_substr(str, 9, 2);
	printf("The result is %s", result);
	free (result);
	return (0);
}*/

/* Code Purpose:
 *
 * This code extracts a substring from an input string based on a specified
 * starting position and length before printing it out.
 *
 * Code Breakdown:
 *
 * This function takes in three parameters:
 * 's' is a constant character pointer -> The input string
 * 'start' is an unsigned integer -> The starting position of the substring
 * 'len' -> The length of the substring to extract
 *
 * Unsigned int is used to  convery that the start is always non-negative
 * integer.
 *
 * The function allocates memory dynamically for the substring using 'malloc'
 *
 * It copies characters from the input string 's' to the newly allocated
 * memory to form the substring
 *
 * The substring is null-terminated to make it a valid C-style string
 *
 * The function returns a pointer to the extracted substring.
 *
 * Main Function:
 *
 * It declares a character array 'str' to hold a string of up to 50
 * characters.
 *
 * It initializes with the string "Hello World" using strcpy.
 *
 * Then it calls in the 'ft_substr' function with arguements to extract
 * a substring of length 2 starting from the 9th position in the stirng
 *
 * The extracted substring is stored in the 'result' variable.
 *
 * It prints the extracted substring using 'printf'
 *
 * Then it frees the dynamically allocated memory for the substring
 * using 'free'.
 */
