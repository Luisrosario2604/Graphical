/*
** EPITECH PROJECT, 2017
** my_putchar
** File description:
** count str lenth
*/

#include "include.h"
#include "struct.h"
#include "function.h"

void map_mouse(container_t *c)
{
	if (c->window->xMouse >= 513 && c->window->xMouse <= 737)
		if (c->window->yMouse >= 303 && c->window->yMouse <= 369) {
			c->maps->size = 10;
			c->window->map_check = 1;
		}
	if (c->window->xMouse >= 513 && c->window->xMouse <= 737)
		if (c->window->yMouse >= 425 && c->window->yMouse <= 488) {
			c->maps->size = 20;
			c->window->map_check = 1;
		}
	if (c->window->xMouse >= 513 && c->window->xMouse <= 737)
		if (c->window->yMouse >= 545 && c->window->yMouse <= 610) {
			c->maps->size = 30;
			c->window->map_check = 1;
		}
}
