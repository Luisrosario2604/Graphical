/*
** EPITECH PROJECT, 2017
** my_runner
** File description:
** window.c
*/

#include "include.h"
#include "struct.h"
#include "function.h"

void free_all(container_t *c)
{
	sfRenderWindow_destroy(c->window->window);
	sfClock_destroy(c->timer->Clock);
	free(c->window);
	free(c->timer);
	sfSprite_destroy(c->map->sprite);
	sfTexture_destroy(c->map->texture);
	sfTexture_destroy(c->menu->button_t);
	sfTexture_destroy(c->menu->exit_t);
	sfTexture_destroy(c->menu->play_t);
	sfTexture_destroy(c->menu->how_t);
	destroy_survival(c);
}
