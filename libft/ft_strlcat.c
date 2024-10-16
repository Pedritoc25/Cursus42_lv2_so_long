/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcabanas <pcabanas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 10:43:05 by pcabanas          #+#    #+#             */
/*   Updated: 2024/03/07 12:43:21 by pcabanas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//size-bounded string copying and concatenation appends up to NUL-terminated
size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	dst_len;
	size_t	src_len;

	i = 0;
	if (size == 0 && (!dst || !src))
		return (0);
	src_len = ft_strlen(src);
	if (size == 0)
		return (src_len);
	dst_len = ft_strlen(dst);
	if (size <= dst_len)
		return (size + src_len);
	while (src[i] != '\0' && i + dst_len < size - 1)
	{
		dst[dst_len + i] = src[i];
		i++;
	}
	if (dst_len < size)
		dst[dst_len + i] = '\0';
	return (dst_len + src_len);
}
/*#include <string.h>
int	main(void)
{
	char dst[20] = "pqrstuvwxyz";
	const char src[] = "abcd";
	size_t size = sizeof(dst);
	printf("%lu\n%lu\n", ft_strlcat(dst, src, size), strlcat(dst, src, size));
}*/