/*
** EPITECH PROJECT, 2018
** my_rpg
** File description:
** main_display
*/

#include "include.h"
#include "struct.h"
#include "function.h"

void move_hero_one(container_t *c)
{
	if (c->survival->move == 0) {
		c->survival->move_one += 1;
		c->survival->pos_one.x -= 1.35;
		c->survival->rect_one.top = 48;
	} else if (c->survival->move == 1) {
		c->survival->move_one -= 1;
		c->survival->pos_one.x += 1.35;
		c->survival->rect_one.top = 48 * 2;
	}
}
