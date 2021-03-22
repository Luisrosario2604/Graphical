/*
** EPITECH PROJECT, 2018
** my_world
** File description:
** convert dimensions
*/

#include "include.h"
#include "struct.h"
#include "function.h"
#include <math.h>

sfVector2f project_iso_point(int x, int y, int z)
{
	sfVector2f pos_2d;
	double angle_x = 35 * M_PI / 180;
	double angle_y = 15 * M_PI / 180;
	pos_2d.x = cos(angle_x) * x - cos(angle_x) * y;
	pos_2d.y = sin(angle_y) * y + sin(angle_y) * x - z;
	return (pos_2d);
}

sfVector2f **create_2d_map(int **map_3d, container_t *c)
{
	sfVector2f **map_2d = malloc(sizeof(sfVector2f *) * c->maps->size);

	for (int i = 0; i != c->maps->size; i++) {
		map_2d[i] = malloc(sizeof(sfVector2f) * c->maps->size);
		for (int x = 0; x != c->maps->size; x++) {
			map_2d[i][x] = project_iso_point(i * SCALING_X, x *
				SCALING_Y, map_3d[i][x] * SCALING_Z);
		}
	}
	return (map_2d);
}

sfVertexArray *create_square_filled(container_t *c)
{
	sfVertexArray *vertex_array = sfVertexArray_create();
	sfVertex vertex1 = {.position = c->square->point1, .color = sfWhite};
	sfVertex vertex2 = {.position = c->square->point2, .color = sfWhite};
	sfVertex vertex3 = {.position = c->square->point3, .color = sfWhite};
	sfVertex vertex4 = {.position = c->square->point4, .color = sfWhite};
	sfVertexArray_append(vertex_array, vertex1);
	sfVertexArray_append(vertex_array, vertex2);
	sfVertexArray_append(vertex_array, vertex3);
	sfVertexArray_append(vertex_array, vertex4);
	sfVertexArray_append(vertex_array, vertex1);
	sfVertexArray_setPrimitiveType(vertex_array, sfQuads);
	return (vertex_array);
}

sfVertexArray *create_square_lines(container_t *c)
{
	sfColor color = sfWhite;
	if (c->maps->color_line == 1)
		color = sfBlue;
	else if (c->maps->color_line == 2)
		color = sfRed;
	else
		color = sfGreen;
	sfVertexArray *vertex_array = sfVertexArray_create();
	sfVertex vertex1 = {.position = c->square->point1, .color = color};
	sfVertex vertex2 = {.position = c->square->point2, .color = color};
	sfVertex vertex3 = {.position = c->square->point3, .color = color};
	sfVertex vertex4 = {.position = c->square->point4, .color = color};
	sfVertexArray_append(vertex_array, vertex1);
	sfVertexArray_append(vertex_array, vertex2);
	sfVertexArray_append(vertex_array, vertex3);
	sfVertexArray_append(vertex_array, vertex4);
	sfVertexArray_append(vertex_array, vertex1);
	sfVertexArray_setPrimitiveType(vertex_array, sfLinesStrip);
	return (vertex_array);
}
