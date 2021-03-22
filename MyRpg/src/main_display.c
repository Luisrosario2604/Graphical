/*
** EPITECH PROJECT, 2018
** my_world
** File description:
** main_display
*/

#include "include.h"
#include "struct.h"
#include "function.h"

void main_game(container_t *c)
{
	if (c->map->nbr_map == -1)
		survival_mode(c);
	else if (c->map->nbr_map == -2)
		menu_manager(c);
	else {
	draw_map(c->map->nbr_map, c);
	draw_heros(c);
	}
	sfRenderWindow_display(c->window->window);
	sfRenderWindow_clear(c->window->window, sfColor_fromRGB(48, 32, 32));
}
