/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcabanas <pcabanas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/04 10:38:14 by pcabanas          #+#    #+#             */
/*   Updated: 2024/03/05 09:33:31 by pcabanas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//Size of the list
int	ft_lstsize(t_list *lst)
{
	int	count;

	if (!lst)
		return (0);
	count = 0;
	while (lst)
	{
		count++;
		lst = lst->next;
	}
	return (count);
}

/*int	main(void)
{
	// Create three nodes
	t_list	*node1 = malloc(sizeof(t_list));
	t_list	*node2 = malloc(sizeof(t_list));
	t_list	*node3 = malloc(sizeof(t_list));

	if (!node1 || !node2 || !node3)
	{
		perror("Memory allocation failed");
		return 1;
	}

	// Initialize content and next pointers
	node1->content = "Node 1 content";
	node1->next = node2;

	node2->content = "Node 2 content";
	node2->next = node3;

	node3->content = "Node 3 content";
	node3->next = NULL;

	// Calculate the size of the list
	int size = ft_lstsize(node1);

	// Print the size of the list
	printf("Size of the list: %d\n", size);

	// Free memory
	free(node1);
	free(node2);
	free(node3);

	return (0);
}*/
