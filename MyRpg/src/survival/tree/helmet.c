/*
** EPITECH PROJECT, 2018
** my_rpg
** File description:
** helemet manager
*/

#include "include.h"
#include "struct.h"
#include "function.h"

void draw_helmet_five(container_t *c)
{
	sfVector2f pos = {938, 472};
	sfVector2f scale = {1, 1};
	sfIntRect rect = {48 * 13, 48 * 8, 48, 48};
	if (c->tree->helmet >= 5)
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

void draw_helmet_four(container_t *c)
{
	sfVector2f pos = {938, 433};
	sfVector2f scale = {1, 1};
	sfIntRect rect = {48 * 12, 48 * 8, 48, 48};
	if (c->tree->helmet >= 4)
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
	draw_helmet_five(c);
}

void draw_helmet_three(container_t *c)
{
	sfVector2f pos = {938, 396};
	sfVector2f scale = {1, 1};
	sfIntRect rect = {48 * 11, 48 * 8, 48, 48};
	if (c->tree->helmet >= 3)
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
	draw_helmet_four(c);
}

void draw_helmet_two(container_t *c)
{
	sfVector2f pos = {938, 356};
	sfVector2f scale = {1, 1};
	sfIntRect rect = {48 * 10, 48 * 8, 48, 48};
	if (c->tree->helmet >= 2)
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
	draw_helmet_three(c);
}

void draw_helmet(container_t *c)
{
	sfVector2f pos = {938, 318};
	sfVector2f scale = {1, 1};
	sfIntRect rect = {48 * 9, 48 * 8, 48, 48};
	if (c->tree->helmet >= 1)
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
	draw_helmet_two(c);
}
