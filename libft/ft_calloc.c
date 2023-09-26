/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: axlee <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 17:04:00 by axlee             #+#    #+#             */
/*   Updated: 2023/09/14 17:30:06 by axlee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
 * * @count = Number of elements 
 * * @size = size of each element
 */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	unsigned int	total;
	unsigned int	i;
	char			*dst;

	total = count * size;
	dst = malloc(total);
	if (!dst)
		return (NULL);
	i = 0;
	while (total--)
	{
		dst[i] = 0;
		i++;
	}
	return ((void *)dst);
}

/*int	main(void)
{
	int	*arr;
	int	i;	

	arr = (int *)ft_calloc(5, sizeof(int));
	
	if (arr == NULL)
	{
		printf("Memory allocation has failed\n");
		return (1);
	}
	i = 0;
	while (i < 5)
	{
		printf("%d ", arr[i]);
		i++;
	}
	printf("\n");
	free(arr);
	return (0);
}*/

/* Code Purpose:
 *
 * This code emulates the behaviour of the standard 'calloc' funciton by
 * allocating memory for an array and initializing it with zeroes
 *
 * The main function uses 'ft_calloc' to allocate and initalize an array 
 * of integers, prints its contents, and then frees the allocated memory.
 *
 * Code Breakdown: 
 *
 * This functions takes two parameters: 'count' (number of elements)
 * and 'size' (size of each element);
 *
 * 'total' represents the total amount of bytes to allocate 
 * (count * size); This is used to store 'count' elements each of
 * size 'size'
 *
 * 'i' is used as a loop counter
 *
 * 'dst' is a pointer that will eventually point to the allocated
 * memory.
 *
 * The code then uses 'malloc' function to allocate a block of memory
 * size 'total'. If the allocation fails, it returns 'NULL' to indicate
 * an error
 *
 * The 'while' loop initialize each byte in the allocated memory block
 * to '0' 
 *
 * It continues until 'total' becomes zero
 *
 * It uses the 'dst' pointer to access and initialize each byte.
 *
 * The function finally returns a pointer to the allocated memory, 
 * casted to 'void *'
 *
 * Main Function:
 *
 * The code declares an integer array 'arr' and an integer 'i'
 *
 * It then calls 'ft_calloc' to allocate an array of 5 integers and
 * initializes them to 0
 *
 * It then check if the allocation is successful. If not, it will
 * print an error message and returns with a non-zero exit code.
 *
 * The code then prints the contents of the initialized array using
 * a 'while' loop before freeing the allocated memory using the 
 * 'free' function when done.
 */
