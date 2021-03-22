/*
** EPITECH PROJECT, 2017
** my_putchar
** File description:
** count str lenth
*/

#include "include.h"
#include "struct.h"
#include "function.h"

int **getfile(char *file)
{
	FILE *stream;
	char *line = NULL;
	size_t len = 0;
	int **map;
	int i = 0;
	stream = fopen(file, "r");
	map = malloc(sizeof(int *) * MAP_Y + 1);
	while (getline(&line, &len, stream) != - 1) {
		map[i] = malloc(sizeof(int) * my_strlen(line) + 2);
		for (int x = 0; line[x] != '\n'; x++) {
			map[i][x] = line[x] - 48;
		}
		i++;
	}
	map[i] = NULL;
	return (map);
}
