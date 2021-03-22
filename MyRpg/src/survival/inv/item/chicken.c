/*
** EPITECH PROJECT, 2018
** rpg
** File description:
** main_display
*/

#include "include.h"
#include "struct.h"
#include "function.h"

void draw_chicken_two(container_t *c)
{
	c->item->number = c->inv->chicken;
	c->item->scale.x = 1;
	c->item->scale.y = 1;
	c->item->rect.left = 48 * 3;
	c->item->rect.top = 48 * 2;
	c->item->rect.width = 48;
	c->item->rect.height = 48;
	draw(c);
}

void draw_chicken(container_t *c)
{
	sfVector2f x_one = {784, 363};
	sfVector2f y_one = {816, 400};
	if (mouse_check(c, x_one, y_one) == 2 &&	\
	c->inv->taken != 10 && c->inv->chicken > 0)
		c->inv->taken = 10;
	if (c->inv->taken != 10) {
		if (mouse_check(c, x_one, y_one) == 1 && c->inv->chicken > 0)
			print_item(c, c->inv->chicken);
		c->item->pos.x = 772;
		c->item->pos.y = 356;
	} else {
		c->item->pos.x = c->window->xMouse - 27;
		c->item->pos.y = c->window->yMouse - 32;
	}
	draw_chicken_two(c);
}
