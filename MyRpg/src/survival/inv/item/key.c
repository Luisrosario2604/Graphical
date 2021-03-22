/*
** EPITECH PROJECT, 2018
** rpg
** File description:
** main_display
*/

#include "include.h"
#include "struct.h"
#include "function.h"

void draw_key_two(container_t *c)
{
	c->item->number = c->inv->key;
	c->item->scale.x = 1;
	c->item->scale.y = 1;
	c->item->rect.left = 48 * 5;
	c->item->rect.top = 48 * 14;
	c->item->rect.width = 48;
	c->item->rect.height = 48;
	draw(c);
}

void draw_key(container_t *c)
{
	sfVector2f x_one = {894, 440};
	sfVector2f y_one = {931, 479};
	if (mouse_check(c, x_one, y_one) == 2 &&	\
	c->inv->taken != 24 && c->inv->key > 0)
		c->inv->taken = 24;
	if (c->inv->taken != 24) {
		if (mouse_check(c, x_one, y_one) == 1 && c->inv->key > 0)
			print_item(c, c->inv->key);
		c->item->pos.x = 886;
		c->item->pos.y = 434;
	} else {
		c->item->pos.x = c->window->xMouse - 27;
		c->item->pos.y = c->window->yMouse - 32;
	}
	draw_key_two(c);
}
