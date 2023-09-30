/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: axlee <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/15 14:38:01 by axlee             #+#    #+#             */
/*   Updated: 2023/09/17 17:54:13 by axlee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Allocates (with malloc(3)) and returns an array of “fresh”
** strings (all ending with ’\0’, including the array itself) obtained
** by spliting s using the character c as a delimiter.
** If the allocation fails the function returns NULL. Example
** : ft_strsplit("*hello*fellow***students*", ’*’) returns
** the array ["hello", "fellow", "students"].
** @*s = The string to split.
** @c = The delimiter character.
** Return value The array of “fresh” strings result of the split.
** Libc functions malloc(3), free(3)
*/

#include "libft.h"

static void	ft_freeup(char **strs)
{
	int	i;

	if (strs)
	{
		i = 0;
		while (strs[i] != NULL)
		{
			free(strs[i]);
			i++;
		}
		free(strs);
	}
}

static int	ft_wordcount(char *str, char c)
{
	int	word;
	int	in_word;

	word = 0;
	in_word = 0;
	while (*str)
	{
		if (*str != c)
		{
			if (!in_word)
			{
				word++;
				in_word = 1;
			}
		}
		else
		{
			in_word = 0;
		}
		str++;
	}
	return (word);
}

static void	ft_strcpy(char *word, char *str, char c, int j)
{
	int	i;

	i = 0;
	while (str[j] != '\0' && str[j] == c)
		j++;
	while (str[j + i] != c && str[j + i] != '\0')
	{
		word[i] = str[j + i];
		i++;
	}
	word[i] = '\0';
}

static char	*ft_stralloc(char *str, char c, int *k)
{
	char		*word;
	int			j;
	int			word_length;

	j = *k;
	word = NULL;
	while (str[*k] != '\0')
	{
		if (str[*k] != c)
		{
			word_length = 0;
			while (str[*k] != '\0' && str[*k] != c)
			{
				word_length++;
				(*k)++;
			}
			word = (char *)malloc(sizeof(char) * (word_length + 1));
			if (word == NULL)
				return (NULL);
			break ;
		}
		(*k)++;
	}
	ft_strcpy(word, str, c, j);
	return (word);
}

char	**ft_split(char const *str, char c)
{
	char	**strs;
	int		i;
	int		j;
	int		pos;

	if (str == NULL)
		return (NULL);
	i = 0;
	pos = 0;
	j = ft_wordcount((char *)str, c);
	strs = (char **)malloc(sizeof(char *) * (j + 1));
	if (strs == NULL)
		return (NULL);
	strs[j] = NULL;
	while (i < j)
	{
		strs[i] = ft_stralloc(((char *)str), c, &pos);
		if (strs[i] == NULL)
		{
			ft_freeup(strs);
			return (NULL);
		}
		i++;
	}
	return (strs);
}

/*int	main(void)
{
	char	str[20];
	char	**result;
	int		i;

	strcpy(str, "Hello World");
	result = ft_split(str, ' ');
	if (result != NULL)
	{
		i = 0;
		while (result[i] != NULL)
		{
			printf("The split result is %s\n", result[i]);
			free(result[i]);
			i++;
		}
		free (result);
	}
	return (0);
}*/

/* Code Purpose:
 *
 * This code splits a given string based on a specified delimiter character
 * 'c'.
 *
 * Code Breakdown:
 *
 * 'ft_wordcount' -> Counts the number of words in a string 's' separated by
 * the character 'c'.
 *
 * Iterates through the string, skipping occurrences of 'c', and increments the
 * 'counter' for each word found.
 *
 * Returns the total word count
 *
 * 'ft_strncpy' -> Copies a portion of one string 'src' to another string 'dst'
 * up to a specified length 'len'
 *
 * Ensure the destination is null terminated.
 *
 * 'ft_strndup' -> Duplicates a portion of a string 's' up to 'n' characters and
 * returns the duplicated string
 *
 * It allocates memory for the new string and uses 'ft_strncpy' to copy the
 * specified portion.
 *
 * Ensures that the duplicated string is null-terminated.
 *
 * 'ft_split' -> Splits a string 's' into an array of strings based
 * on the delimiter * character 'c'
 *
 * Allocates memory for an array of strings 'tab' to store the split words
 *
 * Iterates through the input string, skipping occurrences of 'c', and uses 
 * 'ft_strndup' to create new strings for each word found
 *
 * Null-terminates the array of strings
 *
 * Return array of split strings.
 *
 * Main Function:
 *
 * Initialize a string 'str' with the value "Hello World"
 *
 * Call  the 'ft_split' function to split 'str' into words separate by space ' '
 *
 * Iterates through the resulting array and prints each split word
 *
 * Frees the memory allcated for each split word and the array itself
 *
 * Returns 0 to indicate successful program execution
 */
