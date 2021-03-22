/*
** EPITECH PROJECT, 2017
** my_hunter
** File description:
** Move_duck
*/

#include "my.h"

int rectDUCK_left(int i)
{
	if (i == 7)
		return (48);
	else if (i == 48)
		return (88);
	else if (i == 88)
		return (7);
}

int rectDUCK_x(int i)
{
	while (i > 1000) {
		i = i - 1200;
	}
	return (i + 20);
}

int rectDUCK_y(int i, int y)
{
	if (i == -100) {
		int randomValue = rand() % 400;
		return (randomValue);
	} else
		return (y);
}

int marker(int i)
{
	if (i == 90)
		return (104);
	else if (i > 176)
		return (90);
	else
		return (i + 8);
}

void duck_hit2(struct size *duck, struct window window, struct size ducka)
{
	duck_hit3(window, ducka);
	duck->rectDUCK.width = 37;
	duck->rectDUCK.height = 44;
	duck->rectDUCK.left = 7;
	duck->positionDUCK.x = -100;
	duck->positionDUCK.y = rectDUCK_y(duck->positionDUCK.x,		\
					  duck->positionDUCK.y);
	duck->rectGREEN.width = marker(ducka.rectGREEN.width);
}
