/*
** EPITECH PROJECT, 2017
** my_putchar
** File description:
** display one character
*/

#include "include.h"
#include "struct.h"
#include "function.h"

void gamma_null(container_t *c)
{
	sfSprite_setColor(c->settings->btn,			\
			sfColor_fromRGBA(255, 255, 255, 255));
}

void gamma_zero(container_t *c, int x, int y)
{
	if (c->window->xMouse >= x && c->window->xMouse <= x + 57) {
		if (c->window->yMouse >= y && c->window->yMouse <= y + 118)
			sfSprite_setColor(c->settings->btn,		\
				sfColor_fromRGBA(255, 255, 255, 100));
	} else
		sfSprite_setColor(c->settings->btn,		\
			sfColor_fromRGBA(255, 255, 255, 255));
}

void gamma_five(container_t *c, int x, int y)
{
	if (c->window->xMouse >= x && c->window->xMouse <= x + 130) {
		if (c->window->yMouse >= y && c->window->yMouse <= y + 118)
			sfSprite_setColor(c->settings->btn,
				sfColor_fromRGBA(255, 255, 255, 100));
	} else
		sfSprite_setColor(c->settings->btn,
			sfColor_fromRGBA(255, 255, 255, 255));
}

void gamma_ten(container_t *c, int x, int y)
{
	if (c->window->xMouse >= x && c->window->xMouse <= x + 180) {
		if (c->window->yMouse >= y && c->window->yMouse <= y + 118)
			sfSprite_setColor(c->settings->btn,
				sfColor_fromRGBA(255, 255, 255, 100));
	} else
		sfSprite_setColor(c->settings->btn,
			sfColor_fromRGBA(255, 255, 255, 255));
}
