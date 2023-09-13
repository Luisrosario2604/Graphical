/*
** EPITECH PROJECT, 2017
** my_runner
** File description:
** main_game.c
*/

#include "my.h"

void main_game_b(window *windw, size *sprites, sprite *sprt, int b)
{
	display_background(windw, sprt, b, sprites);
	display_background2(windw, sprt, b, sprites);
	display_background3(windw, sprt, b, sprites);
}
void main_game_e(window *windw, size *sprites, sprite *sprt, int e)
{
	display_green(windw, sprt, e, sprites);
	display_green2(windw, sprt, e, sprites);
	display_green3(windw, sprt, e, sprites);
}

void main_game_c(window *windw, size *sprites, sprite *sprt, int c)
{
	display_background4(windw, sprt, c, sprites);
	display_background5(windw, sprt, c, sprites);
	display_background6(windw, sprt, c, sprites);
}

void main_game(window *windw, size *sprites, sprite *sprt)
{
	sfMusic_setLoop(windw->music, 1);
	sprites->time += 1;
	if (sprites->bool >= 1)
		sprites->bool += 1;
	int b = counter_b(sprites->time);
	int c = counter_c(sprites->time);
	int d = counter_d(sprites->time);
	int e = counter_e(sprites->time);
    main_game_b(windw, sprites, sprt, b);
	main_game_e(windw, sprites, sprt, e);
	display_tunel(windw, sprt, sprites);
	main_game_c(windw, sprites, sprt, c);
	display_bird(windw, d, sprites, sprt);
	display_pause(windw, sprt, sprites);
	display_score(windw, sprites, 0);
	sfRenderWindow_display(windw->window);
	sfRenderWindow_clear(windw->window, sfBlack);
}
