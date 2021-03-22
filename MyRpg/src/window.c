/*
** EPITECH PROJECT, 2017
** my_runner
** File description:
** window.c
*/

#include "include.h"
#include "struct.h"
#include "function.h"

void window(container_t *c)
{
	start_all(c);
	loading_textures(c);
	while (sfRenderWindow_isOpen(c->window->window) && c->menu->exit != 1) {
		mouse(c);
		while (sfRenderWindow_pollEvent(c->window->window,
			&c->window->event)) {
			events(c);
		}
		c->timer->time = sfClock_getElapsedTime(c->timer->Clock);
		if (c->timer->time.microseconds > 30000) {
			main_game(c);
			c->flag++;
			sfClock_restart(c->timer->Clock);
		}
	}
	free_all(c);
}
