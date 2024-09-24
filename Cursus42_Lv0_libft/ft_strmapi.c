/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcabanas <pcabanas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/21 16:38:19 by pcabanas          #+#    #+#             */
/*   Updated: 2024/02/22 12:04:26 by pcabanas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*static char	f(unsigned int i, char c)
{
	char s;
	s = ft_toupper(c);
	return (s);
}*/

//lets you aplly the same function (f) to the each element of an array
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*s2;

	if (!s)
		return (NULL);
	s2 = ft_calloc(ft_strlen(s)+1, sizeof(char));
	if (!s2)
		return (NULL);
	i = 0;
	while (s[i])
	{
		s2[i] = (*f)(i, (char)s[i]);
		i++;
	}
	return ((char *)s2);
}

/*int	main(void)
{
	char const	s[] = "hola";
	printf("%s\n", ft_strmapi(s, (*f)));
	return (0);
}*/
