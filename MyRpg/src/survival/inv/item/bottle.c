/*
** EPITECH PROJECT, 2018
** rpg
** File description:
** main_display
*/

#include "include.h"
#include "struct.h"
#include "function.h"

void draw_bottle_two(container_t *c)
{
	c->item->number = c->inv->bottle;
	c->item->scale.x = 1;
	c->item->scale.y = 1;
	c->item->rect.left = 48 * 14;
	c->item->rect.top = 48 * 0;
	c->item->rect.width = 48;
	c->item->rect.height = 48;
	draw(c);
}

void draw_bottle(container_t *c)
{
	sfVector2f x_one = {856, 324};
	sfVector2f y_one = {893, 362};
	if (mouse_check(c, x_one, y_one) == 2 &&	\
	c->inv->taken != 8 && c->inv->bottle > 0)
		c->inv->taken = 8;
	if (c->inv->taken != 8) {
		if (mouse_check(c, x_one, y_one) == 1 && c->inv->bottle > 0)
			print_item(c, c->inv->bottle);
		c->item->pos.x = 849;
		c->item->pos.y = 318;
	} else {
		c->item->pos.x = c->window->xMouse - 27;
		c->item->pos.y = c->window->yMouse - 32;
	}
	draw_bottle_two(c);
}
