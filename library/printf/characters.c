/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   characters.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pyr <pyr@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/13 16:34:50 by pcabanas          #+#    #+#             */
/*   Updated: 2024/10/03 11:59:30 by pyr              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

//calculate the length of a string
size_t	ft_strlen_printf(const char *s)
{
	size_t	len;

	len = 0;
	while (s[len] != '\0')
		len++;
	return (len);
}

//Prints a character and returns '1' int
int	ft_putchar_printf(char c)
{
	return (write(1, &c, 1));
}

//Prints a string and returns counter
int	ft_putstr_printf(char *s)
{
	if (!s)
		return (write(1, "(null)", 6));
	return (write(1, s, ft_strlen_printf(s)));
}
