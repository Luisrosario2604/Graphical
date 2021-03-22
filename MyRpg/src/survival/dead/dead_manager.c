/*
** EPITECH PROJECT, 2018
** my_world
** File description:
** main_display
*/

#include "include.h"
#include "struct.h"
#include "function.h"

void dead_manager(container_t *c)
{
	c->window->xMouse = 0;
	c->window->yMouse = 0;
}

void print_dead(container_t *c, int i)
{
	sfVector2f pos = {545, -70};
	sfVector2f scale = {1.3, 1.3};
	sfSprite_setPosition(c->survival->black_s, pos);
	sfSprite_setScale(c->survival->black_s, scale);
	sfSprite_setTexture(c->survival->black_s, c->inv->dead_t, sfTrue);
	sfSprite_setColor(c->survival->black_s,			\
				sfColor_fromRGBA(100, 100, 100, i));
	sfRenderWindow_drawSprite					\
		(c->window->window, c->survival->black_s, NULL);
}

void dead_print(container_t *c)
{
	int i = 0;
	c->inv->gama += 5;
	if (c->inv->gama >= 255)
		c->inv->gama = -255;
	i = c->inv->gama;
	if (c->inv->gama >= 0)
		print_dead(c, i);
	else
		print_dead(c, -i);
}
