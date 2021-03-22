/*
** EPITECH PROJECT, 2018
** my_rpg
** File description:
** main_display
*/

#include "include.h"
#include "struct.h"
#include "function.h"

void move_hero_four(container_t *c)
{
	if (c->survival->move == 0) {
		c->survival->move_four += 1;
		c->survival->pos_four.y += 1.35;
		c->survival->rect_four.top = 0;
	} else if (c->survival->move == 1) {
		c->survival->move_four -= 1;
		c->survival->pos_four.y -= 1.35;
		c->survival->rect_four.top = 48 * 3;
	}
	if (c->survival->move_four == 0)
		c->survival->rect_four.top = 48;
}
