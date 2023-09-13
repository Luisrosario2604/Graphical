/*
** EPITECH PROJECT, 2017
** my_runner
** File description:
** starter.c
*/

#include "my.h"

char **map_load(char *map)
{
	map = map_loading(map);
	int lines = lines_counter(map);
	int columns = columns_counter(map);
	char **map_l = map_load2(map, lines, columns);
	return (map_l);
}

void close_window(sfRenderWindow *window, sfEvent event)
{
	if (event.type == sfEvtClosed)
	{
		sfRenderWindow_close(window);
	}
}
