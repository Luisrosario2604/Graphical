/*
** EPITECH PROJECT, 2017
** my_hunter
** File description:
** Move_duck
*/

#include "my.h"

int hit5_y(int i, int y)
{
	if (i == 0)
		return (600);
	else if (i < 10)
		return (y - 9);
	else if (i > 14)
		return (y + 9);
	else
		return (y);
}

int hit5_left(int a)
{
	while (a > 1)
		a = a - 2;
	if (a == 0)
		return (138);
	else
		return (177);
}

void duck_hit5(struct window window, struct size duckk)
{
	struct time timedb;
	int a = 0;
	timedb.Clock = sfClock_create();
	while (a != 25) {
		timedb.time = sfClock_getElapsedTime(timedb.Clock);
		if (timedb.time.microseconds > 100000) {
			duckk.rectDUCK.width = 36;
			duckk.rectDUCK.height = 51;
			duckk.rectDUCK.left = hit5_left(a);
			duckk.rectDUCK.top = 70;
			duckk.positionDUCK.y = hit4_y(a, duckk.positionDUCK.y);
			duckk.positionDUCK.x = 400;
			main_game(window, 100, duckk, 0);
			sfClock_restart(timedb.Clock);
			a++;
		}
	}
}
