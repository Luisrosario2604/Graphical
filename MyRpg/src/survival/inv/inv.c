/*
** EPITECH PROJECT, 2018
** my_rpg
** File description:
** main inv
*/

#include "include.h"
#include "struct.h"
#include "function.h"

void draw_inv(container_t *c)
{
	sfVector2f pos = {760, 250};
	sfVector2f scale = {0.7, 0.7};
	sfSprite_setColor(c->survival->map_s,			\
			sfColor_fromRGBA(100, 100, 100, 255));
	sfSprite_setPosition(c->survival->inv_s, pos);
	sfSprite_setScale(c->survival->inv_s, scale);
	sfSprite_setTexture(c->survival->inv_s, c->survival->inv, sfTrue);
	sfRenderWindow_drawSprite(c->window->window, c->survival->map_s, NULL);
	sfRenderWindow_drawSprite(c->window->window, c->survival->inv_s, NULL);
}

void survival_inv(container_t *c)
{
	int i = 0;
	int j = 0;
	sfVector2f one = {764, 484};
	sfVector2f two = {791, 500};
	sfVector2f three = {764, 286};
	sfVector2f four = {980, 500};
	i = mouse_check(c, one, two);
	j = mouse_check(c, three, four);
	if (i == 1 || i == 2 || c->survival->inv_check == 1) {
		draw_inv(c);
		c->survival->inv_check = 1;
		draw_inv_manager(c);
	} else
		sfSprite_setColor(c->survival->map_s,			\
				sfColor_fromRGBA(255, 255, 255, 255));
	if (c->survival->inv_check == 1 && (j == 0 || j == 2))
		c->survival->inv_check = 0;
	if (c->window->click == 0)
		c->inv->taken = 0;
	taken_item(c);
}
