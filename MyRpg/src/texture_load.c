/*
** EPITECH PROJECT, 2017
** my_world
** File description:
** textures and sprites
*/

#include "include.h"
#include "struct.h"
#include "function.h"

void loading_textures(container_t *c)
{
	init_map(c);
	init_heros(c);
	sfVideoMode mode = {GAME_HEIGHT, GAME_WIDTH, 32};
	c->window->window = sfRenderWindow_create(mode, "Window",
	sfResize | sfClose, NULL);
	sfRenderWindow_setFramerateLimit(c->window->window, 60);
}
