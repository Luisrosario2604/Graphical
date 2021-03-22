/*
** EPITECH PROJECT, 2018
** my_world
** File description:
** settings
*/

#include "include.h"
#include "struct.h"
#include "function.h"

void print_volume_levels(container_t *c, sfVector2f *pos)
{
	sfSprite_setPosition(c->settings->btn, *pos);
	sfSprite_setTexture(c->settings->btn, c->settings->level_o, sfTrue);
	gamma_zero(c, pos->x, pos->y);
	sfRenderWindow_drawSprite(c->window->window, c->settings->btn, NULL);
	pos->x += 200;
	sfSprite_setPosition(c->settings->btn, *pos);
	sfSprite_setTexture(c->settings->btn, c->settings->level_50, sfTrue);
	gamma_five(c, pos->x, pos->y);
	sfRenderWindow_drawSprite(c->window->window, c->settings->btn, NULL);
	pos->x += 200;
	sfSprite_setPosition(c->settings->btn, *pos);
	sfSprite_setTexture(c->settings->btn, c->settings->level_100, sfTrue);
	gamma_ten(c, pos->x, pos->y);
	sfRenderWindow_drawSprite(c->window->window, c->settings->btn, NULL);
}

void print_color_levels(container_t *c, sfVector2f *pos)
{
	sfSprite_setPosition(c->settings->btn, *pos);
	gamma_zero(c, pos->x, pos->y);
	sfSprite_setTexture(c->settings->btn, c->settings->blue, sfTrue);
	sfRenderWindow_drawSprite(c->window->window, c->settings->btn, NULL);
	pos->x += 200;
	sfSprite_setPosition(c->settings->btn, *pos);
	sfSprite_setTexture(c->settings->btn, c->settings->red, sfTrue);
	gamma_zero(c, pos->x, pos->y);
	sfRenderWindow_drawSprite(c->window->window, c->settings->btn, NULL);
	pos->x += 200;
	sfSprite_setPosition(c->settings->btn, *pos);
	sfSprite_setTexture(c->settings->btn, c->settings->green, sfTrue);
	gamma_zero(c, pos->x, pos->y);
	sfRenderWindow_drawSprite(c->window->window, c->settings->btn, NULL);
	pos->x += 200;
}

void settings_three(container_t *c, sfVector2f pos)
{
	pos.x = 250;
	pos.y += 100;
	sfSprite_setPosition(c->settings->btn, pos);
	sfSprite_setTexture(c->settings->btn, c->settings->color_lines, \
			sfTrue);
	gamma_null(c);
	sfRenderWindow_drawSprite(c->window->window, c->settings->btn, NULL);
	pos.y += 100;
	pos.x = 320;
	print_color_levels(c, &pos);
}

void settings_two(container_t *c, sfVector2f pos)
{
	check_set(c);
	print_volume_levels(c, &pos);
	pos.x = 200;
	pos.y += 100;
	sfSprite_setPosition(c->settings->btn, pos);
	sfSprite_setTexture(c->settings->btn, c->settings->music_effects,
		sfTrue);
	gamma_null(c);
	sfRenderWindow_drawSprite(c->window->window, c->settings->btn, NULL);
	pos.x = 320;
	pos.y += 100;
	print_volume_levels(c, &pos);
	settings_three(c, pos);
}

void settings(container_t *c)
{
	sfVector2f pos = {300, 20};
	sfSprite_setPosition(c->settings->btn, pos);
	sfSprite_setTexture(c->settings->btn, c->settings->music, sfTrue);
	gamma_null(c);
	sfRenderWindow_drawSprite(c->window->window, c->settings->btn, NULL);
	pos.y += 100;
	pos.x += 20;
	print_volume_levels(c, &pos);
	pos.x = 500;
	pos.y += 100;
	sfSprite_setPosition(c->settings->btn, pos);
	sfSprite_setTexture(c->settings->btn, c->settings->fps, sfTrue);
	gamma_null(c);
	sfRenderWindow_drawSprite(c->window->window, c->settings->btn, NULL);
	pos.x = 320;
	pos.y += 100;
	settings_two(c, pos);
}
