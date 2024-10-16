/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcabanas <pcabanas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 10:43:19 by pcabanas          #+#    #+#             */
/*   Updated: 2024/01/29 10:55:34 by pcabanas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//check whether a character is alphabetical
int	ft_isalpha(int c)
{
	return ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'));
}
/*#include<stdio.h>
#include<ctype.h>
int	main()
{
	char	c= 'z';
	int		condition = ft_isalpha(c);
	int		condition2 = isalpha(c);
	printf ("%d\n", condition);
	printf ("%d\n", condition2);
}*/
