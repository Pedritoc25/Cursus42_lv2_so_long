/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcabanas <pcabanas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 11:31:11 by pcabanas          #+#    #+#             */
/*   Updated: 2024/01/29 11:00:56 by pcabanas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//check whether a character is a digit
int	ft_isdigit(int c)
{
	return (c >= '0' && c <= '9');
}
/*#include<stdio.h>
#include<ctype.h>
int main()
{
	char c = '0';
	printf("%d\n", ft_isdigit(c));
	printf("%d\n", isdigit(c));
}*/
