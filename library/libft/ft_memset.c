/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcabanas <pcabanas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 09:38:39 by pcabanas          #+#    #+#             */
/*   Updated: 2024/01/31 18:03:19 by pcabanas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//fill memory with a constant byte
void	*ft_memset(void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*uc;

	uc = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		uc[i] = c;
		i++;
	}
	return (s);
}
/*#include <string.h>
int		main ()
{
	int c = 'A';
	size_t n = 2;

	char s_mod[] = "abc";
    char y_mod[] = "abc";
    printf("%s\n", ft_memset(s_mod, c, n));
    printf("%s\n", memset(y_mod, c, n));
}*/
