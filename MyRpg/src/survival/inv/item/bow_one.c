/*
** EPITECH PROJECT, 2018
** rpg
** File description:
** main_display
*/

#include "include.h"
#include "struct.h"
#include "function.h"

void draw_bow_one_two(container_t *c)
{
	c->item->number = c->inv->bow_one;
	c->item->scale.x = 1;
	c->item->scale.y = 1;
	c->item->rect.left = 48 * 11;
	c->item->rect.top = 48 * 6;
	c->item->rect.width = 48;
	c->item->rect.height = 48;
	draw(c);
}

void draw_bow_one(container_t *c)
{
	sfVector2f x_one = {894, 401};
	sfVector2f y_one = {931, 439};
	if (mouse_check(c, x_one, y_one) == 2 &&	\
	c->inv->taken != 19 && c->inv->bow_one > 0)
		c->inv->taken = 19;
	if (c->inv->taken != 19) {
		if (mouse_check(c, x_one, y_one) == 1 && c->inv->bow_one > 0)
			print_item(c, c->inv->bow_one);
		c->item->pos.x = 887;
		c->item->pos.y = 394;
	} else {
		c->item->pos.x = c->window->xMouse - 27;
		c->item->pos.y = c->window->yMouse - 32;
	}
	draw_bow_one_two(c);
}
