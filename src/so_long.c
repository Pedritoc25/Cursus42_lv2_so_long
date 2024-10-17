/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcabanas <pcabanas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 11:26:26 by pcabanas          #+#    #+#             */
/*   Updated: 2024/10/17 17:59:09 by pcabanas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

/*void parsing_map()
{
	all_collectables_collected
	on_wall
	map_valid
	map_invalid
	on_collectable
	collectables
	on exit
	exits
	replace_current_position_with_wall
	one_of_the_four_adjacent_directions_is_posible
}*/

/*char** read_map(char **map)
{
		get_next_line(map, 1);
}*/

size_t test( char *s)
{
	return (ft_strlen_gnl(s));
}

int main(int argc, char **argv)
{
	(void)argc;
	//read_map(argv[1]);
	size_t tests;
	tests = test(argv[1]);
	ft_printf("%d\n", tests);
	
}