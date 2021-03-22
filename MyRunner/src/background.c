/*
** EPITECH PROJECT, 2017
** my_runner
** File description:
** background.c
*/

#include "my.h"

void display_background(window *windw, sprite *sprt, int a, size *background)
{
	background->scaleBackground.x = 4.26;
	background->scaleBackground.y = 4.26;
	background->positionBackground.y = -70;
	background->positionBackground.x = -a;
	background->rectBackground.left = 0;
	background->rectBackground.top = 0;
	background->rectBackground.width = 150;
	background->rectBackground.height = 250;
	sfSprite_setTexture(sprt->sprite1, windw->game, sfTrue);
	sfSprite_setTextureRect(sprt->sprite1, background->rectBackground);
	sfSprite_setScale(sprt->sprite1, background->scaleBackground);
	sfSprite_setPosition(sprt->sprite1, background->positionBackground);
	sfRenderWindow_drawSprite(windw->window, sprt->sprite1, NULL);
}

void display_background2(window *windw, sprite *sprt, int a, size *background)
{
	background->positionBackground.y = -70;
	background->positionBackground.x = 593 - a;
	sfSprite_setTexture(sprt->sprite1, windw->game, sfTrue);
	sfSprite_setTextureRect(sprt->sprite1, background->rectBackground);
	sfSprite_setScale(sprt->sprite1, background->scaleBackground);
	sfSprite_setPosition(sprt->sprite1, background->positionBackground);
	sfRenderWindow_drawSprite(windw->window, sprt->sprite1, NULL);
}

void display_background3(window *windw, sprite *sprt, int a, size *background)
{
	background->positionBackground.y = -70;
	background->positionBackground.x = 593 * 2 - a;
	sfSprite_setTexture(sprt->sprite1, windw->game, sfTrue);
	sfSprite_setTextureRect(sprt->sprite1, background->rectBackground);
	sfSprite_setScale(sprt->sprite1, background->scaleBackground);
	sfSprite_setPosition(sprt->sprite1, background->positionBackground);
	sfRenderWindow_drawSprite(windw->window, sprt->sprite1, NULL);
}
