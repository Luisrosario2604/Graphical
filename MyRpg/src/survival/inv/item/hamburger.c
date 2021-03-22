/*
** EPITECH PROJECT, 2018
** rpg
** File description:
** main_display
*/

#include "include.h"
#include "struct.h"
#include "function.h"

void draw_hamburger_two(container_t *c)
{
	c->item->number = c->inv->hamburger;
	c->item->scale.x = 1;
	c->item->scale.y = 1;
	c->item->rect.left = 48 * 1;
	c->item->rect.top = 48 * 2;
	c->item->rect.width = 48;
	c->item->rect.height = 48;
	draw(c);
}

void draw_hamburger(container_t *c)
{
	sfVector2f x_one = {817, 363};
	sfVector2f y_one = {855, 400};
	if (mouse_check(c, x_one, y_one) == 2 &&	\
	c->inv->taken != 11 && c->inv->hamburger > 0)
		c->inv->taken = 11;
	if (c->inv->taken != 11) {
		if (mouse_check(c, x_one, y_one) == 1 && c->inv->hamburger > 0)
			print_item(c, c->inv->hamburger);
		c->item->pos.x = 811;
		c->item->pos.y = 356;
	} else {
		c->item->pos.x = c->window->xMouse - 27;
		c->item->pos.y = c->window->yMouse - 32;
	}
	draw_hamburger_two(c);
}
