/*
** EPITECH PROJECT, 2018
** my_rpg
** File description:
** main monster
*/

#include "include.h"
#include "struct.h"
#include "function.h"

void draw_monster(container_t *c)
{
	sfVector2f pos = {914, 168};
	sfVector2f scale = {1, 1};
	sfIntRect rect = {103 * c->monster->rect,		\
			90 * c->monster->height, 100, 90};
	sfSprite_setPosition(c->monster->sprite, pos);
	sfSprite_setScale(c->monster->sprite, scale);
	sfSprite_setTexture(c->monster->sprite, c->monster->monster, sfTrue);
	sfSprite_setTextureRect(c->monster->sprite, rect);
	sfRenderWindow_drawSprite(c->window->window, c->monster->sprite, NULL);
	if (c->monster->slow >= 2) {
		if (c->monster->rect >= 7) {
			c->monster->rect = 0;
			c->monster->height *= -1;
		} else if (c->monster->height == 0)
			c->monster->rect += 1;
		else
			c->monster->rect -= 1;
		c->monster->slow = 0;
	} else
		c->monster->slow += 1;
}

void check_life(container_t *c)
{
	switch (c->survival->player_select) {
	case (1) :
		one_attack(c);
		break;
	case (2) :
		two_attack(c);
		break;
	case (3) :
		three_attack(c);
		break;
	case (4) :
		four_attack(c);
		break;
	}
}

void monster_manager(container_t *c)
{
	sfVector2f x = {859, 202};
	sfVector2f y = {1015, 267};
	if (c->monster->life <= 0) {
		c->monster->life = 20;
		c->tree->points += 1;
	} else if (c->monster->life != 20)
		draw_monster(c);
	if (mouse_check(c, x, y) == 1 &&				\
	    c->survival->player_select > 0 && c->monster->life > 0)
		check_life(c);
	if (c->monster->life != 20 && mouse_check(c, x, y) == 1)
		print_item(c, c->monster->life);
}
