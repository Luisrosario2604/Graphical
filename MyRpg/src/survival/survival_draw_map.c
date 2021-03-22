/*
** EPITECH PROJECT, 2018
** my_rpg
** File description:
** draw map
*/

#include "include.h"
#include "struct.h"
#include "function.h"

void survival_draw_map(container_t *c)
{
	sfVector2f pos = {700, 100};
	sfVector2f scale = {2, 2};
	sfSprite_setPosition(c->survival->map_s, pos);
	sfSprite_setScale(c->survival->map_s, scale);
	sfSprite_setTexture(c->survival->map_s, c->survival->map, sfTrue);
	sfRenderWindow_drawSprite(c->window->window, c->survival->map_s, NULL);
}
