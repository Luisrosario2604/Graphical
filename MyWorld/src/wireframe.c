/*
** EPITECH PROJECT, 2018
** my_world
** File description:
** convert dimensions
*/

#include "include.h"
#include "struct.h"
#include "function.h"

void mouse_tool_two(container_t *c)
{
	int ok = 0;
	if (c->window->xMouse >= 317 && c->window->xMouse <= 383) {
		if (c->window->yMouse >= 11 && c->window->yMouse <= 89)
			ok = 1;
	}
	if (ok == 1 && c->window->clicked == 1) {
		if (c->window->square == 1)
			c->window->square = 0;
		else
			c->window->square = 1;
	}
	if (ok == 1)
		sfSprite_setColor(c->settings->btn,
			sfColor_fromRGBA(255, 255, 255, 100));
	else
		sfSprite_setColor(c->settings->btn,
			sfColor_fromRGBA(255, 255, 255, 255));
}

void mouse_tool(container_t *c)
{
	int ok = 0;
	if (c->window->xMouse >= 194 && c->window->xMouse <= 250) {
		if (c->window->yMouse >= 17 && c->window->yMouse <= 79)
			ok = 1;
	}
	if (ok == 1 && c->window->clicked == 1) {
		if (c->window->up == 1)
			c->window->up = 0;
		else
			c->window->up = 1;
	}
	if (ok == 1)
		sfSprite_setColor(c->settings->btn,
			sfColor_fromRGBA(255, 255, 255, 100));
	else
		sfSprite_setColor(c->settings->btn,
			sfColor_fromRGBA(255, 255, 255, 255));
}

void print_toolbar_two(container_t *c, sfVector2f scale2)
{
	sfSprite_setScale(c->toolbar->btn, scale2);
	sfRenderWindow_drawSprite(c->window->window, c->toolbar->btn, NULL);
}

void print_toolbar(container_t *c)
{
	sfVector2f pos = {200 + c->window->Xcam, 0 + c->window->Ycam};
	sfVector2f scale = {0.25, 0.4};
	sfVector2f pos2 = {300 + c->window->Xcam, 0 + c->window->Ycam};
	sfVector2f scale2 = {0.15, 0.2};
	sfSprite_setPosition(c->toolbar->btn, pos);
	sfSprite_setScale(c->toolbar->btn, scale);
	mouse_tool(c);
	if (c->window->up == 1)
		sfSprite_setTexture(c->toolbar->btn, c->toolbar->up, sfTrue);
	else
		sfSprite_setTexture(c->toolbar->btn, c->toolbar->down, sfTrue);
	sfRenderWindow_drawSprite(c->window->window, c->toolbar->btn, NULL);
	mouse_tool_two(c);
	if (c->window->square == 1)
		sfSprite_setTexture(c->toolbar->btn, c->toolbar->cube, sfTrue);
	else
		sfSprite_setTexture(c->toolbar->btn, c->toolbar->corner, \
				sfTrue);
	sfSprite_setPosition(c->toolbar->btn, pos2);
	print_toolbar_two(c, scale2);
}
