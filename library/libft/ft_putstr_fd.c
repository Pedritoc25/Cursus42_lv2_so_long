/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcabanas <pcabanas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/26 13:14:24 by pcabanas          #+#    #+#             */
/*   Updated: 2024/03/07 17:13:57 by pcabanas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//Send the string 's' to the file descriptor specified
void	ft_putstr_fd(char *s, int fd)
{
	if (!s || fd < 0)
		return ;
	write (fd, s, ft_strlen(s));
}
/*#include <fcntl.h>
int	main(void)
{
	int fd = open("output.txt", O_WRONLY | O_CREAT, 0666);
	char	s[] = "Hola";
	ft_putstr_fd(s, fd);
	close(fd);
	return (0);
}*/
