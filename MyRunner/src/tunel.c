/*
** EPITECH PROJECT, 2017
** my_runner
** File description:
** tunel.c
*/

#include "my.h"

void display_up(window *windw, sprite *sprt, size *tunel, int a)
{
	tunel->rectTunel.left = 330;
	tunel->rectTunel.top = 0;
	tunel->rectTunel.width = 27;
	tunel->rectTunel.height = 15;
	tunel->positionTunel.y = (21 * 4.26 * a + 26);
	tunel->positionTunel.x = (1200 - 10 * tunel->bool +	\
				(115 * tunel->lenth) + 8.5);
	tunel->scaleTunel.x = 4.26;
	tunel->scaleTunel.y = 4.26;
	if ((tunel->positionBird.y > (21 * 4.26 * a - 18))		\
	&& (tunel->positionBird.y < (21 * 4.26 * a + 100))) {
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

void display_basic(window *windw, sprite *sprt, size *tunel, int a)
{
	tunel->rectTunel.left = 300;
	tunel->rectTunel.top = 0;
	tunel->rectTunel.width = 27;
	tunel->rectTunel.height = 21;
	tunel->positionTunel.y = (21 * 4.26 * a);
	tunel->positionTunel.x = (1200 - 10 * tunel->bool	\
				+ (115 * tunel->lenth));
	tunel->scaleTunel.x = 4.26;
	tunel->scaleTunel.y = 4.26;
	if ((tunel->positionBird.y >= (21 * 4.26 * a - 40))		\
	&& (tunel->positionBird.y <= (21 * 4.26 * a + 100))) {
		if ((tunel->positionTunel.x >= 250 - 150)	\
		&& (tunel->positionTunel.x <= 250 + 27))
			dead_bird(tunel, windw, sprt, 0);
	}
	//my_putnbr(tunel->bool);
	//my_putstr("  ////  ");
	//my_putnbr(tunel->lenth);
	//my_putstr("  ////  ");
	//my_putnbr(tunel->positionTunel.x);
	//my_putstr("\n");
	sfSprite_setTexture(sprt->tunel, windw->game, sfTrue);
	sfSprite_setTextureRect(sprt->tunel, tunel->rectTunel);
	sfSprite_setScale(sprt->tunel, tunel->scaleTunel);
	sfSprite_setPosition(sprt->tunel, tunel->positionTunel);
	sfRenderWindow_drawSprite(windw->window, sprt->tunel, NULL);
}

void display_tunel_two(window *windw, sprite *sprt, size *tunel, int a)
{
	switch (tunel->map[a][tunel->lenth]) {
	case 'l' :
		display_basic(windw, sprt, tunel, a);
		break;
	case 'd' :
		display_down(windw, sprt, tunel, a);
		break;
	case 'u' :
		display_up(windw, sprt, tunel, a);
		break;
	case 'f' :
		display_flag(windw, sprt, tunel);
		break;
	case 'p' :
		display_point(tunel, windw);
		break;
	case 's' :
		display_speed(windw, sprt, tunel);
		break;
	}
}

void display_tunel(window *windw, sprite *sprt, size *tunel)
{
	tunel->lenth = 0;
	my_putnbr(tunel->bool);
	my_putstr("\n");
	int a = 0;
	while ((tunel->map[a][tunel->lenth]) != '0' && tunel->start >= 1) {
		display_tunel_two(windw, sprt, tunel, a);
		a++;
		if (a >= 10) {
			a = 0;
			tunel->lenth += 1;
		}
	}
}
