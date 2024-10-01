/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcabanas <pcabanas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/12 12:02:07 by pcabanas          #+#    #+#             */
/*   Updated: 2024/01/31 17:52:00 by pcabanas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//convert a char to lowercase
int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
		c += 32;
	return (c);
}
/*#include <ctype.h>
#include <stdio.h>

int	main(void)
{
	char	c = 'A';
	char	c2 = 'B';

	printf ("%c\n", ft_tolower(c));
	printf ("%c\n", tolower(c2));
}*/
