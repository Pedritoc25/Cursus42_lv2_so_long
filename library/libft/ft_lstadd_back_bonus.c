/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcabanas <pcabanas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/04 13:43:40 by pcabanas          #+#    #+#             */
/*   Updated: 2024/03/05 10:36:03 by pcabanas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//Add a node at the last list position
void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*last;

	if (!lst || !new)
		return ;
	if (!*lst)
	{
		*lst = new;
		return ;
	}
	last = ft_lstlast(*lst);
	last->next = new;
}

/*int	main(void)
{
	t_list	*node;
	t_list	*node2;
	t_list	*node3;

	node = malloc(sizeof(t_list));
	node2 = malloc(sizeof(t_list));
	node3 = malloc(sizeof(t_list));
	node->content = "1";
	node->next = node2;
	node2->content = "2";
	node2->next = NULL;
	node3->content = "";
	node3->next = NULL;
	if (!node && !node2)
	{
		free(node);
		free(node2);
		free(node3);
		return (0);
	}
	ft_lstadd_back(&node, node3);
	while (node)
	{
		printf("Contenido del node: %s\n", (char *)node->content);
		node = node->next;
	}
	free(node);
	free(node2);
	free(node3);
	return (0);
}*/
