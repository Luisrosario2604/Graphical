/*
** EPITECH PROJECT, 2018
** my_rpg
** File description:
** main succes
*/

#include "include.h"
#include "struct.h"
#include "function.h"

void print_suc_two(container_t *c, char *str, int i)
{
	sfVector2f pos = {50 , i};
	sfVector2f scale = {2, 2};
	sfText_setPosition(c->inv->text, pos);
	sfText_setString(c->inv->text, str);
	sfText_setScale(c->inv->text, scale);
	sfText_setFont(c->inv->text, c->inv->font);
	sfRenderWindow_drawText(c->window->window, c->inv->text, NULL);
}

int print_success(container_t *c, char *str, int i)
{
	if (i >= -60) {
		c->tree->can = 1;
		print_suc_two(c, str, i);
		if (c->tree->up == 1)
			i++;
		else
			i--;
		if (i >= 10)
			c->tree->up = 0;
		if (i == -61) {
			c->tree->can = 0;
			c->tree->up = 1;
			return (-70);
		}
	}
	return (i);
}

void success_manager(container_t *c)
{
	if (c->tree->shoes == 5 && c->tree->success1 >= -60) {
		c->tree->success1 = print_success			\
			(c, "Success shoes unlocked !", c->tree->success1);
	}
	if (c->tree->fist == 5 && c->tree->success2 >= -60) {
		c->tree->success2 = print_success			\
			(c, "Success fist unlocked !", c->tree->success2);
	}
	if (c->tree->gloves == 5 && c->tree->success3 >= -60) {
		c->tree->success3 =print_success			\
			(c, "Success gloves unlocked !", c->tree->success3);
	}
	if (c->tree->cape == 5 && c->tree->success4 >= -60) {
		c->tree->success4 = print_success			\
			(c, "Success cape unlocked !", c->tree->success4);
	}
	if (c->tree->helmet == 5 && c->tree->success5 >= -60) {
		c->tree->success5 = print_success			\
			(c, "Success helmet unlocked !", c->tree->success5);
	}
}
