/*
** EPITECH PROJECT, 2018
** my_rpg
** File description:
** main_display
*/

#include "include.h"
#include "struct.h"
#include "function.h"

int animated_hero_left(int i)
{
	switch (i) {
	case (0) :
		return (32);
		break;
	case (32) :
		return (64);
		break;
	case (64) :
		return (96);
		break;
	case (96) :
		return (0);
		break;
	default :
		return (0);
		break;
	}
}

void animate_hero_two_c(container_t *c, int i)
{
	switch (i) {
		case (1) :
			c->survival->rect_one.left =			\
				animated_hero_left(c->survival->rect_one.left);
			break;
		case (2) :
			c->survival->rect_two.left =			\
				animated_hero_left(c->survival->rect_two.left);
			break;
		case (3) :
			c->survival->rect_three.left = animated_hero_left\
				(c->survival->rect_three.left);
			break;
		case (4) :
			c->survival->rect_four.left = animated_hero_left\
				(c->survival->rect_four.left);
			break;
		}
}

void animate_hero(container_t *c, int i)
{
	if (c->survival->rd_slow == 5) {
		animate_hero_two_c(c, i);
		c->survival->rd_slow = 0;
	} else
		c->survival->rd_slow += 1;
}
