/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcabanas <pcabanas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 11:32:06 by pcabanas          #+#    #+#             */
/*   Updated: 2024/01/31 16:30:41 by pcabanas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//zero a byte string
void	ft_bzero(void *s, size_t n)
{
	size_t			i;
	unsigned char	*uc;

	i = 0;
	uc = (unsigned char *)s;
	while (i < n)
	{
		uc[i] = '\0';
		i++;
	}
}
/*#include <strings.h>
int	main ()
{
	char s[] = "abc";
	char y[] = "abc";
	size_t n = 2;
	ft_bzero(s+1, n);
	bzero(y+1, n);

	printf("%s\n", s);
	printf("%s\n", y);
}*/
