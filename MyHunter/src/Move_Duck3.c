/*
** EPITECH PROJECT, 2017
** my_hunter
** File description:
** Move_duck
*/

#include "my.h"

int hit4_y(int i, int y)
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

void duck_hit3(struct window window, struct size ducka)
{
	struct time timeda;
	int a = 0;
	timeda.Clock = sfClock_create();
	while (ducka.positionDUCK.y < 610) {
		timeda.time = sfClock_getElapsedTime(timeda.Clock);
		if (timeda.time.microseconds > 100000) {
			ducka.rectDUCK.width = hit_width(a);
			ducka.rectDUCK.height = hit_height(a);
			ducka.rectDUCK.left = hit_left(a);
			ducka.positionDUCK.y = hit_y(a, ducka.positionDUCK.y);
			main_game(window, 100, ducka, 0);
			sfClock_restart(timeda.Clock);
			a++;
		}
	}
	duck_hit4(window, ducka);
}

void duck_hit4(struct window window, struct size duckk)
{
	struct time timedb;
	int a = 0;
	timedb.Clock = sfClock_create();
	while (a != 25) {
		timedb.time = sfClock_getElapsedTime(timedb.Clock);
		if (timedb.time.microseconds > 100000) {
			duckk.rectDUCK.width = 50;
			duckk.rectDUCK.height = 54;
			duckk.rectDUCK.left = 5;
			duckk.rectDUCK.top = 68;
			duckk.positionDUCK.y = hit4_y(a, duckk.positionDUCK.y);
			duckk.positionDUCK.x = 400;
			main_game(window, 100, duckk, 0);
			sfClock_restart(timedb.Clock);
			a++;
		}
	}
}
