/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcabanas <pcabanas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 12:24:15 by pcabanas          #+#    #+#             */
/*   Updated: 2024/07/01 17:20:29 by pcabanas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//combine elements
char	*ft_strjoin(char const *dst, char const *src)
{
	size_t	i;
	char	*s;

	if (!dst || !src)
		return (NULL);
	s = (char *)ft_calloc((ft_strlen(dst) + ft_strlen(src) + 1), sizeof(char));
	if (!s)
		return (NULL);
	i = 0;
	while (dst[i] != '\0')
	{
		s[i] = dst[i];
		i++;
	}
	while (*src != '\0')
	{
		s[i] = *src;
		i++;
		src++;
	}
	if (s == NULL)
		return (NULL);
	else
		return ((char *)s);
}

/*int	main(void)
{
	char const	s1[]  = "ac";
	char const	s2[]  = "ab";
	char		*result = ft_strjoin(s1, s2);
	printf("%s\n", result);
}*/
