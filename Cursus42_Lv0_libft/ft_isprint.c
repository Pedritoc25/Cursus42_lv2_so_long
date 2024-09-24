/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcabanas <pcabanas@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 16:52:12 by pcabanas          #+#    #+#             */
/*   Updated: 2024/01/09 17:02:19 by pcabanas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//checks for any printable character including space
int	ft_isprint(int c)
{
	return (c >= 32 && c <= 126);
}
/*#include<stdio.h>
#include<ctype.h>
int	main()
{
	char c = '~';
	printf ("%d\n", isprint(c));
	printf ("%d\n", ft_isprint(c));
}*/
