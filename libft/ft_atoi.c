/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcabanas <pcabanas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 11:54:22 by pcabanas          #+#    #+#             */
/*   Updated: 2024/02/14 10:19:54 by pcabanas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//convert a string to an longeger
static long	check_spaces(long i, const char *nptr)
{
	while (nptr[i] == ' ' || nptr[i] == '\f' || nptr[i] == '\n'
		|| nptr[i] == '\r' || nptr[i] == '\t' || nptr[i] == '\v')
		i++;
	return (i);
}

static long	get_number(long i, const char *nptr, long *digit, long *number)
{
	while (ft_isdigit(nptr[i]))
	{
		*digit = nptr[i] - '0';
		*number = *number * 10 + *digit;
		i++;
	}
	return (i);
}

static long	check_value(const char nptr, long value, long *i)
{
	if (nptr == '-')
	{
		value = -1;
		*i = *i + 1;
	}
	else if (nptr == '+')
		*i = *i + 1;
	return (value);
}

int	ft_atoi(const char *nptr)
{
	long	i;
	long	digit;
	long	value;
	long	number;

	i = 0;
	value = 1;
	digit = 0;
	number = 0;
	i = check_spaces(i, nptr);
	value = check_value(nptr[i], value, &i);
	i = get_number(i, nptr, &digit, &number);
	return ((int)(number * value));
}
/*#include <stdlib.h>
long	main()
{
	//const char nptr[]= "      +56w0e";
	const char nptr[]= "2";
	prlongf("%i\n%i\n", ft_atoi(nptr), atoi(nptr));
	//prlongf("%i\n", atoi(nptr));
}*/