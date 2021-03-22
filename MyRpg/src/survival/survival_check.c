/*
** EPITECH PROJECT, 2018
** my_rpg
** File description:
** checking_deaths
*/

#include "include.h"
#include "struct.h"
#include "function.h"

void hero_check_dead_two(container_t *c)
{
	if (c->survival->moral_two <= 0)
		c->survival->dead = 1;
	if (c->survival->moral_four <= 0)
		c->survival->dead = 1;
	if (c->survival->thirst_three <= 0)
		c->survival->dead = 1;
	if (c->survival->thirst_one <= 0)
		c->survival->dead = 1;
	if (c->survival->thirst_two <= 0)
		c->survival->dead = 1;
	if (c->survival->thirst_four <= 0)
		c->survival->dead = 1;
}

void hero_check_dead(container_t *c)
{
	if (c->survival->food_three <= 0)
		c->survival->dead = 1;
	if (c->survival->food_one <= 0)
		c->survival->dead = 1;
	if (c->survival->food_two <= 0)
		c->survival->dead = 1;
	if (c->survival->food_four <= 0)
		c->survival->dead = 1;
	if (c->survival->moral_three <= 0)
		c->survival->dead = 1;
	if (c->survival->moral_one <= 0)
		c->survival->dead = 1;
	hero_check_dead_two(c);
}

void hero_check_stat_two(container_t *c)
{
	if (c->survival->moral_four > 100)
		c->survival->moral_four = 100;
	if (c->survival->thirst_three > 100)
		c->survival->thirst_three = 100;
	if (c->survival->thirst_one > 100)
		c->survival->thirst_one = 100;
	if (c->survival->thirst_two > 100)
		c->survival->thirst_two = 100;
	if (c->survival->thirst_four > 100)
		c->survival->thirst_four = 100;
}

void hero_check_stat(container_t *c)
{
	if (c->survival->food_three > 100)
		c->survival->food_three = 100;
	if (c->survival->food_one > 100)
		c->survival->food_one = 100;
	if (c->survival->food_two > 100)
		c->survival->food_two = 100;
	if (c->survival->food_four > 100)
		c->survival->food_four = 100;
	if (c->survival->moral_three > 100)
		c->survival->moral_three = 100;
	if (c->survival->moral_one > 100)
		c->survival->moral_one = 100;
	if (c->survival->moral_two > 100)
		c->survival->moral_two = 100;
	hero_check_stat_two(c);
}
