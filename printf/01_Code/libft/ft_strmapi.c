/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: axlee <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/16 16:17:00 by axlee             #+#    #+#             */
/*   Updated: 2023/09/19 20:57:19 by axlee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Applies the function f to each character of the string passed
** as argument by giving its index as first argument to create a
** “fresh” new string (with malloc(3)) resulting from the successive
** applications of f.
** @*s = The string to map.
** @*f = The function to apply to each character of s and its index.
** Return value The “fresh” string created from the successive applications of
** f.
** Libc functions malloc(3)
*/

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*str;

	if (!s)
		return (NULL);
	i = 0;
	str = (char *)malloc(sizeof(char) * (ft_strlen(s)) + 1);
	if (str == NULL)
		return (NULL);
	while (s[i] != '\0')
	{
		str[i] = f(i, s[i]);
		i++;
	}
	str[i] = '\0';
	return (str);
}

/*char	ft_strmapi_uppercase(unsigned int i, char str)
{
	printf("My inner function: index = %d and %c\n", i, str);
	return (str - 32);
}

int	main(void)
{
	char	str[50];
	char	*result;

	strcpy(str, "Hello");
	printf("The result is %s\n", str);
	result = ft_strmapi(str, ft_strmapi_uppercase);
	printf("The result is %s\n", result);
	free (result);
	return (0);
}*/

/* Code Purpose:
 * 
 * This code is used to transform a string and print debug messages.
 *
 * Code Breakdown:
 *
 * 'ft_strmapi' -> Takes two arguements: 's' (a pointer to a string)
 * and 'f' (a function pointer);
 *
 * Allocates memory for a new string 'str' with the same length as 's' 
 * and space for a null terminator
 *
 * It iterates through each character of 's' using a while loop,
 * appling the function of 'f' to each character.
 *
 * f(i, s[i]) calls the function f with two arguments: the index i
 * and the character s[i]. The purpose of this is to transform or
 * manipulate the character in some way. In the provided code, the
 * ft_strmapi_uppercase function is used, which converts the character
 * to uppercase by subtracting 32 from its ASCII value.
 *
 * Then it copies the result to the new 'str' and return the transformed
 * string.
 *
 * If 's' is NULL or memory allocation fails, it returns NULL.
 *
 * 'ft_strmapi_uppercase; -> Takes to arguements: 'i' as index and 'str' 
 * as a character
 *
 * It then prints a debug message displaying the index 'i' and the
 * character 'str'
 *
 * It finally transform the character 'str' to uppercase by subtracting 32
 * from its ASCII value and returns the result
 *
 * Main Function:
 *
 * Declares a character array 'str' and initializes it with the string 
 * "Hello"
 *
 * Calls 'ft_strmapi' to transform the string 'str' using the 
 * 'ft_strmapi_uppercase' function
 *
 * Print the original and transformed strings
 *
 * Free the memory allocated for the transformed string
 */
