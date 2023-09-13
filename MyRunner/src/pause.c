/*
** EPITECH PROJECT, 2017
** my_runner
** File description:
** pause.c
*/

#include "my.h"

int pause_check(window *windw)
{
	if (windw->pause == 0)
		return (56);
	else
		return (82);
}

void display_pause(window *windw, sprite *sprt, size *pause)
{
	if (pause->bool >= 1) {
		pause->scaleBackground.x = 4.26;
		pause->scaleBackground.y = 4.26;
		pause->positionBackground.y = 20;
		pause->positionBackground.x = 20;
		pause->rectBackground.left = 282;
		pause->rectBackground.top = pause_check(windw);
		pause->rectBackground.width = 18;
		pause->rectBackground.height = 18;
		sfSprite_setTexture(sprt->sprite1, windw->game, sfTrue);
		sfSprite_setTextureRect(sprt->sprite1, pause->rectBackground);
		sfSprite_setScale(sprt->sprite1, pause->scaleBackground);
		sfSprite_setPosition(sprt->sprite1, pause->positionBackground);
		sfRenderWindow_drawSprite(windw->window, sprt->sprite1, NULL);
	}
}
