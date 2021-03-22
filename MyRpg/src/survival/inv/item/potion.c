/*
** EPITECH PROJECT, 2018
** rpg
** File description:
** main_display
*/

#include "include.h"
#include "struct.h"
#include "function.h"

void draw_potion_two(container_t *c)
{
	c->item->number = c->inv->potion;
	c->item->scale.x = 1;
	c->item->scale.y = 1;
	c->item->rect.left = 48 * 3;
	c->item->rect.top = 48 * 11;
	c->item->rect.width = 48;
	c->item->rect.height = 48;
	draw(c);
}

void draw_potion(container_t *c)
{
	sfVector2f x_one = {931, 324};
	sfVector2f y_one = {972, 362};
	if (mouse_check(c, x_one, y_one) == 2 &&	\
	c->inv->taken != 15 && c->inv->potion > 0)
		c->inv->taken = 15;
	if (c->inv->taken != 15) {
		if (mouse_check(c, x_one, y_one) == 1 && c->inv->potion > 0)
			print_item(c, c->inv->potion);
		c->item->pos.x = 926;
		c->item->pos.y = 316;
	} else {
		c->item->pos.x = c->window->xMouse - 27;
		c->item->pos.y = c->window->yMouse - 32;
	}
	draw_potion_two(c);
}
