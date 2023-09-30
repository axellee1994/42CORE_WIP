/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: axlee <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 15:36:17 by axlee             #+#    #+#             */
/*   Updated: 2023/09/20 15:17:59 by axlee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** @lst: The pointer to the first element of the linked list.
** @f:   The pointer to the function that takes a void pointer (void *) as a
** parameter and returns void.
*/

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	if (!f)
		return ;
	while (lst)
	{
		f(lst->content);
		lst = lst->next;
	}
}

/*void	print_content(void *content)
{
	printf("Content: %s\n", (char *)content);
}

int	main(void)
{
	t_list	*lst;

	lst = ft_lstnew("Hello");
	ft_lstadd_back(&lst, ft_lstnew("World"));
	ft_lstiter(lst, print_content);
}*/

/* Code Purpose:
 *
 * This code is designed to apply a given function 'f' to the content of 
 * each element in a linked list
 *
 * Code Breakdown:
 *
 * The 'ft_lstiter' function takes two parameters: a pointer to the first
 * element of a linked list ('lst') and a pointer to a function ('f') that 
 * takes a void pointer ('void *) as a parameter and returns void
 *
 * The function checks if the function pointer 'f' is not null. If it's
 * null, the functions returns earlu
 *
 * It then iterates through the linked list ('lst') using a while loop
 *
 * During each iteration, it calls the function 'f' wit the content of 
 * the current element as its parameter:
 * 	
 * 	This allows to perfrom a specific action on the content of each
 * 	element in the list
 *
 * After processing an element, it moves to the next element in the list
 * ('lst = lst -> next) and continues until the end of the list is 
 * reached.
 *
 * Main Function:
 *
 * A linked likst ('lst') is created with two elements :"Hello" and 
 * "World" 
 *
 * Then it adds another element to the end of the linked list using
 * 'ft_lstadd_back' function to append a new node containing the string
 * "World" to the list
 *
 * Fially, it iterates through each element of the linked list using 
 * the 'ft_lstiter' funciton, which takes a pointer to the linked list
 * 'lst' and a function pointer 'print_content' as arguements
 *
 * The 'print_content' function that takes a pointer to each 
 * content of each node and prints it
 */
