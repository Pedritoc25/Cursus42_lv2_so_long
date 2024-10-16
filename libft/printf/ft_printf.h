/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcabanas <pcabanas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 11:40:53 by pcabanas          #+#    #+#             */
/*   Updated: 2024/09/30 11:03:23 by pcabanas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdarg.h>

int	ft_printf(const char *format, ...);
int	ft_check_flags(const char flag, va_list ptr);

int	ft_putchar_printf(char c);
int	ft_putstr_printf(char *s);
int	ft_pointer(size_t point);

int	ft_putnbr_printf(int arg);
int	ft_unsg_putnbr(unsigned int arg);
int	ft_puthex(unsigned int arg, char *dictionary);

#endif