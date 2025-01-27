/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map_structure.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcabanas <pcabanas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 17:35:02 by pcabanas          #+#    #+#             */
/*   Updated: 2024/11/20 12:47:45 by pcabanas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MAP_STRUCTURE_H
# define MAP_STRUCTURE_H

# include "../../libft/libft.h"

int		ft_validate_map(char *map);
void	ft_read_map(char *map_path);
char	**ft_load_map(int fd);

#endif