/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   validate_map.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcabanas <pcabanas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 12:08:04 by pcabanas          #+#    #+#             */
/*   Updated: 2025/01/28 12:16:51 by pcabanas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "so_long.h"
# include "map_structure.h"

/*create an structure with the coordinates info and return the map as a
bidimensional array or matrix*/
//Gestionar error en caso de que no pueda devolver la matriz - BORRAR
char **ft_load_map(int fd)
{
	char	*line;
	char	**matrix;
	size_t	height;
	size_t	width;
	size_t	test;
	
	height = 0;
	width = 0;
	test = 1;
	line = get_next_line(fd, 0);
	if (!line)
		test = 0;
	else
		strlen
	while (test)
	{
		line = get_next_line(fd, 0);
		if (!line)
			break ;
		else if (width != ft_strlen(line))
			ft_print_error(2);
		ft_printf("%s", line);
		free (line);
		line = NULL;
		height++;
	}
	//Guardar contenido de GNL en matriz - BORRAR
	//Comprobar que el mapa es rectangular - BORRAR
	//Comprobar que el mapa esta cerrado - BORRAR
}

/*We read the map. Then check if its follows its requirements.
If its does, We read it again, parse it and aplly the floodfill.
If all of that works well then the map is Valid*/
int	ft_validate_map(char *map_path)
{
	int		fd;
	
	ft_read_map(map_path);
	fd = open(map_path, O_RDONLY);
	if (fd < 0)
        ft_print_error(1);
	ft_load_map(fd);
	close(fd);
	
}
