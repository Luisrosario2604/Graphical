/*
** EPITECH PROJECT, 2018
** my_rpg
** File description:
** init the sprite game
*/

#include "include.h"
#include "struct.h"
#include "function.h"

void init_two_map(container_t *c)
{
	c->menu->menu = sfSprite_create();
	c->menu->play_t = sfTexture_createFromFile	\
		("src/images/play.png", NULL);
	c->menu->how_t = sfTexture_createFromFile	\
		("src/images/how.png", NULL);
	c->menu->exit_t = sfTexture_createFromFile	\
		("src/images/exit.png", NULL);
	c->menu->button_t = sfTexture_createFromFile	\
		("src/images/grey.png", NULL);
}

void init_map(container_t *c)
{
	c->map->texture = sfTexture_createFromFile	\
		("src/images/house.png", NULL);
	c->menu->background = sfTexture_createFromFile	\
		("src/images/menu.png", NULL);
	c->map->sprite = sfSprite_create();
	sfSprite_setTexture(c->map->sprite, c->map->texture, sfTrue);
	sfVector2f scale = {1.5, 1.5};
	c->map->nbr_map = -2;
	c->map->rect = malloc(sizeof(sfIntRect) * 2);
	c->map->pos = malloc(sizeof(sfVector2f) * 2);
	c->map->rect[0] = (sfIntRect) {10, 82, 250, 480};
	c->map->pos[0] = (sfVector2f) {800, 200};
	c->map->rect[1] = (sfIntRect) {10, 572, 250, 400};
	c->map->pos[1] = (sfVector2f) {800, 200};
	sfSprite_setScale(c->map->sprite, scale);
	init_two_map(c);
}
