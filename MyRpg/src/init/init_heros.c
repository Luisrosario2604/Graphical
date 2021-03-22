/*
** EPITECH PROJECT, 2018
** my_rpg
** File description:
** init the sprite game
*/

#include "include.h"
#include "struct.h"
#include "function.h"

void init_heros(container_t *c)
{
	c->heros->texture = sfTexture_createFromFile	\
		("src/images/heros/h1.png", NULL);
	c->heros->sprite = sfSprite_create();
	sfSprite_setTexture(c->heros->sprite, c->heros->texture, sfTrue);
	c->heros->rect = malloc(sizeof(sfIntRect) * 2);
	c->heros->pos = malloc(sizeof(sfVector2f) * 2);
	c->heros->mvmt = 0;
	c->heros->anim_nbr = 2;
	c->heros->anim_rect = 0;
	c->heros->speed_mvmt = 0;
	c->heros->rect[0] = (sfIntRect) {c->heros->mvmt, 0, 30, 50};
	c->heros->pos[0] = (sfVector2f) {900, 320};
}
