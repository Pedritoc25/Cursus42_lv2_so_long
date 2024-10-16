/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcabanas <pcabanas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 15:14:05 by pcabanas          #+#    #+#             */
/*   Updated: 2024/02/01 15:30:26 by pcabanas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//checks whether char fits into the ASCII character set
int	ft_isascii(int c)
{
	return (c >= 0 && c <= 127);
}
/*#include<stdio.h>
#include<ctype.h>
int	main()
{
	char c = '0';
	printf ("%d\n", ft_isascii(c));
	printf ("%d\n", isascii(c));
}*/
