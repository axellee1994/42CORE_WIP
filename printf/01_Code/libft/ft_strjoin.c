/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: axlee <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/15 11:37:15 by axlee             #+#    #+#             */
/*   Updated: 2023/09/17 14:15:23 by axlee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Allocates (with malloc(3)) and returns a “fresh” string ending
** with ’\0’, result of the concatenation of s1 and s2. If
** the allocation fails the function returns NULL.
** @s1 = The first string.
** @s2 = The second string.
** Return value The “fresh” string result of the concatenation of the 2 strings.
** Libc functions malloc(3)
*/

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	unsigned int	i;
	unsigned int	j;
	char			*s3;
	size_t			len1;
	size_t			len2;

	i = 0;
	j = 0;
	len1 = ft_strlen(s1);
	len2 = ft_strlen(s2);
	s3 = (char *)malloc(sizeof(char) * (len1 + len2 + 1));
	if (s3 == NULL)
		return (NULL);
	while (s1[i] != '\0')
	{
		s3[i] = s1[i];
		i++;
	}
	while (s2[j] != '\0')
	{
		s3[i + j] = s2[j];
		j++;
	}
	s3[i + j] = '\0';
	return (s3);
}

/*int	main(void)
{
	char	str1[50];
	char	str2[50];
	char	*result;

	strcpy(str1, "Hello World,");
	strcpy(str2, " You are so beautiful");
	result = ft_strjoin(str1, str2);
	printf("The combined string is: %s \n", result);
	free (result);
	return (0);
}*/

/* Code Purpose:
 *
 * This code concatenates two input string 's1' and 's2' and return the new
 * dynamically allocated string.
 *
 * Code Breakdown:
 *
 * Takes two input strings s1 and s2.
 * 
 * Initializes variables i and j to track positions in the strings.
 *
 * Calculates the lengths of s1 and s2 using ft_strlen.
 *
 * Allocates memory for a new string s3 that can hold the concatenated result.
 *
 * Copies characters from s1 to s3 in a while loop, incrementing i.
 *
 * Copies characters from s2 to s3 in another while loop,
 * using i + j as the index.
 *
 * Null-terminates s3 to ensure it's a valid C string.
 *
 * Returns the dynamically allocated s3.
 *
 * Main Function:
 *
 * Declares two character arrays str1 and str2 and initializes them with
 * the strings "Hello World," and " You are so beautiful," respectively.
 *
 * Calls ft_strjoin with str1 and str2 to concatenate them.
 *
 * Prints the combined string using printf.
 *
 * Frees the memory allocated for the combined string using free.
 */
