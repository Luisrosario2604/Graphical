/*
** EPITECH PROJECT, 2018
** rpg
** File description:
** main_display
*/

#include "include.h"
#include "struct.h"
#include "function.h"

void draw_bear_two(container_t *c)
{
	c->item->number = c->inv->bear;
	c->item->scale.x = 1;
	c->item->scale.y = 1;
	c->item->rect.left = 48 * 3;
	c->item->rect.top = 48 * 13;
	c->item->rect.width = 48;
	c->item->rect.height = 48;
	draw(c);
}

void draw_bear(container_t *c)
{
	sfVector2f x_one = {894, 288};
	sfVector2f y_one = {931, 323};
	if (mouse_check(c, x_one, y_one) == 2 &&	\
	c->inv->taken != 4 && c->inv->bear > 0)
		c->inv->taken = 4;
	if (c->inv->taken != 4) {
		if (mouse_check(c, x_one, y_one) == 1 && c->inv->bear > 0)
			print_item(c, c->inv->bear);
		c->item->pos.x = 886;
		c->item->pos.y = 278;
	} else {
		c->item->pos.x = c->window->xMouse - 27;
		c->item->pos.y = c->window->yMouse - 32;
	}
	draw_bear_two(c);
}
