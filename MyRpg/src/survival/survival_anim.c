/*
** EPITECH PROJECT, 2018
** my_rpg
** File description:
** animation
*/

#include "include.h"
#include "struct.h"
#include "function.h"

void rect_anim(container_t *c)
{
	switch (c->survival->anim_r.left) {
	case (977) :
		c->survival->anim_r.left = 994;
		break;
	case (994) :
		c->survival->anim_r.left = 1011;
		break;
	case (1011) :
		c->survival->anim_r.left = 1028;
		break;
	case (1028) :
		c->survival->anim_r.left = 977;
		break;
	default :
		c->survival->anim_r.left = 977;
		break;
	}
}

void anim_manager_two(container_t *c)
{
	sfVector2f pos = {739, 275};
	sfVector2f pos2 = {990, 377};
	sfVector2f pos1 = {1132, 561};

	sfSprite_setPosition(c->survival->anim, pos);
	sfSprite_setTextureRect(c->survival->anim, c->survival->anim_r);
	sfRenderWindow_drawSprite(c->window->window, c->survival->anim, NULL);
	c->survival->anim_r.top = 969;
	sfSprite_setPosition(c->survival->anim, pos1);
	sfSprite_setTextureRect(c->survival->anim, c->survival->anim_r);
	sfRenderWindow_drawSprite(c->window->window, c->survival->anim, NULL);
	sfSprite_setPosition(c->survival->anim, pos2);
	sfSprite_setTextureRect(c->survival->anim, c->survival->anim_r);
	sfRenderWindow_drawSprite(c->window->window, c->survival->anim, NULL);
}

void anim_manager(container_t *c)
{
	c->survival->anim_count += 1;
	if (c->survival->anim_count >= 5) {
		c->survival->anim_count = 0;
		rect_anim(c);
	}
	c->survival->anim_r.top = 1003;
	c->survival->anim_r.width = 15;
	c->survival->anim_r.height = 31;
	sfVector2f pos = {1055.5, 112};
	sfVector2f scale = {1.5, 1.5};
	sfSprite_setScale(c->survival->anim, scale);
	sfSprite_setTexture(c->survival->anim, c->survival->house, sfTrue);
	sfSprite_setPosition(c->survival->anim, pos);
	sfSprite_setTextureRect(c->survival->anim, c->survival->anim_r);
	sfRenderWindow_drawSprite(c->window->window, c->survival->anim, NULL);
	anim_manager_two(c);
}
