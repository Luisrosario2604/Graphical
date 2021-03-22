/*
** EPITECH PROJECT, 2018
** my_world
** File description:
** convert dimensions
*/

#include "include.h"
#include "struct.h"
#include "function.h"

void map_move(container_t *c, int x, int y, sfVector2f **map)
{
	if (c->window->click == 1 && c->window->up == 0)
		map[x][y].y += 1;
	else if (c->window->click == 1 && c->window->up == 1)
		map[x][y].y -= 1;
}

void check_mouse_two(container_t *c, int x, int y, sfVector2f **map)
{
	if (-c->window->xMouse <= c->square->point2.x + 20 &&
		-c->window->xMouse >= c->square->point2.x - 20)
		if (c->window->yMouse <= c->square->point2.y + 20 &&
			c->window->yMouse >= c->square->point2.y - 20)
			map_move(c, x, y, map);
	if (-c->window->xMouse <= c->square->point3.x + 20 &&
		-c->window->xMouse >= c->square->point3.x - 20)
		if (c->window->yMouse <= c->square->point3.y + 20 &&
			c->window->yMouse >= c->square->point3.y - 20)
			map_move(c, x, y, map);
	if (-c->window->xMouse <= c->square->point4.x + 20 &&
		-c->window->xMouse >= c->square->point4.x - 20)
		if (c->window->yMouse <= c->square->point4.y + 20 &&
			c->window->yMouse >= c->square->point4.y - 20)
			map_move(c, x, y, map);
}

void check_mouse(container_t *c, int x, int y, sfVector2f **map)
{
	c->window->xMouse -= 918 - c->window->Xcam - 900;
	c->window->yMouse -= 368 - c->window->Ycam - 400;
	if (-c->window->xMouse <= c->square->point1.x + 20 &&
		-c->window->xMouse >= c->square->point1.x - 20)
		if (c->window->yMouse <= c->square->point1.y + 20 &&
			c->window->yMouse >= c->square->point1.y - 20)
			map_move(c, x, y, map);
	if (c->window->square == 1)
		check_mouse_two(c, x, y, map);
	c->window->xMouse += 918 - c->window->Xcam - 900;
	c->window->yMouse += 368 - c->window->Ycam - 400;
}
