/*
** EPITECH PROJECT, 2017
** my_runner
** File description:
** window.c
*/

#include "my.h"

void events(size *sprites, window *windw, sprite *sprt)
{
	if (sfKeyboard_isKeyPressed(sfKeySpace)) {
		sprites->start = 1;
		if (sprites->bool == 0)
			sprites->bool = 1;
	}
	if (sfKeyboard_isKeyPressed(sfKeyLeft)) {
		windw->pause = 1;
		main_game(windw, sprites, sprt);
		int i = 0;
		while (i == 0)
			if (sfKeyboard_isKeyPressed(sfKeyRight))
				i = 1;
		windw->pause = 0;
	}
	if (sfKeyboard_isKeyPressed(sfKeyR)) {
		sfMusic_play(windw->music);
		windw->scoreig = 0;
		sprites->start = 0;
		sprites->bool = 0;
	}
}

void loading_textures(window *windw)
{
	sfVideoMode mode = {1216, 1080, 32};
	windw->window = sfRenderWindow_create(mode, "MY Window",	\
					sfResize | sfClose, NULL);
	windw->game = sfTexture_createFromFile("images/flappy.png", NULL);
	windw->end = sfTexture_createFromFile("images/flag.png", NULL);
	windw->arrow = sfTexture_createFromFile("images/arrow.png", NULL);
	sfRenderWindow_setFramerateLimit(windw->window, 60);
	windw->font = sfFont_createFromFile("images/Pixel.ttf");
	windw->hit = sfMusic_createFromFile("song/hit.wav");
	windw->music = sfMusic_createFromFile("song/music.wav");
	windw->wing = sfMusic_createFromFile("song/wing.wav");
	windw->point = sfMusic_createFromFile("song/point.wav");
}

void start_all(sprite *sprt, window *windw)
{
	windw->pause = 0;
	windw->scoreig = 0;
	windw->score = sfText_create();
	sprt->sprite1 = sfSprite_create();
	sprt->menu = sfSprite_create();
	sprt->sprite2 = sfSprite_create();
	sprt->spriteBird2 = sfSprite_create();
	sprt->spriteBird = sfSprite_create();
	sprt->spriteGreen = sfSprite_create();
	sprt->tunel = sfSprite_create();
	sprt->flag = sfSprite_create();
}

void free_all(sprite *sprt, window *windw, struct time timed)
{
	sfMusic_destroy(windw->music);
	sfMusic_destroy(windw->point);
	sfMusic_destroy(windw->hit);
	sfMusic_destroy(windw->wing);
	sfFont_destroy(windw->font);
	sfText_destroy(windw->score);
	sfRenderWindow_destroy(windw->window);
	sfTexture_destroy(windw->game);
	sfTexture_destroy(windw->end);
	sfSprite_destroy(sprt->sprite1);
	sfSprite_destroy(sprt->menu);
	sfSprite_destroy(sprt->sprite2);
	sfSprite_destroy(sprt->spriteBird);
	sfSprite_destroy(sprt->spriteBird2);
	sfSprite_destroy(sprt->spriteGreen);
	sfSprite_destroy(sprt->flag);
	sfSprite_destroy(sprt->tunel);
	sfTexture_destroy(windw->arrow);
	sfClock_destroy(timed.Clock);
}

int main_display(size *sprites, sprite *sprt, window *wind)
{
	struct time timed;
	sprites->start = 0;
	sprites->time = 0;
	sprites->bool = 0;
	loading_textures(wind);
	timed.Clock = sfClock_create();
	start_all(sprt, wind);
	sfMusic_play(wind->music);
	while (sfRenderWindow_isOpen(wind->window)) {
		while (sfRenderWindow_pollEvent(wind->window, &wind->event)) {
			close_window(wind->window, wind->event);
			events(sprites, wind, sprt);
		}
		timed.time = sfClock_getElapsedTime(timed.Clock);
		if (timed.time.microseconds > 30000) {
			sfClock_restart(timed.Clock);
			main_game(wind, sprites, sprt);
		}
	}
	free_all(sprt, wind, timed);
	return (0);
}
