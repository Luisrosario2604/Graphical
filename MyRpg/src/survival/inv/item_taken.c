/*
** EPITECH PROJECT, 2018
** my_rpg
** File description:
** item taken
*/

#include "include.h"
#include "struct.h"
#include "function.h"

void taken_item_five(container_t *c)
{
	switch (c->inv->taken) {
	case (6) :
		draw_soupe(c);
		break;
	case (7) :
		draw_smoothie(c);
		break;
	case (8) :
		draw_bottle(c);
		break;
	case (9) :
		draw_honey(c);
		break;
	case (15) :
		draw_potion(c);
		break;
	default :
		break;
	}
}

void taken_item_four(container_t *c)
{
	switch (c->inv->taken) {
	case (12) :
		draw_apple(c);
		break;
	case (11) :
		draw_hamburger(c);
		break;
	case (10) :
		draw_chicken(c);
		break;
	case (13) :
		draw_fish(c);
		break;
	case (14) :
		draw_sushi(c);
		break;
	default :
		taken_item_five(c);
		break;
	}
}

void taken_item_three(container_t *c)
{
	switch (c->inv->taken) {
        case (16) :
		draw_sword_one(c);
		break;
	case (17) :
		draw_sword_two(c);
		break;
	case (18) :
		draw_sword_three(c);
		break;
	case (19) :
		draw_bow_one(c);
		break;
	case (20) :
		draw_bow_two(c);
		break;
	default :
		taken_item_four(c);
		break;
	}
}

void taken_item_two(container_t *c)
{
	switch (c->inv->taken) {
	case (21) :
		draw_diamond(c);
		break;
	case (22) :
		draw_sword_ultimate(c);
		break;
	case (23) :
		draw_gift(c);
		break;
	case (24) :
		draw_key(c);
		break;
	case (25) :
		draw_totem(c);
		break;
	default :
		taken_item_three(c);
		break;
	}
}

void taken_item(container_t *c)
{
	switch (c->inv->taken) {
	case (1) :
		draw_paint(c);
		break;
	case (2) :
		draw_bonzai(c);
		break;
	case (3) :
		draw_card(c);
		break;
	case (4) :
		draw_bear(c);
		break;
	case (5) :
		draw_letter(c);
		break;
	default :
		taken_item_two(c);
		break;
	}
}
