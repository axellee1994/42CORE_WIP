/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: axlee <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 15:08:52 by axlee             #+#    #+#             */
/*   Updated: 2023/09/20 11:51:26 by axlee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Description: Finds the last node in a linked list.
** 
** @lst: A pointer to the head of the linked list.
** 
** Return value: Returns a pointer to the last node in the linked list.
** If the list is empty (head is NULL), it returns NULL.
*/

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	if (!lst)
		return (NULL);
	while (lst->next)
		lst = lst->next;
	return (lst);
}

/*int		main(void)
{
	char	str[] = "test";

	t_list	*elem1;
	t_list	*elem2;
	t_list	*elem3;
	t_list	*elem4;
	t_list	*elem5;
	t_list	*elem6;
	t_list	*ret;

	if(!(elem1 = malloc(sizeof(t_list))))
		return (0);
	if(!(elem2 = malloc(sizeof(t_list))))
		return (0);
	if(!(elem3 = malloc(sizeof(t_list))))
		return (0);
	if(!(elem4 = malloc(sizeof(t_list))))
		return (0);
	if(!(elem5 = malloc(sizeof(t_list))))
		return (0);
	if(!(elem6 = malloc(sizeof(t_list))))
		return (0);

	elem1->next = elem2;
	elem2->next = elem3;
	elem3->next = elem4;
	elem4->next = elem5;
	elem5->next = elem6;
	elem6->next = NULL;

	elem6->content = (void *)str;
	ret = ft_lstlast(elem1);
	printf("\n%s\n", (char *)ret->content);
}*/

/* Code Purpose:
 *
 * This function is used to find the last node in a linked list
 *
 * Code Breakdown:
 *
 * The function checks if the linked list 'lst' is empty (head is NULL)
 *
 * If it's empty, it returns NULL
 *
 * It then iterates through the linked list using a 'while' loop
 * until it reaches the last node (the node with no 'next' pointer)
 *
 * It then returns a pointer to the last node
 *
 * Main Function:
 *
 * There is pointers to six 't_list' elements ('elem1 to elem6') and 
 * a pointer 'ret' to store the result of 'ft_last'
 *
 * It then allocates memory for siz 't_list' elements ('elem1 to 'elem6')
 * using 'malloc'
 *
 * Then it links these elements together to form a linked list
 *
 * Then it assigns the content of the last element ('elem6') to the string
 * 'test'
 *
 * It calls 'ft_lstlast' with the head of the linked list ('elem1') and 
 * stores the result in 'ret'
 *
 * Then it finally prints the content of the last node using 'printf')
 */
