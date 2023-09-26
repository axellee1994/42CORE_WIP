/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: axlee <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 19:23:19 by axlee             #+#    #+#             */
/*   Updated: 2023/09/20 10:49:14 by axlee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Description: Adds a new node 'new' to the front of a linked list.
** 
** @alst: A pointer to a pointer to the head of the linked list.
** It allows modification of the list's head if needed.
** @new: A pointer to the new node to be added to the front of the linked list.
*/

#include "libft.h"

void	ft_lstadd_front(t_list **alst, t_list *new)
{
	if (!*alst)
	{
		*alst = new;
		return ;
	}
	if (!new)
	{
		return ;
	}
	new->next = *alst;
	*alst = new;
}

/*int	main(void)
{
	t_list	*lst1;
	t_list	*new1;
	t_list	*current1;

	lst1 = NULL;
	new1 = ft_lstnew("Hello");
	ft_lstadd_front(&lst1, new1);
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
 * This code is used to create and manipulate a singly linked list. It
 * initialize an empty linked list, add a node with the content to the
 * front of the list and then print the contents of the linked list
 *
 * Code Breakdown:
 *
 * This function adds a node to the front of a linked list
 *
 * If the pointer to the head of the linked list (*alst) is NULL
 * (indicating an empty list), the function assigns the 'new' node to be
 * the head of the list, which initalize the list with the 'new' node
 *
 * If the 'new' node is NULL, the function returns without making any
 * changes to the list
 *
 * If the linked list it not empty and the 'new' node is not NULL, 
 * the functions sets the 'next' pointer of the 'new' node to point to
 * the current head of the list (the node that was previously at the 
 * front)
 *
 * This effecively makes the 'new' node the new head
 *
 * Finally it updates the pointer to the head of the list (*alst) to point
 * to the 'new' node, ensuring that the lists head reflects the change
 *
 * Main Function:
 *
 * The main function initialize a pointer to a linked list, a new node and 
 * to traverse the linked list
 *
 * It then initialize lst1 as an empty linked list, before creating a new
 * node with the content "Hello". It then finally adds the new node to the
 * front of lst1
 *
 * Then it initialize current1 to the beginning of lst1
 *
 * Finally it then lop through the linked list and prints the contents of
 * each node
 */
