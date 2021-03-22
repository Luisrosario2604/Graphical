/*
** EPITECH PROJECT, 2018
** my_rpg
** File description:
** shoes manager
*/

#include "include.h"
#include "struct.h"
#include "function.h"

void draw_shoes_five(container_t *c)
{
	sfVector2f pos = {782, 472};
	sfVector2f scale = {1, 1};
	sfIntRect rect = {48 * 4, 48 * 10, 48, 48};
	if (c->tree->shoes >= 5)
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

void draw_shoes_four(container_t *c)
{
	sfVector2f pos = {782, 433};
	sfVector2f scale = {1, 1};
	sfIntRect rect = {48 * 3, 48 * 10, 48, 48};
	if (c->tree->shoes >= 4)
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
	draw_shoes_five(c);
}

void draw_shoes_three(container_t *c)
{
	sfVector2f pos = {782, 396};
	sfVector2f scale = {1, 1};
	sfIntRect rect = {48 * 2, 48 * 10, 48, 48};
	if (c->tree->shoes >= 3)
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
	draw_shoes_four(c);
}

void draw_shoes_two(container_t *c)
{
	sfVector2f pos = {782, 356};
	sfVector2f scale = {1, 1};
	sfIntRect rect = {48 * 1, 48 * 10, 48, 48};
	if (c->tree->shoes >= 2)
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
	draw_shoes_three(c);
}

void draw_shoes(container_t *c)
{
	sfVector2f pos = {782, 318};
	sfVector2f scale = {1, 1};
	sfIntRect rect = {48 * 0, 48 * 10, 48, 48};
	if (c->tree->shoes >= 1)
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
	draw_shoes_two(c);
}
