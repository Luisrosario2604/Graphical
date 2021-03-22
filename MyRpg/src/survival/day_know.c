/*
** EPITECH PROJECT, 2018
** my_rpg
** File description:
** passing day
*/

#include "include.h"
#include "struct.h"
#include "function.h"

void day_know(container_t *c)
{
	switch (c->survival->black_count) {
	case (0) :
		c->survival->pass_day += 2;
		break;
	case (1) :
		c->survival->pass_day -= 2;
		break;
	}
}
