/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcabanas <pcabanas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/12 10:48:07 by pcabanas          #+#    #+#             */
/*   Updated: 2024/02/28 15:07:19 by pcabanas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//copy memory area and prevents overlapping
#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*uc_dest;

	i = 0;
	uc_dest = (unsigned char *)dest;
	if (!(dest || src))
		return (NULL);
	if (uc_dest <= (unsigned char *)src || uc_dest >= (unsigned char *)src + n)
	{
		while (i < n)
		{
			uc_dest[i] = ((unsigned char *)src)[i];
			i++;
		}
	}
	else
	{
		while (n > 0)
		{
			n--;
			uc_dest[n] = ((unsigned char *)src)[n];
		}
	}
	return (dest);
}
/*#include <string.h>
int	main()
{
	const char src[] = "defg";
	char dest[] = "abc";
	const char src2[] = "defg";
	char dest2[] = "abc";
	size_t n = 4;

	ft_memmove(dest, src, n);
	memmove(dest2, src2, n);

	printf("%s\n%s\n", dest, dest2);
}*/
