/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: axlee <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 12:52:34 by axlee             #+#    #+#             */
/*   Updated: 2023/09/19 20:17:47 by axlee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Description: Copies a block of memory from source to destination
** even if they overlap.
** @dst: The destination memory block.
** @src: The source memory block.
** @len: The number of bytes to copy.
** Return value: Returns a pointer to the destination memory block 'dst'.
*/

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*d;
	char	*s;
	size_t	i;

	d = (char *)dst;
	s = (char *)src;
	i = 0;
	if (d == s)
		return (d);
	if (s < d)
	{
		i = len;
		while (i--)
			((char *)d)[i] = ((char *)s)[i];
	}
	else
	{
		i = 0;
		while (i < len)
		{
			((char *)d)[i] = ((char *)s)[i];
			i++;
		}
	}
	return (d);
}

/*int	main(void)
{
	char	src[50];
	char	dst[50];

	strcpy(src, "Hello World");
	strcpy(dst, "Good night World");
	ft_memmove(dst, src, sizeof(src));
	printf("dst after memmove : %s\n", dst);
	return (0);
}*/

/* Code Purpose:
 *
 * This code is used to copy a block of memory from the source to 
 * the destination, handling overlapping memory areas correctly.
 *
 * Code Breakdown:
 *
 * 'ft_memmove' Function -> ft_memmove Function:
 * dst and src are type-casted to char* pointers, allowing
 * byte-level manipulation.
 *
 * A counter variable i is initialized to 0.
 *
 * If dst and src point to the same memory location, it returns
 * dst immediately since there's nothing to copy.
 *
 * If src is before dst in memory (indicating overlapping), it
 * enters the if (src < dst) block.It initializes i to len
 * (the number of bytes to copy) and enters a while loop.
 *
 * Inside the loop, it starts copying from the end (len - 1)
 * and moves backward to avoid overwriting data in the source buffer.
 *
 * If src is after dst in memory or they don't overlap, it enters
 * the else block.
 *
 * It initializes i to 0 and enters another while loop.
 *
 * Inside the loop, it copies bytes from src to dst as
 * usual, starting from the beginning.
 *
 * Main Function:
 *
 * 'src' and 'dst' character arrays are declared and initialized
 *
 * 'ft_memmove' is called to copy the contents of 'src' to 'dst'
 *
 * The modified 'dst' is printed using 'printf'
 *
 */
