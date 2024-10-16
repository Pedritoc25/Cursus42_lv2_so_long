/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcabanas <pcabanas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/31 18:01:01 by pcabanas          #+#    #+#             */
/*   Updated: 2024/02/12 10:27:22 by pcabanas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//removes "set" characters from the beginning and end of string
char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	len;
	size_t	i;

	i = 0;
	if (!s1 || !set)
		return (NULL);
	len = ft_strlen(s1);
	if (s1[0] != '\0')
	{
		while (ft_strchr(set, s1[i]) != 0)
			i++;
		while (ft_strrchr(set, s1[len]) != 0)
			len--;
		return (ft_substr(s1, i, (len - i) + 1));
	}
	return (ft_strdup(s1));
}
/*int	main()
{
	char const s1[] = "abc000abc";
	char const set[] = "abc";
	char *result = ft_strtrim(s1, set);
	printf("%s\n", result);
}*/