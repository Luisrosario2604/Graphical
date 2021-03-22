/*
** EPITECH PROJECT, 2018
** my_rpg
** File description:
** main_display
*/

#include "include.h"
#include "struct.h"
#include "function.h"

void move_hero_three(container_t *c)
{
	if (c->survival->move == 0) {
		c->survival->move_three += 1;
		c->survival->pos_three.y -= 1.35;
		c->survival->rect_three.top = 48 * 3;
	} else if (c->survival->move == 1) {
		c->survival->move_three -= 1;
		c->survival->pos_three.y += 1.35;
		c->survival->rect_three.top = 0;
	}
	if (c->survival->move_three == 48)
		c->survival->rect_three.top = 48 * 2;
}
