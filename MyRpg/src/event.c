/*
** EPITECH PROJECT, 2017
** my_runner
** File description:
** window.c
*/

#include "include.h"
#include "struct.h"
#include "function.h"

void events(container_t *c)
{
	if (c->window->event.type == sfEvtClosed)
		sfRenderWindow_close(c->window->window);
	else if (sfKeyboard_isKeyPressed(sfKeyLeft))
		c->heros->anim_nbr = 1;
	else if (sfKeyboard_isKeyPressed(sfKeyDown))
		c->heros->anim_nbr = 0;
	else if (sfKeyboard_isKeyPressed(sfKeyRight))
		c->heros->anim_nbr = 2;
	else if (sfKeyboard_isKeyPressed(sfKeyUp))
		c->heros->anim_nbr = 3;	
	else if (sfMouse_isButtonPressed(sfMouseLeft)) {
		c->window->click = 1;
	} else
		c->window->click = 0;
}
