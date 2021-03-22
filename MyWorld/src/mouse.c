/*
** EPITECH PROJECT, 2017
** my_putchar
** File description:
** count str lenth
*/

#include "include.h"
#include "struct.h"
#include "function.h"

void mouse_sprt(container_t *c)
{
	if (c->window->click == 1 && c->window->scene != 1) {
		sfVector2f pos = {c->window->xMouse - 46,
			c->window->yMouse - 25};
		sfVector2f scale = {0.2, 0.2};
		sfSprite_setScale(c->window->click_s, scale);
		sfSprite_setPosition(c->window->click_s, pos);
		sfSprite_setTexture(c->window->click_s,
			c->window->click_t, sfTrue);
		sfRenderWindow_drawSprite(c->window->window,
			c->window->click_s, NULL);
	}
}

void mouse(container_t *c)
{
	const sfWindow *windw = c->window->window;
	sfVector2i Mouse = sfMouse_getPosition(windw);
	c->window->xMouse = Mouse.x;
	c->window->yMouse = Mouse.y;
}
