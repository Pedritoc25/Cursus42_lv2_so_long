/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcabanas <pcabanas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/06 15:53:33 by pcabanas          #+#    #+#             */
/*   Updated: 2024/10/08 15:23:29 by pcabanas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 42
# endif

# include <unistd.h>
# include <fcntl.h>
# include <stdlib.h>
# include <stddef.h>

char	*get_next_line(int fd, int flag);

size_t	ft_strlen_gnl(char *s);

void	*ft_calloc_gnl(size_t nmemb, size_t size);

char	*ft_strchr_gnl(char *s, int c);

char	*ft_strjoin_gnl(char *dst, char *src);

char	*ft_substr_gnl(char *s, unsigned int start, size_t len);

#endif