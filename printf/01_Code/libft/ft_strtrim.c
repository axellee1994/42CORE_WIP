/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: axlee <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/15 13:15:51 by axlee             #+#    #+#             */
/*   Updated: 2023/09/17 14:16:17 by axlee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Allocates (with malloc(3)) and returns a copy of the string
** given as argument without whitespaces at the beginning or at
** the end of the string. Will be considered as whitespaces the
** following characters ’ ’, ’\n’ and ’\t’. If s has no whitespaces
** at the beginning or at the end, the function returns a
** copy of s. If the allocation fails the function returns NULL.
** @s1 = The original string
** @set = The characters that are used to remove from the original string
** Return value The “fresh” trimmed string or a copy of s.
** Libc functions malloc(3)
*/

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	size_t	j;
	char	*str;
	size_t	trimmed_len;

	str = 0;
	if (s1 != 0 && set != 0)
	{
		i = 0;
		j = ft_strlen(s1);
		while (s1[i] && ft_strchr(set, s1[i]))
			i++;
		while (j > i && ft_strchr(set, s1[j - 1]))
			j--;
		trimmed_len = j - i;
		str = (char *)malloc(sizeof(char) * (trimmed_len + 1));
		if (str)
			ft_strlcpy(str, &s1[i], trimmed_len + 1);
	}
	return (str);
}

/*int	main(void)
{
	char	str[50];
	char	set[50];
	char	*result;

	strcpy(str, " Hello World");
	strcpy(set, "World");
	result = ft_strtrim(str, set);
	printf("The trimmed string is: %s \n", result);
	free (result);
	return (0);
}*/

/* Code Purpose:
 *
 * This code removes leading and trailing whitespaces froma a given
 * string based on a set of characters. It then allocates memory
 * for the trimmed string and returns to it.
 *
 * Code Breakdown:
 *
 * This function takes two parameters: 's1' input string and 'set'
 * which is the set of characters to trim
 *
 * It initialies variables 'i' and 'j' to track the start and end
 * positions of the trimmed string. 
 *
 * Then it checks if both 's1' and 'set' are not NULL
 *
 * It then lops through the beginning of 's1', incrementing 'i' until
 * it encounters a charater not present in 'set'
 *
 * It then loops from the end of 's1' backward, decrementing 'j', until
 * it finds a character not present in 'set'
 *
 * The function then calculates the length of the timmed portion
 * as 'trimmed_len' before allocating mememory to it
 * 
 * Finally, it then copies the trimmed portion of 's1' into str
 *
 * Main Function:
 *
 * Initialize the string 'str' with leading spaces
 *
 * Specify the set variable
 *
 * Call 'ft_strtrim' to trim the string
 *
 * Prints the trimmed string
 *
 * Frees the memory allocated from the trimmed string
 */
