/*
** EPITECH PROJECT, 2017
** my_runner
** File description:
** background_green.c
*/

#include "my.h"

void display_green(window *windw, sprite *sprt, int a, size *background)
{
	background->scaleGreen.x = 4.26;
	background->scaleGreen.y = 4.26;
	background->positionGreen.y = 730;
	background->positionGreen.x = -a * 2;
	background->rectGreen.left = 300;
	background->rectGreen.top = 160;
	background->rectGreen.height = 150;
	background->rectGreen.width = 500;
	sfSprite_setTexture(sprt->spriteGreen, windw->game, sfTrue);
	sfSprite_setTextureRect(sprt->spriteGreen, background->rectGreen);
	sfSprite_setScale(sprt->spriteGreen, background->scaleGreen);
	sfSprite_setPosition(sprt->spriteGreen, background->positionGreen);
	sfRenderWindow_drawSprite(windw->window, sprt->spriteGreen, NULL);
}

void display_green2(window *windw, sprite *sprt, int a, size *background)
{
	background->positionGreen.y = 730;
	background->positionGreen.x = 593 - a * 2;
	sfSprite_setTexture(sprt->spriteGreen, windw->game, sfTrue);
	sfSprite_setTextureRect(sprt->spriteGreen, background->rectGreen);
	sfSprite_setScale(sprt->spriteGreen, background->scaleGreen);
	sfSprite_setPosition(sprt->spriteGreen, background->positionGreen);
	sfRenderWindow_drawSprite(windw->window, sprt->spriteGreen, NULL);
}

void display_green3(window *windw, sprite *sprt, int a, size *background)
{
	background->positionGreen.y = 730;
	background->positionGreen.x = 593 * 2 - a * 2;
	sfSprite_setTexture(sprt->spriteGreen, windw->game, sfTrue);
	sfSprite_setTextureRect(sprt->spriteGreen, background->rectGreen);
	sfSprite_setScale(sprt->spriteGreen, background->scaleGreen);
	sfSprite_setPosition(sprt->spriteGreen, background->positionGreen);
	sfRenderWindow_drawSprite(windw->window, sprt->spriteGreen, NULL);
}
