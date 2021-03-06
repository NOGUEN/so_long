/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tex_bonus.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: noguen <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/16 00:13:50 by noguen            #+#    #+#             */
/*   Updated: 2022/01/18 00:47:53 by noguen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bonus_include/so_long_bonus.h"

void	*tex_input_xpm(t_all *s, char *file)
{
	void	*img;

	img = mlx_xpm_file_to_image
		(s->mlx.ptr, file, &(s->img.width), &(s->img.height));
	if (img == NULL)
		s->err.n = tool_error(-12);
	return (img);
}

void	tex_input(t_all *s)
{
	s->tex.intro[0] = tex_input_xpm(s, "textures/intro0.xpm");
	s->tex.intro[1] = tex_input_xpm(s, "textures/intro1.xpm");
	s->tex.intro[2] = tex_input_xpm(s, "textures/intro2.xpm");
	s->tex.intro[3] = tex_input_xpm(s, "textures/intro3.xpm");
	s->tex.intro[4] = tex_input_xpm(s, "textures/intro4.xpm");
	s->tex.intro[5] = tex_input_xpm(s, "textures/intro5.xpm");
	s->tex.intro[6] = tex_input_xpm(s, "textures/intro6.xpm");
	s->tex.wall = tex_input_xpm(s, "textures/wall.xpm");
	s->tex.sand = tex_input_xpm(s, "textures/sand.xpm");
	s->tex.object = tex_input_xpm(s, "textures/object.xpm");
	s->tex.black = tex_input_xpm(s, "textures/black.xpm");
	s->tex.win = tex_input_xpm(s, "textures/win.xpm");
	s->tex.lose = tex_input_xpm(s, "textures/lose.xpm");
	tex_input_player(s);
	tex_input_enemy(s);
	tex_input_exit(s);
}

void	tex_input_player(t_all *s)
{
	s->tex.player_left[0] = tex_input_xpm(s, "textures/player_left0.xpm");
	s->tex.player_left[1] = tex_input_xpm(s, "textures/player_left1.xpm");
	s->tex.player_left[2] = tex_input_xpm(s, "textures/player_left2.xpm");
	s->tex.player_left[3] = tex_input_xpm(s, "textures/player_left3.xpm");
	s->tex.player_left[4] = tex_input_xpm(s, "textures/player_left4.xpm");
	s->tex.player_left[5] = tex_input_xpm(s, "textures/player_left5.xpm");
	s->tex.player_left[6] = tex_input_xpm(s, "textures/player_left6.xpm");
	s->tex.player_left[7] = tex_input_xpm(s, "textures/player_left7.xpm");
	s->tex.player_right[0] = tex_input_xpm(s, "textures/player_right0.xpm");
	s->tex.player_right[1] = tex_input_xpm(s, "textures/player_right1.xpm");
	s->tex.player_right[2] = tex_input_xpm(s, "textures/player_right2.xpm");
	s->tex.player_right[3] = tex_input_xpm(s, "textures/player_right3.xpm");
	s->tex.player_right[4] = tex_input_xpm(s, "textures/player_right4.xpm");
	s->tex.player_right[5] = tex_input_xpm(s, "textures/player_right5.xpm");
	s->tex.player_right[6] = tex_input_xpm(s, "textures/player_right6.xpm");
	s->tex.player_right[7] = tex_input_xpm(s, "textures/player_right7.xpm");
}

void	tex_input_enemy(t_all *s)
{
	s->tex.enemy_left[0] = tex_input_xpm(s, "textures/enemy_left0.xpm");
	s->tex.enemy_left[1] = tex_input_xpm(s, "textures/enemy_left1.xpm");
	s->tex.enemy_left[2] = tex_input_xpm(s, "textures/enemy_left2.xpm");
	s->tex.enemy_left[3] = tex_input_xpm(s, "textures/enemy_left3.xpm");
	s->tex.enemy_left[4] = tex_input_xpm(s, "textures/enemy_left4.xpm");
	s->tex.enemy_left[5] = tex_input_xpm(s, "textures/enemy_left5.xpm");
	s->tex.enemy_left[6] = tex_input_xpm(s, "textures/enemy_left6.xpm");
	s->tex.enemy_left[7] = tex_input_xpm(s, "textures/enemy_left7.xpm");
	s->tex.enemy_right[0] = tex_input_xpm(s, "textures/enemy_right0.xpm");
	s->tex.enemy_right[1] = tex_input_xpm(s, "textures/enemy_right1.xpm");
	s->tex.enemy_right[2] = tex_input_xpm(s, "textures/enemy_right2.xpm");
	s->tex.enemy_right[3] = tex_input_xpm(s, "textures/enemy_right3.xpm");
	s->tex.enemy_right[4] = tex_input_xpm(s, "textures/enemy_right4.xpm");
	s->tex.enemy_right[5] = tex_input_xpm(s, "textures/enemy_right5.xpm");
	s->tex.enemy_right[6] = tex_input_xpm(s, "textures/enemy_right6.xpm");
	s->tex.enemy_right[7] = tex_input_xpm(s, "textures/enemy_right7.xpm");
}

void	tex_input_exit(t_all *s)
{
	s->tex.exit[0] = tex_input_xpm(s, "textures/exit0.xpm");
	s->tex.exit[1] = tex_input_xpm(s, "textures/exit1.xpm");
	s->tex.exit[2] = tex_input_xpm(s, "textures/exit2.xpm");
	s->tex.exit[3] = tex_input_xpm(s, "textures/exit3.xpm");
	s->tex.exit[4] = tex_input_xpm(s, "textures/exit4.xpm");
	s->tex.exit[5] = tex_input_xpm(s, "textures/exit5.xpm");
	s->tex.exit[6] = tex_input_xpm(s, "textures/exit6.xpm");
	s->tex.exit[7] = tex_input_xpm(s, "textures/exit7.xpm");
}
