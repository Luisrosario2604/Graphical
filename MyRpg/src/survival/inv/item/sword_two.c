/*
** EPITECH PROJECT, 2018
** rpg
** File description:
** main_display
*/

#include "include.h"
#include "struct.h"
#include "function.h"

void draw_sword_two_two(container_t *c)
{
	c->item->number = c->inv->sword_two;
	c->item->scale.x = 0.9;
	c->item->scale.y = 0.9;
	c->item->rect.left = 48 * 11;
	c->item->rect.top = 48 * 3;
	c->item->rect.width = 48;
	c->item->rect.height = 48;
	draw(c);
}

void draw_sword_two(container_t *c)
{
	sfVector2f x_one = {817, 401};
	sfVector2f y_one = {855, 439};
	if (mouse_check(c, x_one, y_one) == 2 &&	\
	c->inv->taken != 17 && c->inv->sword_two > 0)
		c->inv->taken = 17;
	if (c->inv->taken != 17) {
		if (mouse_check(c, x_one, y_one) == 1 && c->inv->sword_two > 0)
			print_item(c, c->inv->sword_two);
		c->item->pos.x = 813;
		c->item->pos.y = 396;
	} else {
		c->item->pos.x = c->window->xMouse - 27;
		c->item->pos.y = c->window->yMouse - 32;
	}
	draw_sword_two_two(c);
}
