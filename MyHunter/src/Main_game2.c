/*
** EPITECH PROJECT, 2017
** my_hunter
** File description:
** Game1
*/

#include "my.h"

struct size main_game(struct window window, int a, struct size sprites, int shoots)
{
	if (a == 0) {
		sprites.scaleDUCK.x = 2.7;
		sprites.rectDUCK.top = 173;
		sprites.scaleDUCK.y = 2.7;
		sprites.rectDUCK.width = 37;
		sprites.rectDUCK.height = 44;
		sprites.rectDUCK.left = 7;
		sprites.positionDUCK.x =  -100;
		sprites.positionDUCK.y = rectDUCK_y(sprites.positionDUCK.x, sprites.positionDUCK.y);
	}
	display_background(window.background, window.window);
	if (a > 60)
		sprites = display_duck(window.duck, window.window, sprites);
	display_shoot(window.duck, window.window, shoots, window.event);
	display_grass(window.grass, window.window);
	if (a < 59)
		display_dog(window.duck, window.window, a);
	sprites = display_green(window.green, window.window, a, sprites);
	sfRenderWindow_display(window.window);
	return (sprites);
}
