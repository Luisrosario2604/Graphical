/*
** EPITECH PROJECT, 2017
** my_runner
** File description:
** map_load.c
*/

#include "my.h"

int lines_counter(char *map)
{
	int j = 0;
	int a = 0;
	while (map[j] != '\0') {
		if (map[j] == '\n')
			a++;
		j++;
	}
	return (a);
}

int columns_counter(char *map)
{
	int j = 0;
	while (map[j] != '\n') {
		j++;
	}
	return (j);
}

char **map_load2(char *map, int lines, int columns)
{
	int i = 0;
	int j = 0;
	int k = 0;
	while(map[i] != '\0')
		i++;
	i = 0;
	char **buffer = malloc(sizeof(char *) * lines + 1);
	while (map[i] != '\0') {
		buffer[k] = malloc(sizeof(char) * columns + 2);
		while (map[i] != '\n' && map[i] != '\0') {
			buffer[k][j] = map[i];
			j++;
			i++;
		}
		j = 0;
		k++;
		i++;
	}
	free(map);
	return (buffer);
}

int size_file(char *map)
{
	int size = 0;
	FILE *stream;
	char *line = NULL;
	size_t len = 0;
	ssize_t read1;

	stream = fopen(map, "r");
	if (stream == NULL)
		return (84);
	while ((read1 = getline(&line, &len, stream)) != -1) {
		size += read1;
	}
	free(line);
	fclose(stream);
	return (size);
}

char *map_loading(char *map)
{
	int fd = 0;
	int size = size_file(map);
	char *buffer = malloc(sizeof(char) * (size)) ;
	fd = open(map, O_RDONLY);
	if (fd == -1) {
		my_putstr("ERROR : second argument is not a map.txt");
		return(NULL);
	}
	read(fd, buffer, size);
	return (buffer);
}