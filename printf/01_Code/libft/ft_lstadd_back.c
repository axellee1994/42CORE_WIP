/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: axlee <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 15:20:19 by axlee             #+#    #+#             */
/*   Updated: 2023/09/20 12:07:40 by axlee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Description: Adds a new node 'new' to the end of a linked list.
** 
** @alst: A pointer to a pointer to the head of the linked list.
** @new: A pointer to the new node to be added to the end of the linked list.
** 
** This function appends the 'new' node to the end of the linked list
** specified by '*alst'. 
** If '*alst' is NULL, it initializes the linked list with 'new'
** as the only node. 
*/

#include "libft.h"

void	ft_lstadd_back(t_list **alst, t_list *new)
{
	t_list	*last_elem;

	if (!*alst)
	{
		*alst = new;
		return ;
	}
	last_elem = ft_lstlast(*alst);
	last_elem->next = new;
}

/*int	main(void)
{
	t_list	*lst1;
	t_list	*new1;
	t_list	*current1;

	lst1 = NULL;
	new1 = ft_lstnew("Hello");
	ft_lstadd_back(&lst1, new1);
	current1 = lst1;
	while (current1)
	{
		printf("%s\n", (char *)(current1->content));
		current1 = current1->next;
	}
	return (0);
}*/

/* Code Purpose:
 *
 * This code adds a new node 'new' to the end of a linked list
 * specifically * by 'alst'. If the list is empty, it initalize the list
 * with the new node.
 *
 * Code Breakdown:
 *
 * If the pointer to the head of the linked list ('alst') is NULL
 * (indicating an empty list), the function assigns the 'new' node as the 
 * head of the list and returns.
 *
 * This then initializes the list with the 'new' node
 *
 * If the list is not empty, the function finds the last element of the
 * list using the 'ft_lstlast' function, and then it updates the 'next'
 * pointer of the last element to point to the 'new' node,
 *
 * This effectively adding it to the end of the list
 *
 * Main Function:
 *
 * There is 3 variables for it:
 *
 * 'lst1' -> A pointer to an empty linked list
 * 'new1' -> A pointer to a new node with the content "Hello"
 * 'current1' -> A pointer to traverse the linked list
 *
 * It first initialize 'lst1' as an empty linked list
 *
 * It then creates a new node 'new1' with the content "Hello"
 *
 * Then it calls 'ft_lstadd_back' to add 'new1' to the end of 'lst1'
 *
 * Finally it then iterates through the linked list and prints the
 * contents of each node
 */
