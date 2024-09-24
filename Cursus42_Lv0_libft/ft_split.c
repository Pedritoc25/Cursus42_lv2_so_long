/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcabanas <pcabanas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/13 14:16:37 by pcabanas          #+#    #+#             */
/*   Updated: 2024/02/28 14:46:13 by pcabanas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	word_count(char const *s, char c)
{
	size_t	len;
	size_t	i;

	len = 0;
	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] != c)
		{
			len++;
			while (s[i] != c && s[i + 1] != '\0')
				i++;
		}
		i++;
	}
	return (len);
}

static char	**free_word_malloc(char	**result, size_t j)
{
	size_t	i;

	i = 0;
	while (i < j)
	{
		free(result[i]);
		i++;
	}
	free(result);
	return (NULL);
}

static char	**separator(char const *s, char c, size_t len, char **result)
{
	size_t	word_len;
	size_t	i;
	size_t	j;

	word_len = 0;
	i = 0;
	j = 0;
	while (j < len && s[i] != '\0')
	{
		if (s[i] != c)
		{
			while (s[i] != c && s[i] != '\0')
			{
				word_len++;
				i++;
			}
			result[j] = ft_substr(s, i - word_len, word_len);
			if (!result[j])
				return (free_word_malloc(result, j));
			word_len = 0;
			j++;
		}
		i++;
	}
	return (result);
}

//split a string into a series of tokens based on a particular delimiter.
char	**ft_split(char const *s, char c)
{
	size_t	len;
	size_t	word_len;
	char	**result;

	word_len = 0;
	if (!s)
		return (NULL);
	len = word_count(s, c);
	result = (char **)ft_calloc(len + 1, sizeof(char *));
	if (!result)
		return (NULL);
	return (separator(s, c, len, result));
}

/*int	main(void)
{
	char const	*s = "hello!";
	char		c = ' ';
	char **res = ft_split(s, c);
	int i = 0;
	while (res[i])
	{
		printf("Resultado: %s\n", res[i]);
		i++;
	}
	return (0);
}*/
