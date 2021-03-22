/*
** EPITECH PROJECT, 2017
** my_runner
** File description:
** tunel_two.c
*/

#include "my.h"

void display_speed(window *windw, sprite *sprt, size *tunel)
{
	tunel->scaleFlag.x = 1;
	tunel->scaleFlag.y = 1;
	tunel->rectTunel.left = 0;
	tunel->rectTunel.top = 0;
	tunel->rectTunel.width = 200;
	tunel->rectTunel.height = 213;
	tunel->positionTunel.y =  600;
	tunel->positionTunel.x = (1200 - 10 * tunel->bool +	\
				(115 * tunel->lenth));
	if (tunel->positionTunel.x == 260 || tunel->positionTunel.x == 265)
		tunel->bool += 10;
	sfSprite_setTexture(sprt->tunel, windw->arrow, sfTrue);
	sfSprite_setTextureRect(sprt->tunel, tunel->rectTunel);
	sfSprite_setScale(sprt->tunel, tunel->scaleFlag);
	sfSprite_setPosition(sprt->tunel, tunel->positionTunel);
	sfRenderWindow_drawSprite(windw->window, sprt->tunel, NULL);
}

void display_point(size *tunel, window *windw)
{
	tunel->positionTunel.x = (1200 - 10 * tunel->bool +	\
				(115 * tunel->lenth));
	if (tunel->positionTunel.x == 160 || tunel->positionTunel.x == 165) {
		sfMusic_play(windw->point);
		windw->scoreig += 1;
	}
}

void display_flag(window *windw, sprite *sprt, size *tunel)
{
	tunel->scaleFlag.x = 1;
	tunel->scaleFlag.y = 1;
	tunel->rectTunel.left = 0;
	tunel->rectTunel.top = 0;
	tunel->rectTunel.width = 500;
	tunel->rectTunel.height = 500;
	tunel->positionTunel.y =  450;
	tunel->positionTunel.x = (1200 - 10 * tunel->bool +	\
				(115 * tunel->lenth));
	if (windw->infinite == 1 && (tunel->positionTunel.x >= 1100)	\
	&& (tunel->positionTunel.x <= 1150))
			tunel->bool = 1;
	if (windw->infinite == 0 && (tunel->positionTunel.x >= - 150)	\
	&& (tunel->positionTunel.x <= 27))
		dead_bird(tunel, windw, sprt, 1);
	sfSprite_setTexture(sprt->tunel, windw->end, sfTrue);
	sfSprite_setTextureRect(sprt->tunel, tunel->rectTunel);
	sfSprite_setScale(sprt->tunel, tunel->scaleFlag);
	sfSprite_setPosition(sprt->tunel, tunel->positionTunel);
	sfRenderWindow_drawSprite(windw->window, sprt->tunel, NULL);
}

void display_down(window *windw, sprite *sprt, size *tunel, int a)
{
	tunel->rectTunel.left = 300;
	tunel->rectTunel.top = 120;
	tunel->rectTunel.width = 28;
	tunel->rectTunel.height = 15;
	tunel->positionTunel.y = (21 * 4.26 * a);
	tunel->positionTunel.x = (1200 - 10 * tunel->bool +	\
				(115 * tunel->lenth));
	tunel->scaleTunel.x = 4.26;
	tunel->scaleTunel.y = 4.26;
	if ((tunel->positionBird.y >= (21 * 4.26 * a - 40))		\
	&& (tunel->positionBird.y <= (21 * 4.26 * a + 60))) {
		if ((tunel->positionTunel.x >= 250 - 150)	\
		&& (tunel->positionTunel.x <= 250 + 27))
			dead_bird(tunel, windw, sprt, 0);
	}
	sfSprite_setTexture(sprt->tunel, windw->game, sfTrue);
	sfSprite_setTextureRect(sprt->tunel, tunel->rectTunel);
	sfSprite_setScale(sprt->tunel, tunel->scaleTunel);
	sfSprite_setPosition(sprt->tunel, tunel->positionTunel);
	sfRenderWindow_drawSprite(windw->window, sprt->tunel, NULL);
}
