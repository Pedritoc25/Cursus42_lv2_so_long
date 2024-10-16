/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcabanas <pcabanas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/05 10:41:06 by pcabanas          #+#    #+#             */
/*   Updated: 2024/03/07 16:24:35 by pcabanas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//Copies a list, applying 'f' function to each node and freeing if needed
t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_list;
	t_list	*new_node;

	if (!lst || !f || !del)
		return (NULL);
	new_list = NULL;
	while (lst)
	{
		new_node = ft_lstnew(NULL);
		if (!new_node)
		{
			ft_lstclear(&new_list, del);
			return (NULL);
		}
		new_node->content = f(lst->content);
		ft_lstadd_back(&new_list, new_node);
		lst = lst->next;
	}
	return (new_list);
}

/*static void	*transform_int(void *content)
{
	char	*str;
	int		n;

	n = *((int *)content);
	str = ft_itoa(n);
	return (str);
}

static void	free_string(void *content)
{
	free(content);
}

int	main(void)
{
	t_list	*list;
	t_list	*new_list;
	int		numbers[] = {1, 2, 3, 4, 5};
	int		i;
	// Create a linked list containing integers
	list = NULL;
	for (i = 0; i < 5; i++)
		ft_lstadd_back(&list, ft_lstnew(&numbers[i]));
	// Map the content of each node to strings
	new_list = ft_lstmap(list, &transform_int, &free_string);
	// Print the transformed content of each node in the new list
	while (new_list)
	{
		printf("%s\n", (char *)new_list->content);
		new_list = new_list->next;
	}
	ft_lstclear(&list, NULL);
	ft_lstclear(&new_list, &free_string);
	return (0);
}*/
