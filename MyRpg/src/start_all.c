/*
** EPITECH PROJECT, 2017
** my_world
** File description:
** textures and sprites
*/

#include "include.h"
#include "struct.h"
#include "function.h"

void start_all(container_t *c)
{
	c->window = malloc(sizeof(window_t));
	c->survival = malloc(sizeof(survival_t));
	c->timer = malloc(sizeof(time_game_t));
	c->menu = malloc(sizeof(menu_t));
	c->map = malloc(sizeof(game_obj) * 5);
	c->heros = malloc(sizeof(game_obj) * 5);
	c->timer->Clock = sfClock_create();
	c->flag = 0;
	init_survival(c);
}
