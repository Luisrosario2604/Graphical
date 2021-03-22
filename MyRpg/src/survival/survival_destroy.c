/*
** EPITECH PROJECT, 2018
** my_rpg
** File description:
** destroying all at end of program
*/

#include "include.h"
#include "struct.h"
#include "function.h"

void destroy_c(container_t *c)
{
	free(c->tree);
	free(c->inv);
	free(c->menu);
	free(c->item);
	free(c->monster);
	free(c->map);
	free(c->heros);
	free(c->survival);
}

void destroy_survival_two(container_t *c)
{
	sfTexture_destroy(c->survival->inv);
	sfTexture_destroy(c->survival->hero_one);
	sfTexture_destroy(c->survival->hero_two);
	sfTexture_destroy(c->survival->hero_three);
	sfTexture_destroy(c->survival->hero_four);
	sfTexture_destroy(c->survival->info_t);
	sfTexture_destroy(c->survival->hearth);
	sfTexture_destroy(c->menu->background);
	sfTexture_destroy(c->survival->meat);
	sfTexture_destroy(c->survival->water);
	sfTexture_destroy(c->survival->map);
	sfTexture_destroy(c->tree->item);
	sfTexture_destroy(c->monster->monster);
	sfSprite_destroy(c->monster->sprite);
	destroy_c(c);
}

void destroy_survival(container_t *c)
{
	sfSprite_destroy(c->survival->map_s);
	sfSprite_destroy(c->survival->anim);
	sfTexture_destroy(c->survival->house);
	sfSprite_destroy(c->inv->dead);
	sfTexture_destroy(c->inv->dead_t);
	sfTexture_destroy(c->survival->black);
	sfTexture_destroy(c->survival->arrow);
	sfSprite_destroy(c->survival->inv_s);
	sfSprite_destroy(c->survival->black_s);
	sfSprite_destroy(c->menu->menu);
	sfText_destroy(c->inv->text);
	sfSprite_destroy(c->inv->inv);
	sfSprite_destroy(c->survival->hero);
	destroy_survival_two(c);
}
