/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcabanas <pcabanas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 15:24:28 by pcabanas          #+#    #+#             */
/*   Updated: 2024/02/28 15:04:27 by pcabanas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//copy memory area
void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*uc_src;
	unsigned char	*uc_dest;

	i = 0;
	uc_dest = (unsigned char *)dest;
	uc_src = (unsigned char *)src;
	if (!(src || dest))
		return (NULL);
	while (i < n)
	{
		uc_dest[i] = uc_src[i];
		i++;
	}
	return (dest);
}
/*#include <string.h>
int	main ()
{
	const char src[] = "1234";
	char dest[] = "567";
	const char src2[] = "1234";
	char dest2[] = "567";
	size_t n = 3;

	ft_memcpy(dest, src, n);
	memcpy(dest2, src2, n);

	printf ("%s\n%s\n", dest, dest2);
}*/
