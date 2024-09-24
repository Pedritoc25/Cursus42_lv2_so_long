/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcabanas <pcabanas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/12 11:46:13 by pcabanas          #+#    #+#             */
/*   Updated: 2024/01/31 17:52:29 by pcabanas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//convert a char to uppercase
int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		c -= 32;
	return (c);
}
/*#include <ctype.h>
#include <stdio.h>

int	main(void)
{
	char	c = 'a';
	char	c2 = 'y';

	printf ("%c\n", ft_toupper(c));
	printf ("%c\n", toupper(c2));
}*/
