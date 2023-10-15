/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: axlee <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/14 11:45:09 by axlee             #+#    #+#             */
/*   Updated: 2023/10/15 16:23:45 by axlee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

size_t	ft_strlen(const char*s)
{
	int	i;

	i = 0;
	if (!s)
		return (0);
	while (s[i] != '\0')
		i++;
	return (i);
}

/* Code Purpose:
 *
 * Calculates the length of the string by counting the number of characters
 * until the null terminator is reached
 *
 * Code Breakdown:
 *
 * Declare a function called ft_strlen that takes a constant character
 * pointer 's' as parameter
 *
 * Declare an integer variable i and set it to 0
 *
 * Check if it is NULL. If it is, return the value of 0
 *
 * Iterate through each character of s until the null terminator is reached
 * While doing so, increased the value of i per character
 *
 * Return the total value of i = length of string
 */

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*str;
	size_t	s_len;
	size_t	i;

	s_len = ft_strlen(s);
	i = 0;
	if (!s)
		return (NULL);
	if (start >= s_len)
	{
		str = (char *)malloc(1);
		if (str == NULL)
			return (NULL);
		str[0] = '\0';
		return (str);
	}
	str = (char *)malloc(len + 1);
	if (str == NULL)
		return (NULL);
	while (i++ < start)
		s++;
	ft_strlcpy(str, s, len + 1);
	return (str);
}

/* Code Purpose:
 *
 * Extracts a substring from a given string starting at a specified
 * position and with a specified length
 *
 * Code Breakdown:
 *
 * Declare a function ft_substr that takes a string "s", a start postion
 * "start" and a length "len"
 *
 * Declare a string "str" to store the resulting substring
 *
 * Get the length of the string "s" and store it in "s_len"
 *
 * Declare a counter "i" and initialize it to 0
 *
 * Check if string is NULL. If it is, return NULL
 *
 * Check if the start position "start" is greater than or equal to the
 * length of "s"
 *
 * 	If it is, allocate the memory for "str" with size of 1
 *
 * 	Check if allocation is successfull. If not, return NULL
 *
 * 	Set the first character as the null terminator
 *
 * 	Return "str"
 *
 * Allocate memory of string with with the size of len + 1
 *
 * Check if allocation was successfull, if not return NULL
 *
 * While the counter is less than the start position
 *
 * 	increase the pointer of "str" to move to the next character
 * 	until it reaches the start position
 *
 * Copy the "len" character from s to str 
 *
 * Set the character after the copied characters in str as the null
 * terminator '\0'
 *
 * Return str
 */

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	unsigned int	i;
	size_t			size_src;

	i = 0;
	if (src == NULL)
		return (0);
	size_src = ft_strlen(src);
	if ((int)size < 0)
		size = size_src + 1;
	if (size >= 2 && size_src != 0)
	{
		while (i < size - 1)
		{
			if (i < size_src)
				dst[i] = src[i];
			else if (i == size_src)
				dst[i] = '\0';
			i++;
		}
	}
	if (size != 0)
		dst[i] = '\0';
	return (size_src);
}

/* Code Purpose:
 *
 * Copies a string from the source to the destination with a 
 * specified size. It ensure that the destination string is properly
 * terminated with a null character and returns the length of the 
 * source string
 *
 * Code Breakdown:
 *
 * Declare a function ft_strlcpy that takes a character pointer "dest",
 * a constant character pointer "src", and a size "size" as parameters
 *
 * Declare an unsigned integer "i" and a size_t variable "size_src"
 *
 * Check if src is NULL. If it is, return 0
 *
 * Get the length of the source string "src"
 *
 * Check if the "size" is negative. If it is, set it to "size_src + 1"
 *
 * Check if "size" is greater than or equal to 2 and "size_src" is not
 * 0
 *
 * 	Iterates through each character of "src" until reaching "size - 1"
 *
 * 		If the index is within the length of "src", copy
 * 		character from "src" to "dst"
 *
 * 		If the index "i" is equal to the length of "src", set the
 * 		character in "dst" as the null terminator "\0"
 *
 * 		Increment "i"
 * 		
 * Set the character after the copied characters in "dst" as the
 * null terminator "\0"
 *
 * Return the length of the source string "size_src"
 */

int	ft_strchr_index(const char *s, int c)
{
	unsigned char	c_unsigned;
	int				i;

	i = 0;
	if (!s)
		return (-1);
	c_unsigned = (unsigned char)c;
	while (s[i] != '\0')
	{
		if (s[i] == c_unsigned)
			return (i);
		i++;
	}
	if (c_unsigned == '\0')
		return (i);
	return (-1);
}

/* Code Purpose:
 *
 * Searches for a specific character "c" in a string "s" and returns
 * the index of the first occurence of the character. If the character
 * is not found, it returns -1 (Indicator of failure or abscence)
 *
 * Code Breakdown:
 *
 * Declare a function "ft_strchr_index" that takes a constant 
 * character pointer "s" and an integer "c" as parameters
 *
 * Declare an unsigned char variable "c_unsigned" and an integer
 * variable "i"
 *
 * Check if "s" is NULL. If it is, return -1
 *
 * Conver "c" to an unsigned char and store it in c_unsigned
 *
 * Iterate through each character of "s" until the null termiantor
 * character "\0" is encountered
 *
 * 	If the current character matches "c_unsigned", return the 
 * 	index "i"
 *
 * 	Increment "i"
 *
 * If "c_unsigned" is equal to the null terminator character "\0",
 * return the index "i"
 *
 * If not match is found, return -1
 */

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	char			*ptr;
	unsigned int	i;

	if (size < ft_strlen(dst))
		return (ft_strlen(src) + size);
	ptr = dst + ft_strlen(dst);
	i = ft_strlen(dst);
	while (i < size -1 && *src != '\0' && size >= 2)
	{
		*ptr = *src;
		ptr++;
		src++;
		i++;
	}
	if (size != 0)
		*ptr = '\0';
	return (ft_strlen(dst) + ft_strlen(src));
}

/* Code Purpose:
 *
 * Concatenates a string "src" to the end of a string "dst" with
 * a specified size "size". It ensures that the result string is
 * properly terminated with a null character and returns the total
 * length of the concatenated string
 *
 * Code Breakdown:
 *
 * Declares a function "ft_strlcat" that takes a character pointer
 * "dst", a constant character pointer "src", and a size "size" as 
 * parameters
 *
 * Declare a character pointer "ptr" to stroe the position where
 * concatenation should begin
 *
 * Declare an unsigned integer "i" to keep track of the current position
 * in "dst"
 *
 * Check if the size of "dst" is less than the length of "dst". If it is,
 * return the sume of lengths of "src" and "size"
 *
 * Set "ptr" to the end of "dst" by adding the length of "dst" to dst
 *
 * Set "i" to the length of "dst"
 *
 * Iterate through each character of "src" until reaching "size - 1",
 * the null terminator "\0", or when the size is less than 2
 *
 * 	Copy the character from "src" to the position pointed by "ptr"
 *
 * 	Increment "ptr", "src" and "i"
 *
 * If the "size" is not 0, set the character at the position pointed by
 * "ptr" as the null terminator "\0"
 *
 * Return the sum of the lengths of "dst" and "src"
 */
