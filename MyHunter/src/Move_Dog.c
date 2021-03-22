/*
** EPITECH PROJECT, 2017
** my_hunter
** File description:
** Move_Dog
*/

#include "my.h"

int rectDOG_top(int i)
{
	if (i < 50)
		return (18);
	else
		return (72);
}

int rectDOG_left(int i)
{
	if (i < 50) {
		while (i > 4) {
			i = i - 5;
		}
		if (i == 0)
			return (7);
		else if (i == 1)
			return (67);
		else if (i == 2)
			return (125);
		else if (i == 3)
			return (179);
		else if (i == 4)
			return (234);
	}
	else if (i > 49 && i < 53)
		return (215);
	else if (i > 52 && i < 57)
		return (277);
	else
		return (327);
}


int rectDOG_x(int i)
{
	if (i < 50)
		return (i * 10);
	else if (i == 49)
		return (i * 10 - 10);
	else if (i == 50)
		return (i * 10 - 20);
	else if (i == 51)
		return (i * 10 - 30);
	else if (i == 52)
		return (i * 10 - 40);
	else if (i > 52 && i < 57)
		return (i * 11 - 60);
	else if (i > 56 && i < 60)
		return (i * 11 - 60);
}

int rectDOG_y(int i)
{
	if (i < 53)
		return (626);
	else if (i == 53)
		return (626 - 12);
	else if (i == 54)
		return (626 - 24);
	else if (i == 55)
		return (626 - 36);
	else if (i == 56)
		return (626 - 48);
	else if (i == 57)
		return (626 - 43);
	else if (i == 58)
		return (626 - 38);
	else if (i == 59)
		return (626 - 33);
}
