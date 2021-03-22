/*
** EPITECH PROJECT, 2018
** my_rpg
** File description:
** main_display
*/

#include "include.h"
#include "struct.h"
#include "function.h"

void move_hero_two(container_t *c)
{
	if (c->survival->move == 0) {
		c->survival->move_two += 1;
		c->survival->pos_two.y += 1.35;
		c->survival->rect_two.top = 0;
	} else if (c->survival->move == 1) {
		c->survival->move_two -= 1;
		c->survival->pos_two.y -= 1.35;
		c->survival->rect_two.top = 48 * 3;
	}
}
