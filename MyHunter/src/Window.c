/*
** EPITECH PROJECT, 2017
** PIXEL
** File description:
** Drawn a pixel
*/

#include "my.h"

struct window loading_textures(struct window window)
{
	sfVideoMode mode = {1024, 960, 32};
	window.window = sfRenderWindow_create(mode, "MY Window",	\
					      sfResize | sfClose, NULL);
	window.background = sfTexture_createFromFile("images/back.png", NULL);
	window.duck = sfTexture_createFromFile("images/all.png", NULL);
	window.grass = sfTexture_createFromFile("images/grass.png", NULL);
	window.green = sfTexture_createFromFile("images/green.png", NULL);
	return(window);
}

int main_display(int a)
{
	struct window window;
	struct time timed;
	struct size sprites;
	int shoots = 3;
	window = loading_textures(window);
	timed.Clock = sfClock_create();
	while (sfRenderWindow_isOpen(window.window)) {
		while (sfRenderWindow_pollEvent(window.window, &window.event)) {
			shoots = analyse_events(shoots, window, sprites, a);
			sprites = duck_hit(sprites, a, window, shoots);
			close_window(window.window, window.event);
		}
		timed.time = sfClock_getElapsedTime(timed.Clock);
		if (timed.time.microseconds > 100000) {
			sprites = main_game(window, a, sprites, shoots);
			sfClock_restart(timed.Clock);
			a++;
		}
	}
	sfRenderWindow_destroy(window.window);
	return (0);
}
