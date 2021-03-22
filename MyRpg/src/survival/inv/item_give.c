/*
** EPITECH PROJECT, 2018
** my_rpg
** File description:
** item give
*/

#include "include.h"
#include "struct.h"
#include "function.h"

void give_item_five(container_t *c)
{
	switch (c->inv->last_taken) {
	case (6) :
		give_soupe(c);
		break;
	case (7) :
		give_smoothie(c);
		break;
	case (8) :
		give_bottle(c);
		break;
	case (9) :
		give_honey(c);
		break;
	case (15) :
		give_potion(c);
		break;
	default :
		break;
	}
}

void give_item_four(container_t *c)
{
	switch (c->inv->last_taken) {
	case (12) :
		give_apple(c);
		break;
	case (11) :
		give_hamburger(c);
		break;
	case (10) :
		give_chicken(c);
		break;
	case (13) :
		give_fish(c);
		break;
	case (14) :
		give_sushi(c);
		break;
	default :
		give_item_five(c);
		break;
	}
}

void give_item_three(container_t *c)
{
	switch (c->inv->last_taken) {
        case (16) :
		give_sword_one(c);
		break;
	case (17) :
		give_sword_two(c);
		break;
	case (18) :
		give_sword_three(c);
		break;
	case (19) :
		give_bow_one(c);
		break;
	case (20) :
		give_bow_two(c);
		break;
	default :
		give_item_four(c);
		break;
	}
}

void give_item_two(container_t *c)
{
	switch (c->inv->last_taken) {
	case (21) :
		give_diamond(c);
		break;
	case (22) :
		give_sword_ultimate(c);
		break;
	case (23) :
		give_gift(c);
		break;
	case (24) :
		give_key(c);
		break;
	case (25) :
		give_totem(c);
		break;
	default :
		give_item_three(c);
		break;
	}
}

void give_item(container_t *c)
{
	switch (c->inv->last_taken) {
	case (1) :
		give_paint(c);
		break;
	case (2) :
		give_bonzai(c);
		break;
	case (3) :
		give_card(c);
		break;
	case (4) :
		give_bear(c);
		break;
	case (5) :
		give_letter(c);
		break;
	default :
		give_item_two(c);
		break;
	}
}
