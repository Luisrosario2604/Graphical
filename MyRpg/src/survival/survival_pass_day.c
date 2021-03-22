/*
** EPITECH PROJECT, 2018
** my_rpg
** File description:
** passing day
*/

#include "include.h"
#include "struct.h"
#include "function.h"

int rand_i(container_t *c)
{
	return (((rand()  + c->survival->rand) % 25) +	\
		2 + (c->tree->cape * 2));
}

void rand_left(container_t *c)
{
	c->survival->food_one -= rand_i(c);
	c->survival->thirst_one -= rand_i(c);
	c->survival->moral_one -= rand_i(c);
	c->survival->food_two -= rand_i(c);
	c->survival->thirst_two -= rand_i(c);
	c->survival->moral_two -= rand_i(c);
	c->survival->food_three -= rand_i(c);
	c->survival->thirst_three -= rand_i(c);
	c->survival->moral_three -= rand_i(c);
	c->survival->food_four -= rand_i(c);
	c->survival->thirst_four -= rand_i(c);
	c->survival->moral_four -= rand_i(c);
}

void print_black(container_t *c)
{
	int i = c->survival->pass_day;
	sfVector2f pos = {0, 0};
	sfVector2f scale = {8, 8};
	sfSprite_setPosition(c->survival->black_s, pos);
	sfSprite_setScale(c->survival->black_s, scale);
	sfSprite_setTexture(c->survival->black_s, c->survival->black, sfTrue);
	sfSprite_setColor(c->survival->black_s,			\
				sfColor_fromRGBA(100, 100, 100, i));
	sfRenderWindow_drawSprite(c->window->window,		\
				c->survival->black_s, NULL);
}

void print_arrow(container_t *c)
{
	sfVector2f one = {1211, 885};
	sfVector2f two = {1280, 922};
	sfVector2f pos = {1200, 880};
	sfVector2f scale = {0.15, 0.15};
	sfSprite_setPosition(c->survival->inv_s, pos);
	sfSprite_setScale(c->survival->inv_s, scale);
	sfSprite_setTexture(c->survival->inv_s, c->survival->arrow, sfTrue);
	sfRenderWindow_drawSprite(c->window->window, c->survival->inv_s, NULL);
	if (mouse_check(c, one, two) == 2 && c->monster->life == 20)
		c->survival->pass_day = 2;
}

void passing_day(container_t *c)
{
	if (c->survival->pass_day == 1) {
		c->survival->black_count = 0;
		print_arrow(c);
	}
	if (c->survival->pass_day >= 2) {
		print_black(c);
		day_know(c);
	}
	if (c->survival->pass_day == 0)
		c->survival->pass_day = 1;
	else
		c->survival->random_event = 0;
	if (c->survival->pass_day == 254) {
		c->survival->random_event = ((rand() + c->survival->rand) \
					% 4 + 1);
		event_manager(c);
		rand_left(c);
		c->survival->black_count = 1;
	}
}
