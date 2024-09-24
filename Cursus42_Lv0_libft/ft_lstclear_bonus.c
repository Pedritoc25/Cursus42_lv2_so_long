/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcabanas <pcabanas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/05 10:37:12 by pcabanas          #+#    #+#             */
/*   Updated: 2024/03/07 15:36:20 by pcabanas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//Deletes and frees the given node and every succesor of that node
void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*current;
	t_list	*temp;

	if (!lst || !del)
		return ;
	current = *lst;
	while (current)
	{
		temp = current;
		current = current->next;
		ft_lstdelone(temp, del);
	}
	*lst = NULL;
}

/*static void	free_string(void *content)
{
	content = NULL;
}

int	main(void)
{
	t_list	*node;
	t_list	*node2;
	t_list	*node3;

	node = malloc(sizeof(t_list));
	node2 = malloc(sizeof(t_list));
	node3 = malloc(sizeof(t_list));
	if (!node && !node2 && !node3)
	{
		free(node);
		free(node2);
		free(node3);
		return (0);
	}
	node->content = "1";
	node->next = node2;
	node2->content = "2";
	node2->next = node3;
	node3->content = "3";
	node3->next = NULL;
	ft_lstclear(&node, &free_string);
	return (0);
}*/
