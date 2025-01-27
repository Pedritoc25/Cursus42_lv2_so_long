/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcabanas <pcabanas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/15 12:28:09 by pcabanas          #+#    #+#             */
/*   Updated: 2024/11/20 12:32:20 by pcabanas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

static const char	*g_error_list[2] = {"Invalid map format",
		"Can't open file"};

/*prints the error text associated with its index
0 - Invalid map format
1 - Can't open file
*/
int ft_print_error(int i)
{
	ft_printf("Error\n%s\n", g_error_list[i]);
	exit(1);
}