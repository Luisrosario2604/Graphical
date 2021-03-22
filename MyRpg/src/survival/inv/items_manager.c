/*
** EPITECH PROJECT, 2018
** my_rpg
** File description:
** item manager
*/

#include "include.h"
#include "struct.h"
#include "function.h"

void draw(container_t *c)
{
	if (c->item->number >= 1)
		sfSprite_setColor(c->inv->inv,		\
				sfColor_fromRGBA(255, 255, 255, 255));
	else
		sfSprite_setColor(c->inv->inv,		\
				sfColor_fromRGBA(120, 120, 120, 60));
	sfSprite_setPosition(c->inv->inv, c->item->pos);
	sfSprite_setScale(c->inv->inv, c->item->scale);
	sfSprite_setTexture(c->inv->inv, c->tree->item, sfTrue);
	sfSprite_setTextureRect(c->inv->inv, c->item->rect);
	sfRenderWindow_drawSprite(c->window->window, c->inv->inv, NULL);
}

void draw_inv_two(container_t *c)
{
	draw_sword_two(c);
	draw_sword_three(c);
	draw_bow_one(c);
	draw_bow_two(c);
	draw_diamond(c);
	draw_sword_ultimate(c);
	draw_gift(c);
	draw_key(c);
	draw_totem(c);
}

void draw_inv_manager(container_t *c)
{
	draw_paint(c);
	draw_bonzai(c);
	draw_card(c);
	draw_bear(c);
	draw_letter(c);
	draw_soupe(c);
	draw_smoothie(c);
	draw_bottle(c);
	draw_honey(c);
	draw_potion(c);
	draw_chicken(c);
	draw_hamburger(c);
	draw_apple(c);
	draw_fish(c);
	draw_sushi(c);
	draw_sword_one(c);
	draw_inv_two(c);
}
