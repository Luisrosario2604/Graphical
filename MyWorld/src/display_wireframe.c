/*
** EPITECH PROJECT, 2018
** my_world
** File description:
** display wireframe
*/

#include "include.h"
#include "struct.h"
#include "function.h"

int wire_frame(sfVector2f **map_2d, container_t *c)
{
	if (sfMouse_isButtonPressed(sfMouseLeft) && c->window->clicked == 0) {
		c->window->clicked = 1;
	} else if (c->window->clicked >= 1 && c->window->clicked <= 10) {
		c->window->clicked += 1;
	} else {
		c->window->clicked = 0;
	}
	sfFloatRect rect = {0, 0, 1216, 1080};
	sfVector2f offset = {c->window->Xcam, c->window->Ycam};
	c->window->view = sfView_createFromRect(rect);
	sfView_move(c->window->view, offset);
	wire_frame_square(map_2d, c);
	print_toolbar(c);
	return (0);
}

void add_lines(sfVector2f **map_2d, container_t *c)
{
	sfVertexArray *array1;
	for (int y = 0; y != c->maps->size - 1; y++) {
		for (int x = 0; x != c->maps->size - 1; x++) {
			c->square->point1 = map_2d[y][x];
			c->square->point2 = map_2d[y][x + 1];
			c->square->point3 = map_2d[y + 1][x + 1];
			c->square->point4 = map_2d[y + 1][x];
			check_mouse(c, x, y, map_2d);
			array1 = create_square_lines(c);
			sfRenderWindow_drawVertexArray(c->window->window,
				array1, NULL);
		}
	}
}

void wire_frame_square(sfVector2f **map_2d, container_t *c)
{
	sfVertexArray *array1;
	sfRenderStates *state = malloc(sizeof(sfRenderStates));
	state->shader = NULL;
	state->texture = sfTexture_createFromFile("images/grass.jpg", NULL);
	state->transform = sfTransform_Identity;
	state->blendMode = sfBlendNone;
	for (int y = 0; y != c->maps->size - 1; y++) {
		for (int x = 0; x != c->maps->size - 1; x++) {
			c->square->point1 = map_2d[y][x];
			c->square->point2 = map_2d[y][x + 1];
			c->square->point3 = map_2d[y + 1][x + 1];
			c->square->point4 = map_2d[y + 1][x];
			array1 = create_square_filled(c);
			sfRenderWindow_drawVertexArray(c->window->window,
				array1, state);
		}
	}
	add_lines(map_2d, c);
	free(state);
}
