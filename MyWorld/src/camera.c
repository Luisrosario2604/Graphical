/*
** EPITECH PROJECT, 2017
** camera
** File description:
** move the camera
*/

#include "include.h"
#include "struct.h"
#include "function.h"

void move_camera(container_t *c)
{
	if (sfKeyboard_isKeyPressed(sfKeyDown)) {
		c->window->Ycam -= 15;
	}
	if (sfKeyboard_isKeyPressed(sfKeyUp)) {
		c->window->Ycam += 15;
	}
	if (sfKeyboard_isKeyPressed(sfKeyRight)) {
		c->window->Xcam -= 15;
	}
	if (sfKeyboard_isKeyPressed(sfKeyLeft)) {
		c->window->Xcam += 15;
	}
}
