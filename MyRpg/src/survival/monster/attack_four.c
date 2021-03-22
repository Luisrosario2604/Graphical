/*
** EPITECH PROJECT, 2018
** my_rpg
** File description:
** main monster
*/

#include "include.h"
#include "struct.h"
#include "function.h"

void attack_rdm_four(container_t *c)
{
	int i = (rand() + c->survival->rand) % 3 + 1;
	int a = (rand() + c->survival->rand) % 5 + 1;
	int rdm = rand() % 10 + 1;
	if (rdm <= c->tree->helmet)
		a = 0;
	rdm = rand() % 10 + 1;
	if (rdm <= c->tree->fist)
		c->monster->life -= 1;
	switch (i) {
	case (1) :
		c->survival->moral_four -= a;
		break;
	case (2) :
		c->survival->thirst_four -= a;
		break;
	case (3) :
		c->survival->food_four -= a;
		break;
	}
}

void four_attack_two(container_t *c)
{
	switch (c->inv->last_2_taken) {
	case (19) :
		c->inv->bow_one -= 1;
		c->monster->life -= 2;
		break;
	case (20) :
		c->inv->bow_two -= 1;
		c->monster->life -= 4;
		break;
	case (22) :
		c->inv->sword_ultimate -= 1;
		c->monster->life -= 5;
		break;
	default :
		attack_rdm_four(c);
		c->monster->life -= 1;
		break;
	}
}

void four_attack(container_t *c)
{
	switch (c->inv->last_2_taken) {
	case (16) :
		c->inv->sword_one -= 1;
		attack_rdm_four(c);
		c->monster->life -= 2;
		break;
	case (17) :
		c->inv->sword_two -= 1;
		attack_rdm_four(c);
		c->monster->life -= 3;
		break;
	case (18) :
		c->inv->sword_three -= 1;
		attack_rdm_four(c);
		c->monster->life -= 4;
		break;
	default :
		four_attack_two(c);
		break;
	}
}
