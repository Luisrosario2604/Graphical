/*
** EPITECH PROJECT, 2018
** my_runner
** File description:
** dead.c
*/

#include "my.h"

void display_bird_dead(size *sprites, window *windw, sprite *sprt, int q)
{
	if (sprites->bool >= 1)
		sprites->bool += 1;
	display_background(windw, sprt, 0, sprites);
	display_background2(windw, sprt, 0, sprites);
	display_background3(windw, sprt, 0, sprites);
	display_green(windw, sprt, 0, sprites);
	display_green2(windw, sprt, 0, sprites);
	display_green3(windw, sprt, 0, sprites);
	display_background4(windw, sprt, 0, sprites);
	display_background5(windw, sprt, 0, sprites);
	display_background6(windw, sprt, 0, sprites);
	display_dead_menu(sprites, windw, sprt, q);
	if (q > 100)
		display_score(windw, sprites, 1);
	display_bird(windw, 0, sprites, sprt);
}

void display_dead_menu(size *menu, window *windw, sprite *sprt, int i)
{
	menu->scaleBackground.x = 4.26;
	menu->scaleBackground.y = 4.26;
	menu->positionBackground.y = 150;
	menu->positionBackground.x = 360;
	menu->rectBackground.left = 145;
	menu->rectBackground.top = 58;
	menu->rectBackground.width = 115;
	menu->rectBackground.height = 60;
	sfSprite_setTexture(sprt->menu, windw->game, sfTrue);
	sfSprite_setTextureRect(sprt->menu, menu->rectBackground);
	sfSprite_setScale(sprt->menu, menu->scaleBackground);
	sfSprite_setPosition(sprt->menu, menu->positionBackground);
	sfSprite_setColor(sprt->menu, sfColor_fromRGBA(255, 255, 255, i));
	sfRenderWindow_drawSprite(windw->window, sprt->menu, NULL);
}

void dead_bird(size *dead, window *windw, sprite *sprt, int a)
{
	sfMusic_pause(windw->music);
	sfMusic_play(windw->hit);
	int q = 0;
	int i = 0;
	windw->dead = a;
	while (i == 0) {
		display_bird_dead(dead, windw, sprt, q);
		if (a == 1)
			display_medal(dead, windw, sprt, q);
		if (sfKeyboard_isKeyPressed(sfKeyR))
			i = 1;
		q++;
		while (q > 255)
			q = 255;
		sfRenderWindow_display(windw->window);
		sfRenderWindow_clear(windw->window, sfBlack);
	}
	windw->scoreig = 0;
	dead->start = 0;
	dead->bool = 0;
}
