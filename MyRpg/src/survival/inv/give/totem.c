/*
** EPITECH PROJECT, 2018
** my_world
** File description:
** main_display
*/

#include "include.h"
#include "struct.h"
#include "function.h"

void give_totem_two(container_t *c)
{
	switch (c->survival->player_select) {
	case (3) :
		c->survival->food_three += 100;
		c->survival->thirst_three += 100;
		c->survival->moral_three += 100;
		break;
	case (4) :
		c->survival->food_four += 100;
		c->survival->thirst_four += 100;
		c->survival->moral_four += 100;
		break;
	}
}

void give_totem(container_t *c)
{
	c->inv->totem -= 1;
	switch (c->survival->player_select) {
	case (1) :
		c->survival->food_one += 100;
		c->survival->thirst_one += 100;
		c->survival->moral_one += 100;
		break;
	case (2) :
		c->survival->food_two += 100;
		c->survival->thirst_two += 100;
		c->survival->moral_two += 100;
		break;
	default :
		give_totem_two(c);
		break;
	}
}
