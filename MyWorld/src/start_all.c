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
	c->timer = malloc(sizeof(time_game_t));
	c->sprt = malloc(sizeof(sprt_t));
	c->maps = malloc(sizeof(maps_t));
	c->square = malloc(sizeof(square_t));
	c->settings = malloc(sizeof(settings_t));
	c->toolbar = malloc(sizeof(toolbar_t));
	c->window->scene = 0;
	c->window->up = 1;
	c->window->square = 0;
	c->timer->Clock = sfClock_create();
	c->sprt->text = sfSprite_create();
	c->sprt->button = sfSprite_create();
	c->sprt->back_s = sfSprite_create();
	c->sprt->menu = sfSprite_create();
	c->maps->bg = sfSprite_create();
	c->window->click_s = sfSprite_create();
	c->maps->map = sfSprite_create();
	c->settings->btn = sfSprite_create();
	start_all_sub(c);
}

void start_all_sub(container_t *c)
{
	c->toolbar->btn = sfSprite_create();
	c->maps->size = 0;
	c->window->Xcam = -900;
	c->window->a = 0;
	c->window->Ycam = -400;
	c->window->map_check = 0;
	c->window->click = 0;
	c->flag = 0;
	c->maps->color_line = 0;
}
