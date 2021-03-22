/*
** EPITECH PROJECT, 2018
** my_world
** File description:
** main_game
*/

#include "include.h"
#include "struct.h"
#include "function.h"

void anim_heros(container_t *c)
{
	c->heros->rect[0] = (sfIntRect)				\
		{c->heros->mvmt, c->heros->anim_rect, 30, 48};
	if (c->heros->speed_mvmt == 6){
		c->heros->mvmt += 32;
		c->heros->speed_mvmt = 0;
		if (c->heros->mvmt >= 128)
			c->heros->mvmt = 0;
	}
	c->heros->speed_mvmt += 1;
}

void anim_heros_select(container_t *c)
{
	switch (c->heros->anim_nbr) {
		case 0:
		c->heros->anim_rect = 0;
		c->heros->pos[0].y += SPEED_HEROS;
		break;
		case 1:
		c->heros->anim_rect = 48;
		c->heros->pos[0].x -= SPEED_HEROS;
		break;
		case 2:
		c->heros->anim_rect = 96;
		c->heros->pos[0].x += SPEED_HEROS;
		break;
		case 3:
		c->heros->anim_rect = 144;
		c->heros->pos[0].y -= SPEED_HEROS;
	}
}
