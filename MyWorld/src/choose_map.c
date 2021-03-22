/*
** EPITECH PROJECT, 2018
** my_world
** File description:
** convert dimensions
*/

#include "include.h"
#include "struct.h"
#include "function.h"

void choose_map_two(container_t *c, sfVector2f pos)
{
	sfSprite_setTexture(c->maps->map, c->maps->map3_t, sfTrue);
	sfSprite_setPosition(c->maps->map, pos);
	sfRenderWindow_drawSprite(c->window->window, c->maps->map, NULL);
	sfSprite_setTexture(c->maps->map, c->maps->load_t, sfTrue);
	pos.x = 270;
	pos.y += 120;
	sfSprite_setPosition(c->maps->map, pos);
	sfRenderWindow_drawSprite(c->window->window, c->maps->map, NULL);
	sfSprite_setTexture(c->maps->map, c->maps->reset_t, sfTrue);
	pos.x = 750;
	sfSprite_setPosition(c->maps->map, pos);
	sfRenderWindow_drawSprite(c->window->window, c->maps->map, NULL);
}

void choose_map(container_t *c)
{
	if (c->window->click == 1)
		map_mouse(c);
	sfVector2f pos = {500, 300};
	sfSprite_setTexture(c->maps->map, c->maps->map1_t, sfTrue);
	sfSprite_setPosition(c->maps->map, pos);
	sfRenderWindow_drawSprite(c->window->window, c->maps->map, NULL);
	pos.y += 120;
	sfSprite_setPosition(c->maps->map, pos);
	sfRenderWindow_drawSprite(c->window->window, c->maps->map, NULL);
	sfSprite_setTexture(c->maps->map, c->maps->map2_t, sfTrue);
	sfSprite_setPosition(c->maps->map, pos);
	sfRenderWindow_drawSprite(c->window->window, c->maps->map, NULL);
	pos.y += 120;
	choose_map_two(c, pos);
}

int **create_map_size(container_t *c)
{
	int **map = malloc(sizeof(int *) * c->maps->size + 3);

	for (int y = 0; y != c->maps->size; y++) {
		map[y] = malloc(sizeof(int) * c->maps->size + 1);
		for (int x = 0; x != c->maps->size; x++) {
			map[y][x] = 0;
		}
	}
	return (map);
}
