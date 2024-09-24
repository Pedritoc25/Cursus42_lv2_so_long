/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcabanas <pcabanas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/05 10:39:19 by pcabanas          #+#    #+#             */
/*   Updated: 2024/03/05 12:33:28 by pcabanas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*static void	print_content_function(void *content)
{
	printf("%s\n", (char *)content); // Assuming content is a string
}*/

//Apply 'f' function to the content of each node
void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	if (!lst || !f)
		return ;
	while (lst)
	{
		f(lst->content);
		lst = lst->next;
	}
}
/*int main(void)
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
		free(node);
		free(node2);
		free(node3);
		return (1);
	}
	node->content = "1";
	node->next = node2;
	node2->content = "2";
	node2->next = node3;
	node3->content = "3";
	node3->next = NULL;
	ft_lstiter(node, &print_content_function);
	free(node);
	free(node2);
	free(node3);
	//ft_lstclear(&node, &free);
	return (0);
}*/
