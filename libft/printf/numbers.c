/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   numbers.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcabanas <pcabanas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/18 20:44:58 by pcabanas          #+#    #+#             */
/*   Updated: 2024/09/30 12:30:11 by pcabanas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

/**
 * prints and integer and counts its digits
 * @param arg the number
 * @result the digit counter
*/
int	ft_putnbr_printf(int arg)
{
	int	count;

	count = 0;
	if (arg == -2147483648)
		count += write (1, "-2147483648", 11);
	else if (arg < 0)
	{
		count += write (1, "-", 1);
		count += ft_putnbr_printf(-arg);
	}
	else if (arg > 9)
	{
		count += ft_putnbr_printf(arg / 10);
		count += ft_putnbr_printf(arg % 10);
	}
	else
		count += ft_putchar_printf(arg + '0');
	return (count);
}

/**
 * prints an unsigned integer and counts its digits
 * @param arg the unsigned number
 * @result the digit counter
*/
int	ft_unsg_putnbr(unsigned int arg)
{
	int	count;

	count = 0;
	if (arg > 9)
	{
		count += ft_putnbr_printf(arg / 10);
		count += ft_putnbr_printf(arg % 10);
	}
	else
		count += ft_putchar_printf(arg + '0');
	return (count);
}

//
int	ft_puthex(unsigned int arg, char *base)
{
	int	count;

	count = 0;
	if (arg < 16)
		count += ft_putchar_printf(base[arg]);
	else
	{
		count += ft_puthex(arg / 16, base);
		count += ft_putchar_printf(base[arg % 16]);
	}
	return (count);
}

//Prints a pointer and returns counter
int	ft_pointer(size_t point)
{
	int		count;
	char	*base;

	count = 0;
	base = "0123456789abcdef";
	if (point < 16)
		count += ft_putchar_printf(base[point]);
	else
	{
		count += ft_pointer(point / 16);
		count += ft_putchar_printf(base[point % 16]);
	}
	return (count);
}
