/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcabanas <pcabanas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 10:21:34 by pcabanas          #+#    #+#             */
/*   Updated: 2024/02/08 12:18:13 by pcabanas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//compare two strings up to n bytes
int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t			i;
	unsigned char	u1;
	unsigned char	u2;

	i = 0;
	while (i < n && (s1[i] != '\0' || s2[i] != '\0'))
	{
		u1 = (unsigned char)s1[i];
		u2 = (unsigned char)s2[i];
		if (u1 < u2)
			return (-1);
		else if (u1 > u2)
			return (1);
		else if (u1 == '\0' || u2 == '\0')
			break ;
		i++;
	}
	return (0);
}
/*#include <string.h>
int	main(void)
{
	const char cc[] = "aac";
	const char cc2[] = "abc";
	size_t n = 4;
	printf ("%d\n%d\n",ft_strncmp(cc, cc2, n), strncmp(cc, cc2, n));
}*/