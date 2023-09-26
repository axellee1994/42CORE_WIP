/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: axlee <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 15:27:02 by axlee             #+#    #+#             */
/*   Updated: 2023/09/20 14:56:56 by axlee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Description: Deletes and frees all elements in a linked list and sets
** the list's pointer to NULL. The provided 'del' function is used to free
** the content of each element.
** 
** @lst: A pointer to a pointer to the first element of the list to be cleared.
** @del: The address of the function used to delete the content of an element.
**        It should take a void pointer to the content as its parameter.
*/

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*old_elem;

	if (!del)
		return ;
	while (*lst)
	{
		del((*lst)->content);
		old_elem = *lst;
		*lst = old_elem->next;
		free(old_elem);
	}
	*lst = NULL;
}

/* Code Purpose:
 *
 * This code is used to clear and free the memory of a linked list,
 * including its elements, using a provided deletion function
 *
 * Code Breakdown:
 *
 * 'ft_lstclear'  takes two parameters:
 *
 * ** -> a pointer to a pointer to the first element of a linked list 'lst'
 * and a function pointer 'del' that is responsible for deleting the content
 * of each element int he list
 *
 * It then checks if the 'del' is valid (NOT NULL). If it is NULL, the
 * function returns immediately, indicating that there's nothing to clear
 * or delete
 *
 * Inside the while loop, the code iterates through the linked list,
 * starting * from the first element *lst
 *
 * For each element in the list:
 *
 * 	It calls the 'del' function, passing the content of the current
 * 	element as parameter. This is to free the memory associated with 
 * 	the content of the element
 *
 * 	It then updates 'old_elem' to point to the current element
 *
 * 	Then it updates the pointer *lst to point to the next element in
 * 	the list
 *
 * 	Finally it frees the memory allocated for the 'old_elm'
 * 	(the current element) using the 'free' function
 *
 * The loop continues until there are no more elements in the list
 * (i.e. *lst becomes NULL)
 *
 * After the loop, it sets *lst to NULL, indicating the entire linked
 * list has been cleared
 */
