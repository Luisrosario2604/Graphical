/*
** EPITECH PROJECT, 2017
** my_hunter
** File description:
** Move_duck
*/

#include "my.h"

int hit_left(int i)
{
	int j = i;
	while (j > 3)
		j = j - 4;
	if (i < 4)
		return (237);
	else
		if (j == 0)
			return (303);
		else if (j == 1)
			return (326);
		else if (j == 2)
			return (350);
		else if (j == 3)
			return (280);
}

int hit_width(int i)
{
	if (i < 4)
		return (37);
	else
		return (22);
}

int hit_height(int i)
{
	if (i < 4)
		return (50);
	else
		return (46);
}

int hit_y(int i, int y)
{
	if (i < 4)
		return (y);
	else
		return (y + 20);
}
