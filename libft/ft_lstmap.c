/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: axlee <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 15:38:56 by axlee             #+#    #+#             */
/*   Updated: 2023/09/20 15:58:56 by axlee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** @lst: The original linked list to map.
** @f: The function to apply to each element of 'lst'.
** @del: The function used to free the content in case of failure.
**
** Return value: A new linked list containing the results of applying 'f' to
** each element of 'lst', or NULL if memory allocation fails.
*/

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_lst;
	t_list	*new_elem;
	void	*current;

	if (!f || !del)
		return (NULL);
	new_lst = NULL;
	while (lst)
	{
		current = f(lst->content);
		new_elem = ft_lstnew(current);
		if (!new_elem)
		{
			del(current);
			ft_lstclear(&new_lst, del);
			return (NULL);
		}
		ft_lstadd_back(&new_lst, new_elem);
		lst = lst->next;
	}
	lst = NULL;
	return (new_lst);
}

/* Code Purpose:
 *
 * This code creates a new linked list by applying a given function to each 
 * element of an input list. It also handles memory allocation and clean up
 *
 * Code Breakdown:
 *
 * The 'ft_lstmap' function takes three parameters:
 * lst (the original linked list),
 * f (a function to apply to each element),
 * and del (a function for freeing content in case of failure).
 *
 * It initializes a new linked list new_lst as NULL.
 *
 * It then iterates through each element of the input list lst.
 *
 * For each element, it applies the function f to its content,
 * storing the result in current.
 *
 * It creates a new element new_elem in the new_lst using the
 * content from current.
 *
 * If memory allocation for new_elem fails, it frees current,
 * clears the new_lst, and returns NULL to indicate failure.
 *
 * Otherwise, it adds new_elem to the end of new_lst.
 *
 * After processing all elements, it sets lst to NULL
 * (the original list is not modified), and returns the new linked list new_lst.
 */
