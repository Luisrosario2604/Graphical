/*
** EPITECH PROJECT, 2017
** my_hunter
** File description:
** duck display
*/

#include "my.h"

int duck_top(int i, int y)
{
	if (i == -100) {
		int randomValue = rand() % 5;
		if (randomValue == 0 || randomValue == 2)
			return (120);
		else if (randomValue == 1 || randomValue == 3)
			return (167);
		else
			return (213);
	} else
		return (y);
}

struct size display_duck(sfTexture *d, sfRenderWindow *window, struct size duck)
{
	struct sprite sprite_duck;
	int y = duck.positionDUCK.y;
	duck.rectDUCK.left = rectDUCK_left(duck.rectDUCK.left);
	duck.rectDUCK.top = duck_top(duck.positionDUCK.x, duck.rectDUCK.top);
	duck.positionDUCK.x = rectDUCK_x(duck.positionDUCK.x);
	duck.positionDUCK.y = rectDUCK_y(duck.positionDUCK.x, y);
	sprite_duck.sprite3 = sfSprite_create();
	sfSprite_setTexture(sprite_duck.sprite3, d, sfTrue);
	sfSprite_setTextureRect(sprite_duck.sprite3, duck.rectDUCK);
	sfSprite_setPosition(sprite_duck.sprite3, duck.positionDUCK);
	sfSprite_setScale(sprite_duck.sprite3, duck.scaleDUCK);
	sfRenderWindow_drawSprite(window, sprite_duck.sprite3, NULL);
	return (duck);
}
