/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcabanas <pcabanas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/12 17:50:13 by pcabanas          #+#    #+#             */
/*   Updated: 2024/02/12 11:13:50 by pcabanas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//locate character in string starting at end
char	*ft_strrchr(const char *s, int c)
{
	size_t	len;

	len = ft_strlen(s);
	if (c == '\0')
		return ((char *)&s[len]);
	if (len == 0)
		return (NULL);
	while (len > 0)
	{
		if (s[len] == (char)c)
			return ((char *)&s[len]);
		len--;
	}
	if (s[len] == (char)c)
		return ((char *)&s[len]);
	return (NULL);
}
/*#include <string.h>
int	main(void)
{
	char *src = "\0";
 	char *d1 = strrchr(src, 'a');
 	char *d2 = ft_strrchr(src, 'a');
	const char	s[] = "teste";
	const char	t[] = "teste";
	int			c = 'x';
	printf("%s\n%s\n", ft_strrchr(s, c), strrchr(t, c));
	printf("%s\n%s\n", d2, d1);
	return (0);
}*/
