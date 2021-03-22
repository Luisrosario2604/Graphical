/*
** EPITECH PROJECT, 2017
** my_runner
** File description:
** window.c
*/

#include "include.h"
#include "struct.h"
#include "function.h"

int check_set_mouse(sfVector2f x, sfVector2f y, container_t *c)
{
	if (c->window->xMouse >= x.x && c->window->xMouse <= x.y)
		if (c->window->yMouse >= y.x && c->window->yMouse <= y.y)
			return (1);
	return (0);
}

void check_set(container_t *c)
{
	if (c->window->click == 1) {
		sound_set(c);
		effect_set(c);
		fps_set(c);
		color_set(c);
	}
}
