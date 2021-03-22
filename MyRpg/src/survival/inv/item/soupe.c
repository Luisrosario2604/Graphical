/*
** EPITECH PROJECT, 2018
** rpg
** File description:
** main_display
*/

#include "include.h"
#include "struct.h"
#include "function.h"

void draw_soupe_two(container_t *c)
{
	c->item->number = c->inv->soupe;
	c->item->scale.x = 1;
	c->item->scale.y = 1;
	c->item->rect.left = 48 * 0;
	c->item->rect.top = 48 * 1;
	c->item->rect.width = 48;
	c->item->rect.height = 48;
	draw(c);
}

void draw_soupe(container_t *c)
{
	sfVector2f x_one = {784, 324};
	sfVector2f y_one = {816, 362};
	if (mouse_check(c, x_one, y_one) == 2 &&	\
	c->inv->taken != 6 && c->inv->soupe > 0)
		c->inv->taken = 6;
	if (c->inv->taken != 6) {
		if (mouse_check(c, x_one, y_one) == 1 && c->inv->soupe > 0)
			print_item(c, c->inv->soupe);
		c->item->pos.x = 772;
		c->item->pos.y = 315;
	} else {
		c->item->pos.x = c->window->xMouse - 27;
		c->item->pos.y = c->window->yMouse - 32;
	}
	draw_soupe_two(c);
}
