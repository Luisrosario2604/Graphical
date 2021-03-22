/*
** EPITECH PROJECT, 2017
** my_putchar
** File description:
** count str lenth
*/

#include "include.h"
#include "struct.h"
#include "function.h"

void mouse(container_t *c)
{
	const sfWindow *windw = c->window->window;
	sfVector2i Mouse = sfMouse_getPosition(windw);
	c->window->xMouse = Mouse.x;
	c->window->yMouse = Mouse.y;
}
