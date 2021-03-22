/*
** EPITECH PROJECT, 2018
** my_rpg
** File description:
** stats
*/

#include "include.h"
#include "struct.h"
#include "function.h"

void set_rect(container_t *c, int player, int carac)
{
	switch (player) {
	case (1) :
		rect_one(c, carac);
		break;
	case (2) :
		rect_two(c, carac);
		break;
	case (3) :
		rect_three(c, carac);
		break;
	case (4) :
		rect_four(c, carac);
		break;
	}
	sfSprite_setTextureRect(c->survival->inv_s, c->survival->rect_stats);
}

void print_info_b(container_t *c)
{
	sfVector2f pos3 = {c->window->xMouse + 230, c->window->yMouse - 137};
	sfVector2f scale_3 = {0.9, 0.9};
	sfRenderWindow_drawSprite(c->window->window, c->survival->inv_s, NULL);
	sfSprite_setScale(c->survival->inv_s, scale_3);
	sfSprite_setPosition(c->survival->inv_s, pos3);
	sfSprite_setTexture(c->survival->inv_s, c->survival->hearth, sfTrue);
	sfRenderWindow_drawSprite(c->window->window, c->survival->inv_s, NULL);
	sfSprite_setColor(c->survival->inv_s,			\
			sfColor_fromRGBA(255, 255, 255, 255));
}

void print_info_black(container_t *c)
{
	sfVector2f pos = {c->window->xMouse + 40, c->window->yMouse - 150};
	sfVector2f pos1 = {c->window->xMouse + 55, c->window->yMouse - 167};
	sfVector2f pos2 = {c->window->xMouse + 132, c->window->yMouse - 142};
	sfVector2f scale_1 = {0.6, 0.6};
	sfVector2f scale_2 = {0.8, 0.8};
	sfSprite_setColor(c->survival->inv_s,			\
			sfColor_fromRGBA(40, 40, 40, 255));
	sfSprite_setPosition(c->survival->inv_s, pos);
	sfSprite_setPosition(c->survival->inv_s, pos);
	sfSprite_setScale(c->survival->inv_s, scale_1);
	sfSprite_setPosition(c->survival->inv_s, pos1);
	sfSprite_setTexture(c->survival->inv_s, c->survival->water, sfTrue);
	sfRenderWindow_drawSprite(c->window->window, c->survival->inv_s, NULL);
	sfSprite_setScale(c->survival->inv_s, scale_2);
	sfSprite_setPosition(c->survival->inv_s, pos2);
	sfSprite_setTexture(c->survival->inv_s, c->survival->meat, sfTrue);
	print_info_b(c);
	
}

void print_inf(container_t *c)
{
	sfVector2f pos2 = {c->window->xMouse + 132, c->window->yMouse - 142};
	sfVector2f pos3 = {c->window->xMouse + 230, c->window->yMouse - 137};
	sfVector2f scale_2 = {0.8, 0.8};
	sfVector2f scale_3 = {0.9, 0.9};
	set_rect(c, c->survival->player_select, 1);
	sfRenderWindow_drawSprite(c->window->window, c->survival->inv_s, NULL);
	sfSprite_setScale(c->survival->inv_s, scale_2);
	sfSprite_setPosition(c->survival->inv_s, pos2);
	sfSprite_setTexture(c->survival->inv_s, c->survival->meat, sfTrue);
	set_rect(c, c->survival->player_select, 2);
	sfRenderWindow_drawSprite(c->window->window, c->survival->inv_s, NULL);
	sfSprite_setScale(c->survival->inv_s, scale_3);
	sfSprite_setPosition(c->survival->inv_s, pos3);
	sfSprite_setTexture(c->survival->inv_s, c->survival->hearth, sfTrue);
	set_rect(c, c->survival->player_select, 3);
	sfRenderWindow_drawSprite(c->window->window, c->survival->inv_s, NULL);
}

void print_info(container_t *c)
{
	sfVector2f pos = {c->window->xMouse + 40, c->window->yMouse - 150};
	sfVector2f pos1 = {c->window->xMouse + 55, c->window->yMouse - 167};
	sfVector2f scale_x = {0.4, 0.4};
	sfVector2f scale_1 = {0.6, 0.6};
	sfSprite_setPosition(c->survival->inv_s, pos);
	sfSprite_setScale(c->survival->inv_s, scale_x);
	sfSprite_setTexture(c->survival->inv_s, c->survival->info_t, sfTrue);
	sfRenderWindow_drawSprite(c->window->window, c->survival->inv_s, NULL);
	print_info_black(c);
	sfSprite_setScale(c->survival->inv_s, scale_1);
	sfSprite_setPosition(c->survival->inv_s, pos1);
	sfSprite_setTexture(c->survival->inv_s, c->survival->water, sfTrue);
	print_inf(c);
}
