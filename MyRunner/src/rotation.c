/*
** EPITECH PROJECT, 2017
** rotation
** File description:
** rotation.c
*/

#include <my.h>

int down_bird(int a)
{
	if (a >= 13 && a <= 20) {
		return (25 - 4);
	} else {
		switch (a)
		{
		case 10 :
			return (6 - 4);
			break;
		case 11 :
			return (12 - 4);
			break;
		case 12 :
			return (14 - 4);
			break;
		default :
			return (50 - 4);
			break;
		}
	}
}

int up_bird(int a)
{
	switch (a)
	{
	case 1 :
	case 2 :
	case 3 :
	case 4 :
	case 5 :
	case 6 :
		return (20 - 4);
		break;
	case 7 :
		return (14 - 4);
		break;
	case 8 :
		return (12 - 4);
		break;
	case 9 :
		return (6 - 4);
		break;
	}
	return (1);
}

int rotation_posy(size *bird)
{
	int a = bird->start;
	int pos = bird->positionBird.y;
	if (pos > 750) {
		return (750);
	} else if (pos >= 10 && pos <= 750) {
		if (a == 21)
			return (pos - 50);
		else
			return (pos);
	} else {
		return (10);
	}
}

int rotation_posx(int a)
{
	int b = 0;
	if (a >= 0 && a <= 21)
		b = 200;
	else {
		switch (a)
		{
		case 21 :
			b = 220;
			break;
		case 22 :
			b = 240;
			break;
		case 23 :
			b = 250;
			break;
		default :
			b = 270;
			break;
		}
	}
	return (b);
}

float rotation_bird(int a)
{
	if (a == 0) {
		return (0);
	} else if (a >= 1 && a <= 20) {
		return (-20);
	} else {
		switch (a)
		{
		case 21 :
			return (20);
			break;
		case 22 :
			return (40);
			break;
		case 23 :
			return (60);
			break;
		default :
			return (75);
			break;
		}
	}
}
