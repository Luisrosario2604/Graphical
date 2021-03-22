/*
** EPITECH PROJECT, 2017
** my_hunter
** File description:
** check shoots
*/

#include "my.h"

void Check_shoots2(int shoots, struct size *duck, struct window window,	\
		   struct size ducka)
{
	if (shoots > 0) {
		shoots--;
	}
	else {
		duck_hit5(window, ducka);
		duck->rectDUCK.width = 37;
		duck->rectDUCK.height = 32;
		duck->rectDUCK.left = 7;
		duck->positionDUCK.x = -150;
		duck->positionDUCK.y = rectDUCK_y(duck->positionDUCK.x,	\
						  duck->positionDUCK.y);
	}
}

int Check_shoots(int shoots)
{
	if (shoots > 0) {
		shoots--;
	}
	else {
		shoots = 3;
	}
	return (shoots);
}
