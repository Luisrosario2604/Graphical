/*
** EPITECH PROJECT, 2018
** my_runner
** File description:
** medal.c
*/

#include "my.h"

int medal_top(int a)
{
	if (a >= 15 && a < 30)
		return (229);
	else if (a >= 30)
		return (229);
	else
		return (136);
}

int medal_left(int a)
{
	if (a >= 15 && a < 30)
		return (265);
	else if (a >= 30)
		return (241);
	else
		return (301);
}

void display_medal(size *menu, window *windw, sprite *sprt, int i)
{
	int h = windw->scoreig;
	menu->scaleBackground.x = 4.26;
	menu->scaleBackground.y = 4.26;
	menu->positionBackground.y = 244;
	menu->positionBackground.x = 415;
	menu->rectBackground.left = medal_left(h);
	menu->rectBackground.top = medal_top(h);
	menu->rectBackground.width = 23;
	menu->rectBackground.height = 23;
	sfSprite_setTexture(sprt->menu, windw->game, sfTrue);
	sfSprite_setTextureRect(sprt->menu, menu->rectBackground);
	sfSprite_setScale(sprt->menu, menu->scaleBackground);
	sfSprite_setPosition(sprt->menu, menu->positionBackground);
	sfSprite_setColor(sprt->menu, sfColor_fromRGBA(255, 255, 255, i));
	sfRenderWindow_drawSprite(windw->window, sprt->menu, NULL);
}
