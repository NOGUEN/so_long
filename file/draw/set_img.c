/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   set_img.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: noguen <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/15 23:02:21 by noguen            #+#    #+#             */
/*   Updated: 2022/01/15 23:02:25 by noguen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	set_player_image(t_all *s)
{
	int	**tex;

	if (s->player.direction == LEFT)
		tex = s->tex.player_left;
	else
		tex = s->tex.player_right;
	s->player.img = tex[s->player.frame / 4];
}

void	set_enemy_image(t_all *s, int n)
{
	int	**tex;

	if (s->enemy[n].direction == LEFT
		|| s->enemy[n].pos_x - s->player.pos_x > 0)
		tex = s->tex.enemy_left;
	else if (s->enemy[n].direction == RIGHT
		|| s->enemy[n].pos_x - s->player.pos_x <= 0)
		tex = s->tex.enemy_right;
	else
		tex = s->tex.enemy_left;
	s->enemy[n].img = tex[s->enemy[n].frame / 4];
}
