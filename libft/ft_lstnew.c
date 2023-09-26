/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: axlee <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 17:56:24 by axlee             #+#    #+#             */
/*   Updated: 2023/09/20 10:23:24 by axlee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Description: Creates a new linked list element with the provided content.
** @content: The data to be stored in the new element.
** Return value: Returns a pointer to the newly created element.
**               Returns NULL if memory allocation fails.
*/

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*list;

	list = malloc(sizeof(*list));
	if (!list)
		return (NULL);
	list->content = content;
	list->next = NULL;
	return (list);
}

/*int	main(void)
{
	char	str[50];
	t_list	*elem;

	strcpy(str, "Hello World");
	elem = ft_lstnew((void *)str);
	printf("\n%s\n", (char *) elem->content);
	return (0);
}*/

/* Code Purpose:
 *
 * This code creates a new element for a linked list with the provided
 * content
 *
 * Code Breakdown:
 *
 * It declares a pointer to a structure of type t_list
 *
 * Then it allocates memory for the new list element
 *
 * If memory allocation fails, it return NULL
 *
 * Then it set the content of the new element. If it's the only element,
 * it set the next pointer to NULL
 *
 * Then it returns a pointer to the newly created element
 *
 * Main Function:
 *
 * It shows how to create an element with the content "Hello World"
 * and prints the content out.
 */
