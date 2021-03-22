/*
** EPITECH PROJECT, 2017
** my_runner
** File description:
** background_grass.c
*/

#include "my.h"

void display_background4(window *windw, sprite *sprt, int a, size *background)
{
	background->rectBackground4.left = 145;
	background->rectBackground4.top = 0;
	background->rectBackground4.width = 150;
	background->rectBackground4.height = 55;
	background->positionBackground4.y = 805;
	background->positionBackground4.x = - a;
	background->scaleBackground4.x = 4.26;
	background->scaleBackground4.y = 4.26;
	sfSprite_setTexture(sprt->sprite2, windw->game, sfTrue);
	sfSprite_setTextureRect(sprt->sprite2, background->rectBackground4);
	sfSprite_setScale(sprt->sprite2, background->scaleBackground4);
	sfSprite_setPosition(sprt->sprite2, background->positionBackground4);
	sfRenderWindow_drawSprite(windw->window, sprt->sprite2, NULL);
}

void display_background5(window *windw, sprite *sprt, int a, size *background)
{
	background->positionBackground4.y = 805;
	background->positionBackground4.x = 625 - a;
	sfSprite_setTexture(sprt->sprite2, windw->game, sfTrue);
	sfSprite_setTextureRect(sprt->sprite2, background->rectBackground4);
	sfSprite_setScale(sprt->sprite2, background->scaleBackground4);
	sfSprite_setPosition(sprt->sprite2, background->positionBackground4);
	sfRenderWindow_drawSprite(windw->window, sprt->sprite2, NULL);
}

void display_background6(window *windw, sprite *sprt, int a, size *background)
{
	background->positionBackground4.y = 805;
	background->positionBackground4.x = 625 * 2 - a;
	sfSprite_setTexture(sprt->sprite2, windw->game, sfTrue);
	sfSprite_setTextureRect(sprt->sprite2, background->rectBackground4);
	sfSprite_setScale(sprt->sprite2, background->scaleBackground4);
	sfSprite_setPosition(sprt->sprite2, background->positionBackground4);
	sfRenderWindow_drawSprite(windw->window, sprt->sprite2, NULL);
}
