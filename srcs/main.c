/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmaia <jmaia@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/13 16:13:07 by jmaia             #+#    #+#             */
/*   Updated: 2022/02/08 17:35:22 by jmaia            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <X11/extensions/Xfixes.h>

#include "goose.h"

int	main(void)
{
	t_xvar					*mlx_ptr;
	t_win_list				*w_list;

	mlx_ptr = mlx_init();
	if (!mlx_ptr)
		return (0);
	w_list = mlx_new_window(mlx_ptr, 100, 100, "Goose");
	if (!mlx_ptr->win_list)
	{
		destroy_everything(mlx_ptr, w_list);
		return (0);
	}
	destroy_everything(mlx_ptr, w_list);
}