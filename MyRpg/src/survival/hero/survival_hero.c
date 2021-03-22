/*
** EPITECH PROJECT, 2018
** my_rpg
** File description:
** main_display
*/

#include "include.h"
#include "struct.h"
#include "function.h"

void survival_hero_four(container_t *c)
{
	if (c->survival->rd_hero == 4 && c->survival->replace_four == 0) {
		animate_hero(c, 4);
		if (c->survival->move_four == 0) {
			c->survival->move = 0;
		}
		else if (c->survival->move_four == 48) {
			c->survival->move = 1;
		}
		move_hero_four(c);
		c->survival->not_moving_four = 1;
	} else
		c->survival->not_moving_four = 0;
	sfSprite_setPosition(c->survival->hero, c->survival->pos_four);
	sfSprite_setTexture(c->survival->hero, c->survival->hero_four, sfTrue);
	sfSprite_setTextureRect(c->survival->hero, c->survival->rect_four);
	sfRenderWindow_drawSprite(c->window->window, c->survival->hero, NULL);
}

void survival_hero_three(container_t *c)
{
	if (c->survival->rd_hero == 3 && c->survival->replace_three == 0) {
		animate_hero(c, 3);
		if (c->survival->move_three == 0) {
			c->survival->move = 0;
		}
		else if (c->survival->move_three == 48) {
			c->survival->move = 1;
		}
		move_hero_three(c);
		c->survival->not_moving_three = 1;
	} else
		c->survival->not_moving_three = 0;
	sfSprite_setPosition(c->survival->hero, c->survival->pos_three);
	sfSprite_setTexture						\
		(c->survival->hero, c->survival->hero_three, sfTrue);
	sfSprite_setTextureRect(c->survival->hero, c->survival->rect_three);
	sfRenderWindow_drawSprite(c->window->window, c->survival->hero, NULL);
}

void survival_hero_two(container_t *c)
{
	if (c->survival->rd_hero == 2 && c->survival->replace_two == 0) {
		animate_hero(c, 2);
		if (c->survival->move_two == 0) {
			c->survival->move = 0;
		}
		else if (c->survival->move_two == 48) {
			c->survival->move = 1;
		}
		move_hero_two(c);
		c->survival->not_moving_two = 1;
	} else
		c->survival->not_moving_two = 0;
	sfSprite_setPosition(c->survival->hero, c->survival->pos_two);
	sfSprite_setTexture(c->survival->hero, c->survival->hero_two, sfTrue);
	sfSprite_setTextureRect(c->survival->hero, c->survival->rect_two);
	sfRenderWindow_drawSprite(c->window->window, c->survival->hero, NULL);
}

void survival_hero_one(container_t *c)
{
	sfVector2f scale = {1.5, 1.5};
	if (c->survival->rd_hero == 1 && c->survival->replace_one == 0) {
		animate_hero(c, 1);
		if (c->survival->move_one == 0) {
			c->survival->move = 0;
		}
		else if (c->survival->move_one == 48) {
			c->survival->move = 1;
		}
		move_hero_one(c);
		c->survival->not_moving_one = 1;
	} else
		c->survival->not_moving_one = 0;
	sfSprite_setScale(c->survival->hero, scale);
	sfSprite_setPosition(c->survival->hero, c->survival->pos_one);
	sfSprite_setTexture(c->survival->hero, c->survival->hero_one, sfTrue);
	sfSprite_setTextureRect(c->survival->hero, c->survival->rect_one);
	sfRenderWindow_drawSprite(c->window->window, c->survival->hero, NULL);
}
