/*
** EPITECH PROJECT, 2018
** my_rpg
** File description:
** main_display
*/

#include "include.h"
#include "struct.h"
#include "function.h"

void init_items_two(container_t *c)
{
	c->inv->potion = 10;
	c->inv->sword_one = 10;
	c->inv->sword_two = 1;
	c->inv->sword_three = 1;
	c->inv->bow_one = 4;
	c->inv->bow_two = 2;
	c->inv->diamond = 10;
	c->inv->sword_ultimate = 1;
	c->inv->key = 10;
	c->inv->gift = 10;
	c->inv->totem = 3;
	c->inv->taken = 10;
	c->inv->text = sfText_create();
	c->inv->font = sfFont_createFromFile("./src/images/font.ttf");
}

void init_items(container_t *c)
{
	c->inv->paint = 1;
	c->inv->bonzai = 2;
	c->inv->card = 20;
	c->inv->bear = 4;
	c->inv->letter = 3;
	c->inv->soupe = 2;
	c->inv->smoothie = 7;
	c->inv->bottle = 10;
	c->inv->honey = 7;
	c->inv->chicken = 3;
	c->inv->hamburger = 10;
	c->inv->apple = 12;
	c->inv->fish = 8;
	c->inv->sushi = 10;
	init_items_two(c);
}
