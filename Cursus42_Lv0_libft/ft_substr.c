/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcabanas <pcabanas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 13:23:14 by pcabanas          #+#    #+#             */
/*   Updated: 2024/02/28 14:34:51 by pcabanas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//returns a substring
char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*temp;

	i = 0;
	if (!s)
		return (NULL);
	if (!*s || start >= ft_strlen(s))
	{
		temp = (char *)ft_calloc(1, sizeof(char));
		if (temp == NULL)
			return (NULL);
		return (temp);
	}
	if (len > ft_strlen(s + start))
		len = ft_strlen(s + start);
	temp = (char *)ft_calloc(len + 1, sizeof(char));
	if (temp == NULL)
		return (NULL);
	while (i < len && s[start + i] != '\0')
	{
		temp[i] = s[start + i];
		i++;
	}
	return (temp);
}
/*int	main(void)
{
	char const	s[] = "";
	unsigned int	start = 1;
	size_t		len = 1;
	char		*result;

	printf("Original string: \"%s\"\n", s);
	printf("Start index: %u\n", start);
	printf("Length: %zu\n", len);

	result = ft_substr(s, start, len);
	if (result == NULL)
	{
		printf("Error: Substring creation failed.\n");
		return (1);
	}

	printf("Substring: \"%s\"\n", result);
	free(result);

	return (0);
}*/
