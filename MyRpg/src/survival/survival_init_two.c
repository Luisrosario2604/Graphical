/*
** EPITECH PROJECT, 2018
** my_rpg
** File description:
** initialize all
*/

#include "include.h"
#include "struct.h"
#include "function.h"

void init_textures(container_t *c)
{
	c->menu->exit = 0;
	c->survival->black = sfTexture_createFromFile	\
		("src/images/black.png", NULL);
	c->survival->hero_two = sfTexture_createFromFile	\
		("src/images/heros/h7.png", NULL);
	c->survival->hero_one = sfTexture_createFromFile	\
		("src/images/heros/h5.png", NULL);
	c->survival->hero_three = sfTexture_createFromFile	\
		("src/images/heros/h3.png", NULL);
	c->survival->hero_four = sfTexture_createFromFile	\
		("src/images/heros/h9.png", NULL);
	c->tree->item = sfTexture_createFromFile("src/images/items.png", NULL);
	c->monster->monster = sfTexture_createFromFile	\
		("src/images/Ghost.png", NULL);
	c->monster->sprite = sfSprite_create();
}

void init_players(container_t *c)
{
	c->survival->dead = 0;
	c->inv->gama = 0;
	c->survival->info_t = sfTexture_createFromFile	\
			("src/images/info.png", NULL);
	c->survival->hearth = sfTexture_createFromFile	\
		("src/images/hearth.png", NULL);
	c->inv->dead_t = sfTexture_createFromFile	\
		("src/images/death.png", NULL);
	c->survival->meat = sfTexture_createFromFile	\
		("src/images/meat.png", NULL);
	c->survival->water = sfTexture_createFromFile	\
		("src/images/water.png", NULL);
	c->survival->house = sfTexture_createFromFile	\
		("src/images/house_sat.png", NULL);
	c->survival->arrow = sfTexture_createFromFile	\
		("src/images/arrow.png", NULL);
	init_textures(c);
	init_items(c);
}

void init_stats(container_t *c)
{
	c->tree->check = 90;
	c->survival->food_one = 100;
	c->survival->thirst_one = 100;
	c->survival->moral_one = 100;
	c->survival->food_two = 100;
	c->survival->thirst_two = 100;
	c->survival->moral_two = 100;
	c->survival->food_three = 100;
	c->survival->thirst_three = 100;
	c->survival->moral_three = 100;
	c->survival->food_four = 100;
	c->survival->thirst_four = 100;
	c->survival->moral_four = 100;
	c->survival->rect_stats.width = 100;
	c->survival->rect_stats.height = 200;
	c->survival->rect_stats.top = 0;
	c->survival->rect_stats.left = 0;
	init_players(c);
}
