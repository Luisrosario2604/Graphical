/*
** EPITECH PROJECT, 2017
** my_rpg
** File description:
** menu.c
*/

#include "include.h"
#include "struct.h"
#include "function.h"

void button_display_two(container_t *c, int i)
{
	c->menu->positionText.y = 300 + 160 * i;
	c->menu->positionText.x = 400;
	c->menu->rectButton.height = 100;
	c->menu->rectButton.width = 465;
	sfSprite_setTexture(c->menu->menu, c->menu->button_t, sfTrue);
	sfSprite_setPosition(c->menu->menu, c->menu->positionText);
	sfSprite_setTextureRect(c->menu->menu, c->menu->rectButton);
	sfRenderWindow_drawSprite(c->window->window, c->menu->menu, NULL);
}

void button_display(container_t *c, int i)
{
	int y = c->window->yMouse;
	int x = c->window->xMouse;
	if ((y > 300 + 160 * i && y < 400 + 160 * i) && (x > 400 && x < 865)) {
		if (i == 0 && c->window->click == 1)
			c->map->nbr_map = -1;
		if (i == 2 && c->window->click == 1)
			c->menu->exit = 1;
		if (i == 1 && c->window->click == 1)
			c->map->nbr_map = -3;
		sfSprite_setColor (c->menu->menu,
				   sfColor_fromRGBA(255, 255, 255, 10));
	} else
		sfSprite_setColor (c->menu->menu,
				   sfColor_fromRGBA(255, 255, 255, 100));
	button_display_two(c, i);
}

void text_display(container_t *c, int i, int x, int y)
{
	if ((y > 300 + 160 * i && y < 400 + 160 * i) && (x > 400 && x < 865))
		sfSprite_setColor (c->menu->menu,
			sfColor_fromRGBA(255, 255, 255, 100));
	else
		sfSprite_setColor (c->menu->menu,
			sfColor_fromRGBA(255, 255, 255, 250));
	c->menu->positionText.y = 303 + 160 * i;
	if (i == 0) {
		sfSprite_setTexture(c->menu->menu, c->menu->play_t, sfTrue);
		c->menu->positionText.x = 520;
	} else if (i == 1) {
		sfSprite_setTexture(c->menu->menu, c->menu->how_t, sfTrue);
		c->menu->positionText.x = 460;
	} else {
		sfSprite_setTexture(c->menu->menu, c->menu->exit_t, sfTrue);
		c->menu->positionText.x = 530;
	}
	sfSprite_setPosition(c->menu->menu, c->menu->positionText);
	sfRenderWindow_drawSprite(c->window->window, c->menu->menu, NULL);
}

void menu_manager(container_t *c)
{
	int x = c->window->xMouse;
	int y = c->window->yMouse;
	sfVector2f scale = {1.5, 1.5};
	sfVector2f scale2 = {1, 1};
	sfVector2f pos = {0, 0};
	sfSprite_setScale(c->menu->menu, scale);
	sfSprite_setTexture(c->menu->menu, c->menu->background, sfTrue);
	sfSprite_setPosition(c->menu->menu, pos);
	sfSprite_setColor (c->menu->menu,
			sfColor_fromRGBA(255, 255, 255, 100));
	sfRenderWindow_drawSprite(c->window->window, c->menu->menu, NULL);
	sfSprite_setScale(c->menu->menu, scale2);
	for (int i = 0; i < 3; i++)
		button_display(c, i);
	for (int j = 0; j < 3; j++)
		text_display(c, j, x, y);
}
