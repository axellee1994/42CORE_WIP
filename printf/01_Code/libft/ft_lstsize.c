/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: axlee <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 15:05:03 by axlee             #+#    #+#             */
/*   Updated: 2023/09/20 11:41:25 by axlee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Description: Calculates the size (number of nodes) of a linked list.
** 
** @lst: A pointer to the head of the linked list.
** 
** Return value: Returns the number of nodes in the linked list.
*/

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	unsigned int	size;

	size = 0;
	while (lst)
	{
		lst = lst->next;
		size++;
	}
	return (size);
}

/*int	main(void)
{
	t_list		*lst;
	t_list		*empty_list;
	int			size;

	lst = ft_lstnew("Hello");
	size = ft_lstsize(lst);
	printf("The size variable is: %d\n", size);
	return (0);
}*/

/* Code Purpose:
 *
 * This code calculates the size(number of nodes) of a linked list.
 *
 * Code Breakdown:
 *
 * It initialize a variable 'size' to 0 
 *
 * Then it enters a while loop that iterates through the linked list 'lst' 
 * until it reaches the end (i.e., 'lst' becomes NULL)
 *
 * In each iteration, it advances to the next node by setting 'lst' to 
 * 'lst->next' and increments the 'size' by 1
 *
 * Then it returns the final 'size' of the linked list
 *
 * Main Function:
 *
 * 'lst' -> A pointer to a linked list with one node containing "Hello"
 *
 * 'empty_list' -> A pointer to an empty linked list (NULL)
 *
 * 'size' -> An integer variable to store the size of the linked list
 *
 * The function creates a linked list 'lst' with one node contaning
 * "Hello"
 *
 * Then it calls the 'ft_lstsize' function to calculate the size of 'lst' and
 * stores the result in the 'size' variable
 *
 * Then it prints the vale of 'size' using 'printf'
 *
 * Finally, it returns 0 to indicate successful execution
 */
