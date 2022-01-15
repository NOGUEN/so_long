/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   draw_tiles.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: noguen <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/15 23:14:18 by noguen            #+#    #+#             */
/*   Updated: 2022/01/15 23:18:44 by noguen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	draw_put_image_tile(t_all *s, int y, int x)
{
	if (s->map.sup[y][x] == '1')
	{
		draw_put_image(s, s->tex.sand, y * 64, x * 64);
		draw_put_image(s, s->tex.wall, y * 64, x * 64);
	}
	else if (s->map.sup[y][x] == '0')
		draw_put_image(s, s->tex.sand, y * 64, x * 64);
	else if (s->map.sup[y][x] == 'C')
	{
		draw_put_image(s, s->tex.sand, y * 64, x * 64);
		draw_put_image(s, s->tex.object, y * 64, x * 64);
	}
	else if (s->map.sup[y][x] == 'E')
	{
		draw_put_image(s, s->tex.sand, y * 64, x * 64);
		draw_put_image(s, s->tex.exit[s->map.exit_frame / 8], y * 64, x * 64);
	}
	else
		draw_put_image(s, s->tex.sand, y * 64, x * 64);
}

void	draw_tiles(t_all *s)
{
	int	i;
	int	j;

	i = -1;
	while (++i < 10)
	{
		j = -1;
		while (++j < 20)
			draw_put_image_tile(s, i, j);
	}
	s->win.tile_flag = 0;
}
