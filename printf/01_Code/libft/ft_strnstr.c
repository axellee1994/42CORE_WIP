/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: axlee <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 13:56:41 by axlee             #+#    #+#             */
/*   Updated: 2023/09/19 20:36:21 by axlee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** strnstr - Find the first substring in a %NUL terminated string, where no
** more than the len characters are searches
** @big: The string to be searched
** @little: The string to search for
** @len: The length of the string
*/

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	unsigned long	i;
	int				j;

	j = 0;
	i = 0;
	if (!*little)
		return ((char *)big);
	while (big[i])
	{
		j = 0;
		while (big[i] == little[j] && big[i] && i < len)
		{
			i++;
			j++;
		}
		if (!little[j])
			return ((char *)&big[i - j]);
		i = (i - j) + 1;
	}
	return (NULL);
}

/*int	main(void)
{
	char	big[20];
	char	small[20];
	char	*result;

	strcpy(big, "Hello World");
	strcpy(small, "World");
	result = ft_strstr(big, small, 20);
	printf("The substring is: %s\n", result);
	return (0);
}*/

/* Code Purpose:
 *
 * This code searches for a substring within a given string, but with a
 * specified maximum search length and returns it if found, else it
 * will return NULL.
 *
 * Code Breakdown:
 *
 * The ft_strstr function takes three parameters: the string to
 * search in (big), the substring to find (little), and the maximum
 * search length (len).
 *
 * If the little string is empty (i.e., the substring to find is empty),
 * it returns a pointer to the beginning of the big string.
 *
 * It then iterates through the big string character by character while
 * comparing it to the little string.
 *
 * If it finds a matching character in both strings, it continues comparing.
 *
 * It stops searching when it reaches the specified maximum search length (len)
 * or the end of the big string.
 *
 * If the entire little string is found within the big string within the
 * specified search length, it returns a pointer to the start of the substring
 * within the big string.
 *
 * If the substring is not found, it returns NULL.
 *
 * Main Function:
 *
 * The main function tests the ft_strstr function by defining a "big" string
 * ("Hello World") and a "little" string ("World").
 *
 * It calls ft_strstr with a maximum search length of 20 characters.
 *
 * Finally, it prints the result, which is the found substring or NULL.
*/
