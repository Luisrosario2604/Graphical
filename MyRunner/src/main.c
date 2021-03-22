/*
** EPITECH PROJECT, 2017
** my_runner
** File description:
** main.c
*/

#include "my.h"

void free_main(size *arg, sprite *sprt, window *windw)
{
	free(sprt);
	free(arg);
	free(windw);
	free(arg->map);
}

int main_two(int ac, char *av[])
{
	if (ac == 2 && av[1][1] == 'h' && av[1][0] == '-') {
		display_help();
		return (0);
	} else {
		my_putstr("Use : ./my_runner -h\n");
		return (84);
	}
}

int main(int ac, char *av[])
{
	size *arg = malloc(sizeof(size));
	sprite *sprt = malloc(sizeof(sprite));
	window *windw = malloc(sizeof(window));
	arg->exit = 0;
	if (ac == 3 && av[2][1] == 'i' && av[2][0] == '-') {
		arg->map = map_load(av[1]);
		windw->infinite = 1;
		main_display(arg, sprt, windw);
		return (0);
	} else if (ac == 2 && av[1][1] != 'h' && av[1][0] != '-') {
		arg->map = map_load(av[1]);
		windw->infinite = 0;
		main_display(arg, sprt, windw);
		return (0);
	} else {
		int i = main_two(ac, av);
		return (i);
	}
	free_main(arg, sprt, windw);
}
