/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcabanas <pcabanas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/04 13:00:58 by pcabanas          #+#    #+#             */
/*   Updated: 2024/03/04 13:40:47 by pcabanas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//node that returns the last content
t_list	*ft_lstlast(t_list *lst)
{
	if (!lst)
		return (NULL);
	while (lst->next)
		lst = lst->next;
	return (lst);
}

/*int	main(void)
{
	t_list	*node;
	t_list	*node2;
	t_list	*node3;

	node = malloc(sizeof(t_list));
	node2 = malloc(sizeof(t_list));
	node3 = malloc(sizeof(t_list));

	if (!node || !node2 || !node3)
	{
		perror("Memory allocation failed");
		return (1);
	}

	node->content = "1";
	node->next = node2;
	node2->content = "2";
	node2->next = node3;
	node3->content = "3";
	node3->next = NULL;

	// Print the content of the last node
	t_list	*last_node = ft_lstlast(node);
	if (last_node)
		printf("Content of the last node: %s\n", (char *)last_node->content);
	else
		printf("List is empty!\n");

	// Free memory
	free(node);
	free(node2);
	free(node3);

	return (0);
}*/
