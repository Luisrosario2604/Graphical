/*
** EPITECH PROJECT, 2018
** my_rpg
** File description:
** main_display
*/

#include "include.h"
#include "struct.h"
#include "function.h"

void up_stats(container_t *c)
{
	int i = (((rand() + c->survival->rand) % 15) + 2);
	c->survival->food_one += i;
	c->survival->thirst_one += i;
	c->survival->moral_one += i;
	c->survival->food_two += i;
	c->survival->thirst_two += i;
	c->survival->moral_two += i;
	c->survival->food_three += i;
	c->survival->thirst_three += i;
	c->survival->moral_three += i;
	c->survival->food_four += i;
	c->survival->thirst_four += i;
	c->survival->moral_four += i;
}

void down_stats(container_t *c)
{
	int i = (((rand() + c->survival->rand) % 5) + 2);
	c->survival->food_one -= i;
	c->survival->thirst_one -= i;
	c->survival->moral_one -= i;
	c->survival->food_two -= i;
	c->survival->thirst_two -= i;
	c->survival->moral_two -= i;
	c->survival->food_three -= i;
	c->survival->thirst_three -= i;
	c->survival->moral_three -= i;
	c->survival->food_four -= i;
	c->survival->thirst_four -= i;
	c->survival->moral_four -= i;
}

void event_manager(container_t *c)
{
	switch (c->survival->random_event) {
	case (1):
		my_putstr("\nVous avez passe une bonne nuit !\n");
		up_stats(c);
		break;
	case (2):
		my_putstr("\nVous avez passe une mauvaise nuit !\n");
		down_stats(c);
		break;
	case (3):
		my_putstr("Monster here\n");
		c->monster->life = 5;
		break;
	case (4):
		//c->map->nbr_map = 1;
		my_putstr("\nCase 4");
		break;
	}
}
