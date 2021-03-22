/*
** EPITECH PROJECT, 2018
** my_rpg
** File description:
** tree manager
*/

#include "include.h"
#include "struct.h"
#include "function.h"

void five_condition(container_t *c, sfVector2f x_five, sfVector2f y_five)
{
	if (mouse_check(c, x_five, y_five) == 2 &&	\
		c->tree->helmet <= 4) {
			c->tree->helmet += 1;
			c->tree->check = 0;
			c->tree->points -= 1;
		}
}

void four_condition(container_t *c, sfVector2f x_four, sfVector2f y_four)
{
	if (mouse_check(c, x_four, y_four) == 2 && c->tree->cape <= 4) {
			c->tree->cape += 1;
			c->tree->check = 0;
			c->tree->points -= 1;
		}
}

void third_condition(container_t *c, sfVector2f x_three, sfVector2f y_three)
{
	if (mouse_check(c, x_three, y_three) == 2 &&	\
		c->tree->fist <= 4) {
			c->tree->fist += 1;
			c->tree->check = 0;
			c->tree->points -= 1;
		}
}

void second_condition(container_t *c, sfVector2f x_two, sfVector2f y_two)
{
	if (mouse_check(c, x_two, y_two) == 2 && c->tree->gloves <= 4) {
			c->tree->gloves += 1;
			c->tree->check = 0;
			c->tree->points -= 1;
		}
}

void first_condition(container_t *c, sfVector2f x_one, sfVector2f y_one)
{
	if (mouse_check(c, x_one, y_one) == 2 && c->tree->shoes <= 4) {
			c->tree->shoes += 1;
			c->tree->check = 0;
			c->tree->points -= 1;
		}
}
