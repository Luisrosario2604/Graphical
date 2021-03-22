/*
** EPITECH PROJECT, 2018
** my_world
** File description:
** convert dimensions
*/

#include "include.h"
#include "struct.h"
#include "function.h"

char *int_to_str(int *i, container_t *c)
{
	int x;
	char *line = malloc(sizeof(char) * c->maps->size);
	for (x = 0; x != c->maps->size - 1; x++) {
		line[x] = i[x] + 48;
	}
	line[x] = '\0';
	return (line);
}

char *int_to_str_first(int *i)
{
	char *line = malloc(sizeof(char) * 2);
	line[0] = i[0] + 48;
	line[1] = '\0';

	return (line);
}

void save_map(int **map, container_t *c)
{
	char *line = NULL;
	int fd = open("./saved_map.txt", O_TRUNC, S_IRWXU);
	if (fd == -1)
		fd = creat("./saved_map.txt", S_IRWXU);
	for (int y = 0; y != c->maps->size; y++) {
		line = int_to_str(map[y], c);
		write(fd, line, my_strlen(line));
		write(fd, "\n", 1);
	}
}
