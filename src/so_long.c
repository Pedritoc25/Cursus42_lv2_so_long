/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcabanas <pcabanas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 11:26:26 by pcabanas          #+#    #+#             */
/*   Updated: 2025/01/28 12:16:42 by pcabanas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"
#include "map_structure.h"

//Pass one map as argument and play it if its valid
int main (int argc, char **argv)
{	
	ft_validate_map(argv[1]);
	return 0;
}
