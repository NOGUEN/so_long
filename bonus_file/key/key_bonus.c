/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   key_bonus.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: noguen <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/16 00:33:46 by noguen            #+#    #+#             */
/*   Updated: 2022/01/18 00:48:10 by noguen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bonus_include/so_long_bonus.h"

int	key_pressed(int k, t_all *s)
{
	if (k == KEY_W)
		s->key.w = 1;
	else if (k == KEY_A)
		s->key.a = 1;
	else if (k == KEY_S)
		s->key.s = 1;
	else if (k == KEY_D)
		s->key.d = 1;
	else if (k == KEY_ENTER)
		s->key.n = 1;
	else if (k == KEY_SPACE)
		s->key.space = 1;
	else if (k == KEY_Q || k == KEY_ESC)
		s->key.q = 1;
	return (0);
}

int	key_released(int k, t_all *s)
{
	if (k == KEY_W)
		s->key.w = 0;
	else if (k == KEY_A)
		s->key.a = 0;
	else if (k == KEY_S)
		s->key.s = 0;
	else if (k == KEY_D)
		s->key.d = 0;
	else if (k == KEY_SPACE)
		s->key.space = 0;
	else if (k == KEY_Q || k == KEY_ESC)
		s->key.q = 0;
	return (0);
}

int	key_update(t_all *s)
{
	key_act_quit(s);
	key_act_up(s);
	key_act_left(s);
	key_act_down(s);
	key_act_right(s);
	key_act_enter(s);
	return (0);
}
