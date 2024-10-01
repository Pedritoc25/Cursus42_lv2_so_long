/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcabanas <pcabanas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 11:45:34 by pcabanas          #+#    #+#             */
/*   Updated: 2024/02/08 11:54:29 by pcabanas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//size-bounded string copying and concatenation up to size - 1
size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	src_length;

	i = 0;
	src_length = 0;
	if (size > 0)
	{
		while (i < size - 1 && src[i] != '\0')
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] = 0;
	}
	while (src[src_length] != '\0')
		src_length++;
	return (src_length);
}
/*#include <string.h>
int	main()
{
	char s[] = "abc";
	const char s2[] = "def";
	size_t n = 3;

	printf("%zu\n%zu\n", ft_strlcpy(s, s2, n), strlcpy(s, s2, n));
}*/