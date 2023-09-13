/*
** EPITECH PROJECT, 2017
** my_runner
** File description:
** window.c
*/

#include "include.h"
#include "struct.h"
#include "function.h"

void events(container_t *c)
{
	if (c->window->event.type == sfEvtClosed)
		sfRenderWindow_close(c->window->window);
	if (sfMouse_isButtonPressed(sfMouseLeft)) {
		c->window->click = 1;
		sfMusic_play(c->window->hit);
	} else
		c->window->click = 0;
}

void free_all(container_t *c)
{
	sfSprite_destroy(c->sprt->text);
	sfSprite_destroy(c->sprt->button);
	sfSprite_destroy(c->sprt->back_s);
	sfSprite_destroy(c->window->click_s);
	sfSprite_destroy(c->sprt->menu);
	sfTexture_destroy(c->sprt->back);
	sfTexture_destroy(c->sprt->play_t);
	sfMusic_destroy(c->window->music);
	sfMusic_destroy(c->window->hit);
	sfTexture_destroy(c->sprt->text_t);
	sfTexture_destroy(c->sprt->button_t);
	sfTexture_destroy(c->toolbar->corner);
	sfTexture_destroy(c->toolbar->cube);
	free_all_sub(c);
}

void free_all_sub(container_t *c)
{
	sfTexture_destroy(c->sprt->map_t);
	sfTexture_destroy(c->window->click_t);
	sfTexture_destroy(c->sprt->set_t);
	sfTexture_destroy(c->sprt->menu_t);
	sfRenderWindow_destroy(c->window->window);
	sfClock_destroy(c->timer->Clock);
	free(c->window);
	free(c->sprt);
	free(c->timer);
}

void main_display(container_t *c)
{
	start_all(c);
	loading_textures(c);
	sfMusic_play(c->window->music);
	sfRenderWindow_setFramerateLimit(c->window->window, 60);

	while (sfRenderWindow_isOpen(c->window->window)) {
		mouse(c);
		while (sfRenderWindow_pollEvent(c->window->window,
			&c->window->event)) {
			events(c);
		}
		c->timer->time = sfClock_getElapsedTime(c->timer->Clock);
		if (c->timer->time.microseconds > 30000) {
			c->window->a += 1;
			main_game(c);
			sfClock_restart(c->timer->Clock);
		}
	}
	free_all(c);
}
