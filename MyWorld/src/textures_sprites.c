/*
** EPITECH PROJECT, 2017
** my_world
** File description:
** textures and sprites
*/

#include "include.h"
#include "struct.h"
#include "function.h"

void loading_textures_two(container_t *c)
{
	c->sprt->text_t = sfTexture_createFromFile("images/text.png", NULL);
	c->sprt->button_t = sfTexture_createFromFile("images/grey.png", NULL);
	c->sprt->map_t = sfTexture_createFromFile("images/map.png", NULL);
	c->sprt->set_t = sfTexture_createFromFile("images/setting.png", NULL);
	c->sprt->play_t = sfTexture_createFromFile("images/Play.png", NULL);
	c->maps->map1_t = sfTexture_createFromFile("images/map1.png", NULL);
	c->settings->blue =
		sfTexture_createFromFile("images/O_blue.png", NULL);
	c->settings->red =
	sfTexture_createFromFile("images/O_red.png", NULL);
	c->settings->green =
	sfTexture_createFromFile("images/O_green.png", NULL);
	c->toolbar->up = sfTexture_createFromFile("images/up.png", NULL);
	c->sprt->back = sfTexture_createFromFile("images/back.png", NULL);
}
void loading_textures(container_t *c)
{
	sfVideoMode mode = {1216, 1080, 32};
	c->window->window = sfRenderWindow_create(mode, "Window",
	sfResize | sfClose, NULL);
	sfRenderWindow_setFramerateLimit(c->window->window, 60);
	c->sprt->menu_t = sfTexture_createFromFile("images/bg_sky.png", NULL);
	c->maps->map2_t = sfTexture_createFromFile("images/map2.png", NULL);
	c->maps->map3_t = sfTexture_createFromFile("images/map3.png", NULL);
	c->maps->load_t = sfTexture_createFromFile("images/Load.png", NULL);
	c->maps->reset_t = sfTexture_createFromFile("images/Reset.png", NULL);
	c->settings->settings = sfTexture_createFromFile("images/settings.png",
	NULL);
	c->settings->music =
		sfTexture_createFromFile("images/music.png", NULL);
	c->settings->music_effects =					\
	sfTexture_createFromFile("images/music_effects.png", NULL);
	loading_textures_sub(c);
	loading_textures_two(c);
}

void loading_textures_sub(container_t *c)
{
	c->settings->fps = sfTexture_createFromFile("images/fps.png", NULL);
	c->settings->color_lines =
	sfTexture_createFromFile("images/color_lines.png", NULL);
	c->settings->level_o = sfTexture_createFromFile("images/o.png", NULL);
	c->settings->level_50 =
		sfTexture_createFromFile("images/50.png", NULL);
	c->settings->level_100 =
	sfTexture_createFromFile("images/100.png", NULL);
	c->toolbar->down = sfTexture_createFromFile("images/down.png", NULL);
	c->window->click_t =
	sfTexture_createFromFile("images/click0.png", NULL);
	c->toolbar->cube = sfTexture_createFromFile("images/cube.png", NULL);
	c->toolbar->corner =
	sfTexture_createFromFile("images/corner.png", NULL);
	c->window->hit = sfMusic_createFromFile("song/hit.wav");
	c->window->music = sfMusic_createFromFile("song/music.wav");
}
