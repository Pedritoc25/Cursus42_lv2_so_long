/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcabanas <pcabanas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/26 13:23:22 by pcabanas          #+#    #+#             */
/*   Updated: 2024/03/07 17:10:09 by pcabanas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

///Send the string 's' to the given file descriptor, followed by a line break.
void	ft_putendl_fd(char *s, int fd)
{
	if (!s || fd < 0)
		return ;
	write (fd, s, ft_strlen(s));
	write (fd, "\n", 1);
}

/*#include <fcntl.h>
int	main(void)
{
	int fd = open("output.txt", O_WRONLY | O_CREAT, 0666);
	char	s[] = "Hola";
	ft_putendl_fd(s, fd);
	close(fd);
	return (0);
}*/
