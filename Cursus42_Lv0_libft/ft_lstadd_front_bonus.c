/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front_bonus.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcabanas <pcabanas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/04 09:55:37 by pcabanas          #+#    #+#             */
/*   Updated: 2024/03/04 16:08:26 by pcabanas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//Add a node at the first list position
void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (!lst && !new)
		return ;
	new->next = *lst;
	*lst = new;
}

/*int main(void)
{
	// Create a new node
	t_list	*new_node = malloc(sizeof(t_list));
	if (!new_node)
	{
		perror("Memory allocation failed");
		return (1);
	}
	new_node->content = "New node content";
	new_node->next = NULL;
	// Create a list pointer
	t_list *list = NULL;
	// Add the new node to the front of the list
	ft_lstadd_front(&list, new_node);
	// Check if the new node has been added to the list
	if (list == NULL)
		printf("List is empty after adding node.\n");
	else
		printf("Content of the first node in the list: %s\n",
			(char *)list->content);
	// Free the memory allocated for the new node
	free(new_node);
	return (0);
}*/
