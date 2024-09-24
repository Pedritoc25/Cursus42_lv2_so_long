/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcabanas <pcabanas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/12 12:10:15 by pcabanas          #+#    #+#             */
/*   Updated: 2024/02/01 16:28:42 by pcabanas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//locate character in string
char	*ft_strchr(const char *s, int c)
{
	size_t	i;
	size_t	len;

	i = 0;
	len = ft_strlen(s);
	while (i <= len)
	{
		if (s[i] == (char)c)
			return ((char *)(s + i));
		i++;
	}
	return ((void *)0);
}
/*#include <stdio.h>
#include <string.h>

int	main(void)
{
	const char	s[] = "Hey man";
	int			c = 'e';
	printf ("%s\n%s\n", ft_strchr(s, c), strchr(s, c));
}*/