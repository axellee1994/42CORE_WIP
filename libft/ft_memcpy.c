/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: axlee <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 11:50:42 by axlee             #+#    #+#             */
/*   Updated: 2023/09/17 15:31:36 by axlee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** memcpy -- copy memory area
** The memcpy() function copies n bytes from memory area src
** to memory area dst. If dst and src overlap, behavior is undefined.
** Applications in which dst and src might overlap should use
** memmove(3) instead. The memcpy() function returns the original value of dst.
*/

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char		*d;
	unsigned const char	*s;
	size_t				i;

	if (!dst && !src)
		return (NULL);
	i = 0;
	d = dst;
	s = src;
	while (i < n)
	{
		d[i] = s[i];
		i++;
	}
	return (dst);
}

/*int	main(void)
{
	char	dst[50];
	char	src[50];

	strcpy(dst, "Hello World");
	strcpy(src, "Good Night World");
	ft_memcpy(dst, src, sizeof(src));
	printf("dst after memset(): %s\n", dst);
	return (0);
}*/

/* Code Purpose:
 * This code is used to copy a block of memory from one location to another.
 *
 * Code Breakdown:
 * 'ft_memcpy' is defined to copy 'n' bytes of memory from 'src' to 'dst'.
 * 
 * 'i' is a counter initialized to 0.
 *
 * 'd' is a pointer to dst, and s is a pointer to src.
 *  These pointers are used to manipulate the memory blocks.
 *
 *  A 'while' loop is used to copy bytes from 'src' to 'dst' by iterating
 *  from 0 to 'n-1'. In each iteration, it copies the byte at 's[i]' to
 *  'd[i]'.
 *
 *  After the loop, a null-terminator is added to the end of the 'dst' array 
 *  to make it a valid C-Style String
 *
 *  The functions then returns a pointer to 'dst' after copying.
 *
 *  Main Function:
 *
 *  Two character arrays, dst and src, are declared and initialized with
 *  the strings "Hello World" and "Good Night World," respectively.
 *
 *  ft_memcpy is called to copy the contents of src into dst. sizeof(src) is
 *  used to dynamically follow the size of src instead of a static fixed 
 *  size.
 *
 *  Finally, it prints the modified dst array.
 */
