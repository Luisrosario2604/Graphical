/*
** EPITECH PROJECT, 2018
** my_rpg
** File description:
** fist manager
*/

#include "include.h"
#include "struct.h"
#include "function.h"

void draw_fist_five(container_t *c)
{
	sfVector2f pos = {860, 472};
	sfVector2f scale = {1, 1};
	sfIntRect rect = {48 * 9, 48 * 6, 48, 48};
	if (c->tree->fist >= 5)
		sfSprite_setColor(c->survival->inv_s,		\
				sfColor_fromRGBA(255, 255, 255, 255));
	else
		sfSprite_setColor(c->survival->inv_s,		\
				sfColor_fromRGBA(120, 120, 120, 60));
	sfSprite_setPosition(c->survival->inv_s, pos);
	sfSprite_setScale(c->survival->inv_s, scale);
	sfSprite_setTexture(c->survival->inv_s, c->tree->item, sfTrue);
	sfSprite_setTextureRect(c->survival->inv_s, rect);
	sfRenderWindow_drawSprite(c->window->window, c->survival->inv_s, NULL);
}

void draw_fist_four(container_t *c)
{
	sfVector2f pos = {860, 433};
	sfVector2f scale = {1, 1};
	sfIntRect rect = {48 * 8, 48 * 6, 48, 48};
	if (c->tree->fist >= 4)
		sfSprite_setColor(c->survival->inv_s,		\
				sfColor_fromRGBA(255, 255, 255, 255));
	else
		sfSprite_setColor(c->survival->inv_s,		\
				sfColor_fromRGBA(120, 120, 120, 60));
	sfSprite_setPosition(c->survival->inv_s, pos);
	sfSprite_setScale(c->survival->inv_s, scale);
	sfSprite_setTexture(c->survival->inv_s, c->tree->item, sfTrue);
	sfSprite_setTextureRect(c->survival->inv_s, rect);
	sfRenderWindow_drawSprite(c->window->window, c->survival->inv_s, NULL);
	draw_fist_five(c);
}

void draw_fist_three(container_t *c)
{
	sfVector2f pos = {860, 396};
	sfVector2f scale = {1, 1};
	sfIntRect rect = {48 * 7, 48 * 6, 48, 48};
	if (c->tree->fist >= 3)
		sfSprite_setColor(c->survival->inv_s,		\
				sfColor_fromRGBA(255, 255, 255, 255));
	else
		sfSprite_setColor(c->survival->inv_s,		\
				sfColor_fromRGBA(120, 120, 120, 60));
	sfSprite_setPosition(c->survival->inv_s, pos);
	sfSprite_setScale(c->survival->inv_s, scale);
	sfSprite_setTexture(c->survival->inv_s, c->tree->item, sfTrue);
	sfSprite_setTextureRect(c->survival->inv_s, rect);
	sfRenderWindow_drawSprite(c->window->window, c->survival->inv_s, NULL);
	draw_fist_four(c);
}

void draw_fist_two(container_t *c)
{
	sfVector2f pos = {860, 356};
	sfVector2f scale = {1, 1};
	sfIntRect rect = {48 * 6, 48 * 6, 48, 48};
	if (c->tree->fist >= 2)
		sfSprite_setColor(c->survival->inv_s,		\
				sfColor_fromRGBA(255, 255, 255, 255));
	else
		sfSprite_setColor(c->survival->inv_s,		\
				sfColor_fromRGBA(120, 120, 120, 60));
	sfSprite_setPosition(c->survival->inv_s, pos);
	sfSprite_setScale(c->survival->inv_s, scale);
	sfSprite_setTexture(c->survival->inv_s, c->tree->item, sfTrue);
	sfSprite_setTextureRect(c->survival->inv_s, rect);
	sfRenderWindow_drawSprite(c->window->window, c->survival->inv_s, NULL);
	draw_fist_three(c);
}

void draw_fist(container_t *c)
{
	sfVector2f pos = {860, 318};
	sfVector2f scale = {1, 1};
	sfIntRect rect = {48 * 5, 48 * 6, 48, 48};
	if (c->tree->fist >= 1)
		sfSprite_setColor(c->survival->inv_s,		\
				sfColor_fromRGBA(255, 255, 255, 255));
	else
		sfSprite_setColor(c->survival->inv_s,		\
				sfColor_fromRGBA(120, 120, 120, 60));
	sfSprite_setPosition(c->survival->inv_s, pos);
	sfSprite_setScale(c->survival->inv_s, scale);
	sfSprite_setTexture(c->survival->inv_s, c->tree->item, sfTrue);
	sfSprite_setTextureRect(c->survival->inv_s, rect);
	sfRenderWindow_drawSprite(c->window->window, c->survival->inv_s, NULL);
	draw_fist_two(c);
}
