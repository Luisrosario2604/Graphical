/*
** EPITECH PROJECT, 2018
** rpg
** File description:
** main_display
*/

#include "include.h"
#include "struct.h"
#include "function.h"

void draw_diamond_two(container_t *c)
{
	c->item->number = c->inv->sword_one;
	c->item->scale.x = 1;
	c->item->scale.y = 1;
	c->item->rect.left = 48 * 4;
	c->item->rect.top = 48 * 15;
	c->item->rect.width = 48;
	c->item->rect.height = 48;
	draw(c);
}

void draw_diamond(container_t *c)
{
	sfVector2f x_one = {784, 440};
	sfVector2f y_one = {816, 479};
	if (mouse_check(c, x_one, y_one) == 2 &&	\
	c->inv->taken != 21 && c->inv->diamond > 0)
		c->inv->taken = 21;
	if (c->inv->taken != 21) {
		if (mouse_check(c, x_one, y_one) == 1 && c->inv->diamond > 0)
			print_item(c, c->inv->diamond);
		c->item->pos.x = 773;
		c->item->pos.y = 433;
	} else {
		c->item->pos.x = c->window->xMouse - 27;
		c->item->pos.y = c->window->yMouse - 32;
	}
	draw_diamond_two(c);
}
