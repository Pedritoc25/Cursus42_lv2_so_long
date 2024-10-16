/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone_bonus.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcabanas <pcabanas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/04 16:57:45 by pcabanas          #+#    #+#             */
/*   Updated: 2024/03/06 11:26:07 by pcabanas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//Free's the memory of the node's content using the function 'del'
void	ft_lstdelone(t_list *lst, void (*del)(void*))
{
	if (!lst || !del)
		return ;
	del(lst->content);
	free(lst);
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
	ft_lstdelone(node, &free);
	ft_lstdelone(node2, &free);
	ft_lstdelone(node3, &free);
	return (0);
}*/
