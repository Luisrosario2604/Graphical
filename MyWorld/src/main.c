/*
** EPITECH PROJECT, 2017
** my_world
** File description:
** main.c
*/

#include "include.h"
#include "struct.h"
#include "function.h"

int main(int ac, char *av[])
{
	if (ac == 2 && av[1][0] == '-' && av[1][1] == 'h') {
		my_putstr(HELP);
	} else if (ac == 1) {
		container_t *container = malloc(sizeof(container_t));
		main_display(container);
		free(container);
		return (0);
	}
}
