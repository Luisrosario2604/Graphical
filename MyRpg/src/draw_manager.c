/*
** EPITECH PROJECT, 2018
** my_world
** File description:
** draw the different element
*/

#include "include.h"
#include "struct.h"
#include "function.h"

void draw_map(int nbr_map, container_t *c)
{
	sfSprite_setPosition(c->map->sprite, c->map->pos[nbr_map]);
	sfSprite_setTextureRect(c->map->sprite, c->map->rect[nbr_map]);
	sfRenderWindow_drawSprite(c->window->window, c->map->sprite, NULL);
}

void draw_heros(container_t *c)
{
	sfSprite_setPosition(c->heros->sprite, c->heros->pos[0]);
	sfSprite_setTextureRect(c->heros->sprite, c->heros->rect[0]);
	anim_heros_select(c);
	anim_heros(c);
	sfRenderWindow_drawSprite(c->window->window, c->heros->sprite, NULL);
}