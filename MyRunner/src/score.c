/*
** EPITECH PROJECT, 2017
** my_runner
** File description:
** score.c
*/

#include "my.h"

char *display_score2(window *windw)
{
	int c = 0;
	int n = windw->scoreig;
	while (n != 0) {
		n = n / 10;
		c++;
	}
	c = 0;
	char *Text = malloc(sizeof(char) * c);
	n = windw->scoreig;
	while (n != 0) {
		Text[c] = n % 10 + '0';
		n = n / 10;
		c++;
	}
	Text[c] = '\0';
	Text = my_revstr(Text);
	return (Text);
}

void display_score(window *windw, size *sprites, int q)
{
	if (sprites->bool >= 1) {
		char *Text = display_score2(windw);
		sfText_setFont(windw->score, windw->font);
		if (q == 0) {
			windw->positionText.y = 40;
			windw->positionText.x = 608;
		} else {
			windw->positionText.y = 240;
			windw->positionText.x = 600;
		}
		windw->scaleText.x = 3;
		windw->scaleText.y = 3;
		sfText_setPosition (windw->score, windw->positionText);
		sfText_setScale (windw->score, windw->scaleText);
		if (q == 0)
			sfText_setString (windw->score, Text);
		sfText_setColor(windw->score, sfWhite);
		free(Text);
		sfRenderWindow_drawText(windw->window, windw->score, NULL);
	}
}
