/*
** EPITECH PROJECT, 2018
** my_rpg
** File description:
** rect_stats
*/

#include "include.h"
#include "struct.h"
#include "function.h"

void rect_four(container_t *c, int carac)
{
	switch (carac) {
	case (1) :
		c->survival->rect_stats.width = c->survival->thirst_four;
		print_item_stat(c, c->survival->thirst_four, carac);
		break;
	case (2) :
		c->survival->rect_stats.width = c->survival->food_four;
		print_item_stat(c, c->survival->food_four, carac);
		break;
	case (3) :
		c->survival->rect_stats.width = c->survival->moral_four;
		print_item_stat(c, c->survival->moral_four, carac);
		break;
	}
}

void rect_three(container_t *c, int carac)
{
	switch (carac) {
	case (1) :
		c->survival->rect_stats.width = c->survival->thirst_three;
		print_item_stat(c, c->survival->thirst_three, carac);
		break;
	case (2) :
		c->survival->rect_stats.width = c->survival->food_three;
		print_item_stat(c, c->survival->food_three, carac);
		break;
	case (3) :
		c->survival->rect_stats.width = c->survival->moral_three;
		print_item_stat(c, c->survival->moral_three, carac);
		break;
	}
}

void rect_two(container_t *c, int carac)
{
	switch (carac) {
	case (1) :
		c->survival->rect_stats.width = c->survival->thirst_two;
		print_item_stat(c, c->survival->thirst_two, carac);
		break;
	case (2) :
		c->survival->rect_stats.width = c->survival->food_two;
		print_item_stat(c, c->survival->food_two, carac);
		break;
	case (3) :
		c->survival->rect_stats.width = c->survival->moral_two;
		print_item_stat(c, c->survival->moral_two, carac);
		break;
	}
}

void rect_one(container_t *c, int carac)
{
	switch (carac) {
	case (1) :
		c->survival->rect_stats.width = c->survival->thirst_one;
		print_item_stat(c, c->survival->thirst_one, carac);
		break;
	case (2) :
		c->survival->rect_stats.width = c->survival->food_one;
		print_item_stat(c, c->survival->food_one, carac);
		break;
	case (3) :
		c->survival->rect_stats.width = c->survival->moral_one;
		print_item_stat(c, c->survival->moral_one, carac);
		break;
	}
}
