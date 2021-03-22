/*
** EPITECH PROJECT, 2017
** my_hunter
** File description:
** Starter
*/

#include "my.h"

struct size duck_hit(struct size duck, int b, struct window window, int shoots)
{
	int a = 0;
	if (window.event.type == sfEvtMouseButtonPressed && b > 59)
	{
		int xMouse = window.event.mouseButton.x;
		int yMouse = window.event.mouseButton.y;
		int xDuck = duck.positionDUCK.x;
		int yDuck = duck.positionDUCK.y;
		if (xMouse >= xDuck && yMouse >= yDuck && b > 59)
			a = 1;
		else
			a = 0;
		if (xMouse <= (xDuck + 90) && yMouse <= (yDuck + 90) && a == 1)
			duck_hit2(&duck, window, duck);
		else
			a = 0;
		Check_shoots2(shoots, &duck, window, duck);
	}
	return (duck);
}

int analyse_events(int shoots, struct window w, struct size duck, int b)
{
	int a = 0;
	if (w.event.type == sfEvtMouseButtonPressed && b > 59)
	{
		int xMouse = w.event.mouseButton.x;
		int yMouse = w.event.mouseButton.y;
		int xDuck = duck.positionDUCK.x;
		int yDuck = duck.positionDUCK.y;
		if (xMouse >= xDuck && yMouse >= yDuck && b > 59)
			a = 1;
		else
			a = 0;
		if (xMouse <= (xDuck + 90) && yMouse <= (yDuck + 90) && a == 1){
			my_putstr("You hit the duck !\n");
			shoots = 3;
		} else {
			my_putstr("Sorry but you missed it !\n");
			shoots = Check_shoots(shoots);
		}
	}
	return (shoots);
}

void close_window(sfRenderWindow *window, sfEvent event)
{
	if (event.type == sfEvtClosed)
	{
		sfRenderWindow_close(window);
	}
}

int main (int ac, char *av[])
{
	int a = 0;
	if (ac == 2 && av[1][1] == 'h' && av[1][0] == '-')
	{
		my_putstr("The goal is to shoot the duck");
		my_putstr(" with your mouse, try to shoot them with");
		my_putstr(" only 3 bullets !\n");
		return (0);
	}
	else if (ac == 1)
	{
		main_display(a);
	} else {
		my_putstr("Use : ./my_hunter\n");
		return (84);
	}
}
