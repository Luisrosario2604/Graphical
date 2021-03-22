/*
** EPITECH PROJECT, 2018
** my_rpg
** File description:
** cape manager
*/

#include "include.h"
#include "struct.h"
#include "function.h"

void draw_cape_five(container_t *c)
{
	sfVector2f pos = {897, 472};
	sfVector2f scale = {1, 1};
	sfIntRect rect = {48 * 15, 48 * 9, 48, 48};
	if (c->tree->cape >= 5)
		sfSprite_setColor(c->survival->inv_s,		\
				sfColor_fromRGBA(255, 255, 255, 255));
	else
		sfSprite_setColor(c->survival->inv_s,		\
				sfColor_fromRGBA(255, 255, 255, 60));
	sfSprite_setPosition(c->survival->inv_s, pos);
	sfSprite_setScale(c->survival->inv_s, scale);
	sfSprite_setTexture(c->survival->inv_s, c->tree->item, sfTrue);
	sfSprite_setTextureRect(c->survival->inv_s, rect);
	sfRenderWindow_drawSprite(c->window->window, c->survival->inv_s, NULL);
	sfSprite_setColor(c->survival->inv_s,		\
				sfColor_fromRGBA(255, 255, 255, 255));
}

void draw_cape_four(container_t *c)
{
	sfVector2f pos = {897, 433};
	sfVector2f scale = {1, 1};
	sfIntRect rect = {48 * 14, 48 * 9, 48, 48};
	if (c->tree->cape >= 4)
		sfSprite_setColor(c->survival->inv_s,		\
				sfColor_fromRGBA(255, 255, 255, 255));
	else
		sfSprite_setColor(c->survival->inv_s,		\
				sfColor_fromRGBA(255, 255, 255, 60));
	sfSprite_setPosition(c->survival->inv_s, pos);
	sfSprite_setScale(c->survival->inv_s, scale);
	sfSprite_setTexture(c->survival->inv_s, c->tree->item, sfTrue);
	sfSprite_setTextureRect(c->survival->inv_s, rect);
	sfRenderWindow_drawSprite(c->window->window, c->survival->inv_s, NULL);
	draw_cape_five(c);
}

void draw_cape_three(container_t *c)
{
	sfVector2f pos = {897, 396};
	sfVector2f scale = {1, 1};
	sfIntRect rect = {48 * 13, 48 * 9, 48, 48};
	if (c->tree->cape >= 3)
		sfSprite_setColor(c->survival->inv_s,		\
				sfColor_fromRGBA(255, 255, 255, 255));
	else
		sfSprite_setColor(c->survival->inv_s,		\
				sfColor_fromRGBA(255, 255, 255, 60));
	sfSprite_setPosition(c->survival->inv_s, pos);
	sfSprite_setScale(c->survival->inv_s, scale);
	sfSprite_setTexture(c->survival->inv_s, c->tree->item, sfTrue);
	sfSprite_setTextureRect(c->survival->inv_s, rect);
	sfRenderWindow_drawSprite(c->window->window, c->survival->inv_s, NULL);
	draw_cape_four(c);
}

void draw_cape_two(container_t *c)
{
	sfVector2f pos = {897, 356};
	sfVector2f scale = {1, 1};
	sfIntRect rect = {48 * 12, 48 * 9, 48, 48};
	if (c->tree->cape >= 2)
		sfSprite_setColor(c->survival->inv_s,		\
				sfColor_fromRGBA(255, 255, 255, 255));
	else
		sfSprite_setColor(c->survival->inv_s,		\
				sfColor_fromRGBA(60, 60, 60, 60));
	sfSprite_setPosition(c->survival->inv_s, pos);
	sfSprite_setScale(c->survival->inv_s, scale);
	sfSprite_setTexture(c->survival->inv_s, c->tree->item, sfTrue);
	sfSprite_setTextureRect(c->survival->inv_s, rect);
	sfRenderWindow_drawSprite(c->window->window, c->survival->inv_s, NULL);
	draw_cape_three(c);
}

void draw_cape(container_t *c)
{
	sfVector2f pos = {897, 318};
	sfVector2f scale = {1, 1};
	sfIntRect rect = {48 * 11, 48 * 9, 48, 48};
	if (c->tree->cape >= 1)
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
	draw_cape_two(c);
}
