/*
** EPITECH PROJECT, 2017
** my_rpg
** File description:
** main.c
*/

#include "include.h"
#include "struct.h"
#include "function.h"

int main(int ac, char *av[])
{
	if (ac == 2 && av[1][0] == '-' && av[1][1] == 'h') {
		my_putstr("Help -h");
	} else if (ac == 1) {
		container_t *container = malloc(sizeof(container_t));
		window(container);
		free(container);
		return (0);
	} else {
		return (84);
	}
}
