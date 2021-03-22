/*
** EPITECH PROJECT, 2017
** my_runner
** File description:
** bird_two.c
*/

#include "my.h"

int top_bird(int a) {
	if (a == 0 || a == 1)
		return (63);
	else if (a == 2 || a == 3)
		return (89);
	else
		return (123);
}

int left_bird(int a) {
	if (a == 0 || a == 1)
		return (263);
	else if (a == 2 || a == 3)
		return (263);
	else
		return (222);
}

void display_start(window *windw, size *bird, sprite *sprt)
{
	bird->rectBird2.left = 150;
	bird->rectBird2.top = 120;
	bird->rectBird2.width = 70;
	bird->rectBird2.height = 53;
	bird->positionBird2.y = 360;
	bird->positionBird2.x = 280;
	bird->scaleBird2.x = 4.26;
	bird->scaleBird2.y = 4.26;
	sfSprite_setTexture(sprt->spriteBird2, windw->game, sfTrue);
	sfSprite_setTextureRect(sprt->spriteBird2, bird->rectBird2);
	sfSprite_setScale(sprt->spriteBird2, bird->scaleBird2);
	sfSprite_setPosition(sprt->spriteBird2, bird->positionBird2);
	sfRenderWindow_drawSprite(windw->window, sprt->spriteBird2, NULL);
}
