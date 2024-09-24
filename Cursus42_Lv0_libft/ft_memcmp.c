/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcabanas <pcabanas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 10:32:23 by pcabanas          #+#    #+#             */
/*   Updated: 2024/02/28 12:39:45 by pcabanas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//compare memory areas
int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t				i;
	unsigned const char	*cc;
	unsigned const char	*cc2;

	i = 0;
	cc = (unsigned const char *)s1;
	cc2 = (unsigned const char *)s2;
	while (i < n)
	{
		if (cc[i] != cc2[i])
			return (cc[i] - cc2[i]);
		i++;
	}
	return (0);
}
/*#include <string.h>
int	main()
{
	const char s[] = "abcdef";
	const char s2[] = "abc\375xx";
	size_t n = 5;

	printf("%d\n%d\n", ft_memcmp(s, s2, n), memcmp(s, s2, n));
}*/