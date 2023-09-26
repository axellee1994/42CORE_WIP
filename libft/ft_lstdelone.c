/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: axlee <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 15:23:28 by axlee             #+#    #+#             */
/*   Updated: 2023/09/20 12:48:51 by axlee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Description: Deletes a single node from a linked list.
** 
** @lst: A pointer to the node to be deleted.
** @del: A function pointer responsible for deleting the content of the node.
** 
*/

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (!lst)
		return ;
	if (del)
		del(lst->content);
	free (lst);
}

/*int	main(void)
{
	t_list	*elem;

	elem = ft_lstnew("Hello");
	ft_lstdelone(elem, NULL);
	printf("The node has been deleted");
	return (0);
}*/

/* Code Purpose:
 *
 * This code demonstrates how to create a linked list node with content,
 * delete the node using the 'ft_lstdelone' function and confirms the 
 * deletion
 *
 * Code Breakdown:
 *
 * 'lst' -> A pointer to the node to be deleted
 *
 * 'del' -> A function pointer responsible for deleting the content of
 * the node (Can be 'NULL' if no custom deletion is needed)
 *
 * The function check is the node pointer ('lst') is NULL
 *
 * If it is NULL, the function returns without performing any action
 *
 * If the 'del' function pointer is not NULL, it's assumed to be a function
 * responsible for deleting the content of the node ('lst->content').
 *
 * This allows for custom cleanup of the node's content before it's freed
 *
 * Then it frees the memory occupied by the node itself using the 'free'
 * function
 *
 * Main Function:
 *
 * 'elem' -> A pointer to a linked list node with the content "Hello"
 *
 * The function creates a linked list node 'elem' with the content
 * "Hello" using 'ft_lstnew'
 *
 * It then deletes the 'elem' node using 'ft_lstdelone'
 * (no custom content cleanup is needed, so 'del' is set to 'NULL')
 *
 * Then it prints "The node has been deleted" to the console
 */ 
