/*
** EPITECH PROJECT, 2018
** rpg
** File description:
** main_display
*/

#include "include.h"
#include "struct.h"
#include "function.h"

void draw_honey_two(container_t *c)
{
	c->item->number = c->inv->honey;
	c->item->scale.x = 1;
	c->item->scale.y = 1;
	c->item->rect.left = 48 * 14;
	c->item->rect.top = 48 * 11;
	c->item->rect.width = 48;
	c->item->rect.height = 48;
	draw(c);
}

void draw_honey(container_t *c)
{
	sfVector2f x_one = {894, 324};
	sfVector2f y_one = {931, 362};
	if (mouse_check(c, x_one, y_one) == 2 &&	\
	c->inv->taken != 9 && c->inv->honey > 0)
		c->inv->taken = 9;
	if (c->inv->taken != 9) {
		if (mouse_check(c, x_one, y_one) == 1 && c->inv->honey > 0)
			print_item(c, c->inv->honey);
		c->item->pos.x = 886;
		c->item->pos.y = 318;
	} else {
		c->item->pos.x = c->window->xMouse - 27;
		c->item->pos.y = c->window->yMouse - 32;
	}
	draw_honey_two(c);
}
