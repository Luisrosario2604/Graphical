/*
** EPITECH PROJECT, 2017
** my_runner
** File description:
** window.c
*/

#include "include.h"
#include "struct.h"
#include "function.h"

void effect_set(container_t *c)
{
	sfVector2f x = {332, 389};
	sfVector2f y = {542, 660};
	if (check_set_mouse(x, y, c) == 1)
		sfMusic_setVolume(c->window->hit, 0);
	sfVector2f x1 = {540, 660};
	sfVector2f y1 = {542, 660};
	if (check_set_mouse(x1, y1, c) == 1)
		sfMusic_setVolume(c->window->hit, 50);
	sfVector2f x2 = {740, 900};
	sfVector2f y2 = {542, 660};
	if (check_set_mouse(x2, y2, c) == 1)
		sfMusic_setVolume(c->window->hit, 100);
}

void fps_set(container_t *c)
{
	sfVector2f x = {332, 389};
	sfVector2f y = {341, 430};
	if (check_set_mouse(x, y, c) == 1)
		my_putstr("FPS at 0 ... seriously ?\n");
	sfVector2f x1 = {540, 660};
	sfVector2f y1 = {341, 430};
	if (check_set_mouse(x1, y1, c) == 1)
		sfRenderWindow_setFramerateLimit(c->window->window, 50);
	sfVector2f x2 = {740, 900};
	sfVector2f y2 = {341, 430};
	if (check_set_mouse(x2, y2, c) == 1)
		sfRenderWindow_setFramerateLimit(c->window->window, 100);
}

void color_set(container_t *c)
{
	sfVector2f x = {332, 389};
	sfVector2f y = {770, 850};
	if (check_set_mouse(x, y, c) == 1)
		c->maps->color_line = 1;
	sfVector2f x1 = {536, 577};
	sfVector2f y1 = {770, 850};
	if (check_set_mouse(x1, y1, c) == 1)
		c->maps->color_line = 2;
	sfVector2f x2 = {740, 780};
	sfVector2f y2 = {770, 850};
	if (check_set_mouse(x2, y2, c) == 1)
		c->maps->color_line = 3;
}

void sound_set(container_t *c)
{
	sfVector2f x = {332, 389};
	sfVector2f y = {122, 200};
	if (check_set_mouse(x, y, c) == 1)
		sfMusic_setVolume (c->window->music, 0);
	sfVector2f x1 = {540, 660};
	sfVector2f y1 = {125, 200};
	if (check_set_mouse(x1, y1, c) == 1)
		sfMusic_setVolume (c->window->music, 50);
	sfVector2f x2 = {740, 900};
	sfVector2f y2 = {130, 200};
	if (check_set_mouse(x2, y2, c) == 1)
		sfMusic_setVolume (c->window->music, 100);
}
