/*
** EPITECH PROJECT, 2018
** my_rpg
** File description:
** tree manager
*/

#include "include.h"
#include "struct.h"
#include "function.h"

void check_click(container_t *c)
{
	int i = c->survival->tree_check;
	sfVector2f x_one = {793, 329};
	sfVector2f y_one = {827, 509};
	sfVector2f x_two = {828, 329};
	sfVector2f y_two = {865, 509};
	sfVector2f x_three = {866, 329};
	sfVector2f y_three = {903, 509};
	sfVector2f x_four = {904, 329};
	sfVector2f y_four = {941, 509};
	sfVector2f x_five = {942, 329};
	sfVector2f y_five = {983, 509};
	if ((i == 1 || i == 2) && c->tree->check >=		\
	10 && c->tree->can == 0 && c->tree->points > 0) {
		first_condition(c, x_one, y_one);
		second_condition(c, x_two, y_two);
		third_condition(c, x_three, y_three);
		four_condition(c, x_four, y_four);
		five_condition(c, x_five, y_five);
	}
}

void draw_items(container_t *c)
{
	check_click(c);
	draw_shoes(c);
	draw_helmet(c);
	draw_gloves(c);
	draw_fist(c);
	draw_cape(c);
}

void draw_tree(container_t *c)
{
	if (c->tree->check >= 0 && c->tree->check <= 10)
		c->tree->check += 1;
	sfVector2f pos = {770, 290};
	sfVector2f scale = {0.7, 0.7};
	sfSprite_setColor(c->survival->map_s,			\
			sfColor_fromRGBA(100, 100, 100, 255));
	sfSprite_setPosition(c->survival->inv_s, pos);
	sfSprite_setScale(c->survival->inv_s, scale);
	sfSprite_setTexture(c->survival->inv_s, c->survival->inv, sfTrue);
	sfRenderWindow_drawSprite(c->window->window, c->survival->map_s, NULL);
	sfRenderWindow_drawSprite(c->window->window, c->survival->inv_s, NULL);
}

void survival_tree(container_t *c)
{
	int i = 0;
	int j = 0;
	sfVector2f one = {760, 307};
	sfVector2f two = {792, 340};
	sfVector2f three = {770, 280};
	sfVector2f four = {1000, 509};
	i = mouse_check(c, one, two);
	j = mouse_check(c, three, four);
	if (((i == 1 || i == 2 || c->survival->tree_check == 1) &&	\
	c->survival->inv_check != 1) && c->inv->taken == 0) {
		draw_tree(c);
		draw_items(c);
		c->survival->tree_check = 1;
	} else {
		sfSprite_setColor(c->survival->map_s,			\
				sfColor_fromRGBA(255, 255, 255, 255));
	}
	if (c->survival->tree_check == 1 && j == 0)
		c->survival->tree_check = 0;
}
