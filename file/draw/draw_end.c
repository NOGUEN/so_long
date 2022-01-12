/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   draw_end.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: noguen <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/12 21:04:13 by noguen            #+#    #+#             */
/*   Updated: 2022/01/12 21:18:32 by noguen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void    draw_end(t_all *s){
    int i;
    int j;

    i = s->win.frame / 2;
    j = i / 20;
    i %= 20;    
    draw_put_image(s, s->tex.black, j * 64, i * 64);
    s->win.frame++;
}
