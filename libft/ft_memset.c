/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: axlee <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 15:49:45 by axlee             #+#    #+#             */
/*   Updated: 2023/09/19 20:18:25 by axlee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** memset - Fill a region of memory with the given value
** @ster: Pointer to the start of the area.
** @i: The byte to fill the area with
** @len: The size of the area.
**
** Do not use memset() to access IO space, use memset_io() instead.
*/

#include "libft.h"

void	*ft_memset(void *str, int i, size_t len)
{
	unsigned char	*temp;

	temp = (unsigned char *)str;
	while (len > 0)
	{
		*temp++ = (unsigned char)i;
		len--;
	}
	return (str);
}

/*int	main(void)
{
	char	str[50];

	strcpy (str, "This is string.h library function");
	puts (str);
	ft_memset (str, '$', 7);
	puts(str);
	return (0);
}*/

/* Code Purpose:
 *
 * This code fills a block of memory with a specified value
 *
 * Code Breakdown:
 *
 * It initializes an unsigned char pointer 'temp' to the same memory
 * locaiton as 'str'
 *
 * It then enters a loop that iterates for 'len' times
 *
 * Inside the loop, it sets the current byte pointed to by 'temp' to 
 * the value 'i', converting it to an unsigned char
 *
 * The pointer 'temp' is incremented, and 'len' is decremented for each
 * iteration
 *
 * Finally the function returns the pointer 'str', which now points to
 * the memory block filled with the specified value
 *
 * Main Function:
 *
 * It initializes a charater array 'str' with a string
 *
 * It prints the original string
 *
 * It calls the 'ft_memset' to replace the first 7 bytes of the string
 * with '$' character
 *
 * It then prints the modified string
 */
