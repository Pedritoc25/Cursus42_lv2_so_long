/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read_map.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcabanas <pcabanas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 12:09:57 by pcabanas          #+#    #+#             */
/*   Updated: 2024/11/20 12:35:03 by pcabanas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "../so_long.h"
# include "map_structure.h"

//check if map file ends in .ber
void	ft_read_map(char *map_path)
{
	size_t path_length;
	
	if (!map_path)
		ft_print_error(0);
	path_length = ft_strlen(map_path);
	if (path_length < 4)
		ft_print_error(0);
	if (map_path[path_length - 4] != '.' || map_path[path_length - 3] != 'b'
		|| map_path[path_length - 2] != 'e' || map_path[path_length - 1] != 'r')
		ft_print_error(0);
}
