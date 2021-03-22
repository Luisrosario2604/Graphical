/*
** EPITECH PROJECT, 2018
** rpg
** File description:
** main_display
*/

#include "include.h"
#include "struct.h"
#include "function.h"

void display_score(container_t *c, int a)
{
	int d = 0;
	int n = a;
	while (n != 0) {
		n = n / 10;
		d++;
	}
	char *Text = malloc(sizeof(char) * d);
	d = 0;
	n = a;
	while (n != 0) {
		Text[d] = n % 10 + '0';
		n = n / 10;
		d++;
	}
	Text[d] = '\0';
	Text = my_revstr(Text);
	sfText_setString(c->inv->text, Text);
	free(Text);
}

void print_item_stat(container_t *c, int i, int carac)
{
	sfVector2f pos3 = {c->window->xMouse + 260, c->window->yMouse - 45};
	sfVector2f pos1 = {c->window->xMouse + 70, c->window->yMouse - 45};
	sfVector2f pos2 = {c->window->xMouse + 155, c->window->yMouse - 45};
	switch (carac) {
	case (1) :
		sfText_setPosition(c->inv->text, pos1);
		break;
	case (2) :
		sfText_setPosition(c->inv->text, pos2);
		break;
	case (3) :
		sfText_setPosition(c->inv->text, pos3);
		break;
	}
	sfVector2f scale = {1, 1};
	sfText_setScale(c->inv->text, scale);
	sfText_setFont(c->inv->text, c->inv->font);
	display_score(c, i);
	sfRenderWindow_drawText(c->window->window, c->inv->text, NULL);
}

void print_item(container_t *c, int i)
{
	sfVector2f pos = {c->window->xMouse, c->window->yMouse};
	sfVector2f scale = {1, 1};
	sfText_setPosition(c->inv->text, pos);
	sfText_setScale(c->inv->text, scale);
	sfText_setFont(c->inv->text, c->inv->font);
	display_score(c, i);
	sfRenderWindow_drawText(c->window->window, c->inv->text, NULL);
}
