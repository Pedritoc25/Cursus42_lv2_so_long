/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcabanas <pcabanas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/26 10:39:26 by pcabanas          #+#    #+#             */
/*   Updated: 2024/03/07 17:09:15 by pcabanas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//Send the character 'c' to the file descriptor specified
void	ft_putchar_fd(char c, int fd)
{
	write(fd, (const void *)&c, 1);
}

/*#include <fcntl.h>
int	main(void)
{
	int fd = open("output.txt", O_WRONLY | O_CREAT, 0666);
	char	c = 'H';
	ft_putchar_fd(c, fd);
	close(fd);
	return (0);
}*/
