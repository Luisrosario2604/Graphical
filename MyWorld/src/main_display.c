/*
** EPITECH PROJECT, 2018
** my_world
** File description:
** main_game
*/

#include "include.h"
#include "struct.h"
#include "function.h"

void backwards(container_t *c)
{
	if (c->window->scene != 0 && c->window->click == 1) {
		c->window->scene = 0;
	}
}

void back_arrow(container_t *c)
{
	sfVector2f pos = {c->window->Xcam + 50, c->window->Ycam};
	sfVector2f pos2 = {50, 20};
	sfVector2f scale = {0.2, 0.2};
	if (c->window->xMouse >= 50 && c->window->xMouse <= 154)
		if (c->window->yMouse >= 20 && c->window->yMouse <= 124)
			backwards(c);
	sfSprite_setScale(c->sprt->back_s, scale);
	if (c->window->bac != 0)
		sfSprite_setPosition(c->sprt->back_s, pos);
	else
		sfSprite_setPosition(c->sprt->back_s, pos2);
	sfSprite_setTexture(c->sprt->back_s, c->sprt->back, sfTrue);
	sfRenderWindow_drawSprite(c->window->window, c->sprt->back_s, NULL);

}

void main_game_two(container_t *c)
{
	if (c->window->scene == 2) {
		choose_map(c);
		if (c->maps->size != 0) {
			c->maps->mapped = create_map_size(c);
			c->maps->mappped_t = create_2d_map(c->maps->mapped, c);
		}
	}
	if (c->window->scene == 3)
		settings(c);
	mouse_sprt(c);
	sfRenderWindow_display(c->window->window);
	sfRenderWindow_clear(c->window->window, sfBlack);
}

void main_game(container_t *c)
{
	sfFloatRect rect = {0, 0, 1216, 1080};
	sfMusic_setLoop(c->window->music, 1);
	move_camera(c);
	if (c->window->scene == 0)
		menu(c);
	else
		back_arrow(c);
	if (c->window->scene == 1 && c->window->map_check == 1) {
		wire_frame(c->maps->mappped_t, c);
		sfRenderWindow_setView(c->window->window, c->window->view);
		c->window->bac = 1;
		back_arrow(c);
	} else {
		c->window->view = sfView_createFromRect(rect);
		sfRenderWindow_setView(c->window->window, c->window->view);
		c->window->bac = 0;
	}
	main_game_two(c);
}
