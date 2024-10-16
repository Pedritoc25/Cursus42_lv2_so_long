/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pyr <pyr@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/06 16:48:23 by pcabanas          #+#    #+#             */
/*   Updated: 2024/10/03 12:00:51 by pyr              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

// calculate the length of a string GNL
size_t	ft_strlen_gnl(char *s)
{
	size_t	len;

	len = 0;
	if (!s)
		return (0);
	while (s[len] != '\0')
		len++;
	return (len);
}

// allocate and free dynamic memory GNL
void	*ft_calloc_gnl(size_t nmemb, size_t size)
{
	size_t			total_bytes;
	void			*result;
	size_t			i;
	unsigned char	*uc;

	if (size != 0 && nmemb > (__SIZE_MAX__ / size))
		return (NULL);
	total_bytes = nmemb * size;
	result = malloc(total_bytes);
	if (result != NULL)
	{
		i = 0;
		uc = (unsigned char *)result;
		while (i < total_bytes)
		{
			uc[i] = '\0';
			i++;
		}
	}
	return (result);
}

// locate a substring in a string GNL
char	*ft_strchr_gnl(char *s, int c)
{
	size_t	i;
	size_t	len;

	if (!s)
		return (NULL);
	i = 0;
	len = ft_strlen_gnl(s);
	while (i <= len)
	{
		if (s[i] == (char)c)
			return ((char *)(s + i));
		i++;
	}
	return (NULL);
}

// combine elements GNL
char	*ft_strjoin_gnl(char *s1, char *s2)
{
	int		size_s1;
	int		size_s2;
	char	*str;
	int		i;
	int		j;

	size_s1 = ft_strlen_gnl(s1);
	size_s2 = ft_strlen_gnl(s2);
	str = ft_calloc_gnl(size_s1 + size_s2 + 1, sizeof(char));
	if (str == NULL)
		return (NULL);
	i = 0;
	j = 0;
	while (i < size_s1)
		str[i++] = s1[j++];
	j = 0;
	while (j < size_s2)
		str[i++] = s2[j++];
	str[i] = '\0';
	return (str);
}

// returns a substring GNL
char	*ft_substr_gnl(char *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*temp;

	i = 0;
	if (!s)
		return (NULL);
	if (!*s || start >= ft_strlen_gnl(s))
	{
		temp = (char *)ft_calloc_gnl(1, sizeof(char));
		if (temp == NULL)
			return (NULL);
		return (temp);
	}
	if (len > ft_strlen_gnl(s + start))
		len = ft_strlen_gnl(s + start);
	temp = (char *)ft_calloc_gnl(len + 1, sizeof(char));
	if (temp == NULL)
		return (NULL);
	while (i < len && s[start + i] != '\0')
	{
		temp[i] = s[start + i];
		i++;
	}
	return (temp);
}
