/*
** EPITECH PROJECT, 2017
** my_putchar
** File description:
** display one character
*/

#include "include.h"
#include "struct.h"
#include "function.h"

int position_text_y(int a)
{
	a = a % 50;
	if (a < 25) {
		return (150 - a * 2);
	} else {
		return (50 + a * 2);
	}
}

void button_display_two(container_t *c, int i)
{
	c->sprt->positionText.y = 300 + 160 * i;
	c->sprt->positionText.x = 400;
	c->sprt->rectButton.height = 100;
	c->sprt->rectButton.width = 465;
	sfSprite_setTexture(c->sprt->button, c->sprt->button_t, sfTrue);
	sfSprite_setPosition(c->sprt->button, c->sprt->positionText);
	sfSprite_setTextureRect(c->sprt->button, c->sprt->rectButton);
	sfRenderWindow_drawSprite(c->window->window, c->sprt->button, NULL);
}

void button_display(container_t *c, int i)
{
	int y = c->window->yMouse;
	int x = c->window->xMouse;
	if ((y > 300 + 160 * i && y < 400 + 160 * i) && (x > 400 && x < 865)) {
		if (i == 0 && c->window->click == 1) {
			c->window->scene = 1;
		}
		if (i == 2 && c->window->click == 1) {
			c->window->scene = 3;
		}
		if (i == 1 && c->window->click == 1) {
			c->window->scene = 2;
		}
		sfSprite_setColor (c->sprt->button,
			sfColor_fromRGBA(255, 255, 255, 10));
	} else
		sfSprite_setColor (c->sprt->button,
			sfColor_fromRGBA(255, 255, 255, 100));
	button_display_two(c, i);
}

void text_display(container_t *c, int i, int x, int y)
{
	if ((y > 300 + 160 * i && y < 400 + 160 * i) && (x > 400 && x < 865))
		sfSprite_setColor (c->sprt->button,
			sfColor_fromRGBA(255, 255, 255, 100));
	else
		sfSprite_setColor (c->sprt->button,
			sfColor_fromRGBA(255, 255, 255, 250));
	c->sprt->positionText.y = 310 + 160 * i;
	if (i == 0) {
		sfSprite_setTexture(c->sprt->button, c->sprt->play_t, sfTrue);
		c->sprt->positionText.x = 520;
	} else if (i == 1) {
		sfSprite_setTexture(c->sprt->button, c->sprt->map_t, sfTrue);
		c->sprt->positionText.x = 430;
	} else {
		sfSprite_setTexture(c->sprt->button, c->sprt->set_t, sfTrue);
		c->sprt->positionText.x = 450;
	}
	sfSprite_setPosition(c->sprt->button, c->sprt->positionText);
	sfRenderWindow_drawSprite(c->window->window, c->sprt->button, NULL);
}

void menu(container_t *c)
{
	int y = c->window->yMouse;
	int x = c->window->xMouse;
	c->sprt->positionText.y = position_text_y(c->window->a);
	c->sprt->positionText.x = 400;
	sfSprite_setTexture(c->sprt->menu, c->sprt->menu_t, sfTrue);
	sfRenderWindow_drawSprite(c->window->window, c->sprt->menu, NULL);
	sfSprite_setPosition(c->sprt->text, c->sprt->positionText);
	sfSprite_setTexture(c->sprt->text, c->sprt->text_t, sfTrue);
	sfRenderWindow_drawSprite(c->window->window, c->sprt->text, NULL);
	for (int i = 0; i < 3; i++)
		button_display(c, i);
	for (int j = 0; j < 3; j++)
		text_display(c, j, x, y);
}
