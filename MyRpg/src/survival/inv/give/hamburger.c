/*
** EPITECH PROJECT, 2018
** my_world
** File description:
** main_display
*/

#include "include.h"
#include "struct.h"
#include "function.h"

void give_hamburger_two(container_t *c)
{
	switch (c->survival->player_select) {
	case (4) :
		c->survival->food_four += 30;
		c->survival->thirst_four += 0;
		c->survival->moral_four += 0;
		break;
	}
}

void give_hamburger(container_t *c)
{
	c->inv->hamburger -= 1;
	switch (c->survival->player_select) {
	case (1) :
		c->survival->food_one += 30;
		c->survival->moral_one += 0;
		break;
	case (2) :
		c->survival->food_two += 30;
		c->survival->thirst_two += 0;
		c->survival->moral_two += 0;
		break;
	case (3) :
		c->survival->food_three += 30;
		c->survival->thirst_three += 0;
		c->survival->moral_three += 0;
		break;
	default :
		give_hamburger_two(c);
		break;
	}
}
