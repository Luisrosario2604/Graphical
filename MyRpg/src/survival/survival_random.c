/*
** EPITECH PROJECT, 2018
** my_rpg
** File description:
**randomize a number for stats
*/

#include "include.h"
#include "struct.h"
#include "function.h"

void random_hero(container_t *c)
{
	c->survival->counter += 1;
	if (c->survival->counter == 300) {
		c->survival->rd_hero = (rand() + c->survival->rand) % 4 + 1;
	} else if (c->survival->counter >= 300 + (6 * 4 * 2)) {
		c->survival->rd_hero = 0;
		c->survival->counter = 0;
	}
}
