/*
** EPITECH PROJECT, 2018
** my_rpg
** File description:
** initialize all
*/

#include "include.h"
#include "struct.h"
#include "function.h"

void init_move_two(container_t *c)
{
	c->survival->last_player = 0;
	c->survival->not_moving_one = 1;
	c->survival->not_moving_two = 1;
	c->survival->not_moving_three = 1;
	c->survival->not_moving_four = 1;
	c->survival->save_pos = 1;
	c->survival->replace_four = 0;
	c->survival->replace_three = 0;
	c->survival->replace_two = 0;
	c->survival->replace_one = 0;
	c->survival->anim_r.left = 975;
	c->survival->rd_slow = 0;
	c->survival->rd_hero = 0;
	c->tree->shoes = 1;
	c->tree->fist = 1;
	c->tree->gloves = 1;
	c->tree->cape = 1;
	c->tree->helmet = 1;
	c->tree->points = -1;
}

void init_move(container_t *c)
{
	c->tree->success1 = -59;
	c->tree->success2 = -59;
	c->tree->success3 = -59;
	c->tree->success4 = -59;
	c->tree->success5 = -59;
	c->tree->can = 0;
	c->tree->up = 1;
	c->survival->pass_day = 1;
	c->survival->black_count = 0;
	c->survival->move_one = 0;
	c->survival->move = 0;
	c->monster->rect = 0;
	c->inv->last_taken = 0;
	c->survival->move_two = 0;
	c->survival->move_three = 0;
	c->survival->move_four = 0;
	c->survival->info = 0;
	c->survival->anim_count = 0;
	init_move_two(c);
}

void init_hero(container_t *c)
{
	c->survival->rect_one.width = 32;
	c->survival->rect_one.height = 48;
	c->survival->pos_two.x = 855;
	c->survival->pos_two.y = 510;
	c->survival->rect_two.left = 0;
	c->survival->rect_two.top = 48 * 3;
	c->survival->rect_two.width = 32;
	c->survival->rect_two.height = 48;
	c->survival->pos_three.x = 1034;
	c->survival->pos_three.y = 647;
	c->survival->tree_check = 0;
	c->survival->rect_three.left = 0;
	c->survival->rect_three.top = 0;
	c->survival->rect_three.width = 32;
	c->survival->rect_three.height = 48;
	c->survival->pos_four.x = 1009;
	c->survival->pos_four.y = 445;
	c->survival->rect_four.left = 0;
	c->survival->rect_four.top = 48;
}

void init_survival_anim(container_t *c)
{
	c->survival->rect_four.width = 32;
	c->survival->rect_four.height = 48;
	c->survival->anim = sfSprite_create();
	c->survival->inv_s = sfSprite_create();
	c->inv->dead = sfSprite_create();
	c->inv->inv = sfSprite_create();
	c->survival->inv_check = 0;
	c->survival->save = 0;
	c->survival->pos_one.x = 910;
	c->survival->pos_one.y = 784;
	c->survival->rect_one.left = 0;
	c->survival->rect_one.top = 48 * 2;
	c->survival->counter = 0;
	c->monster->slow = 0;
	c->monster->height = 0;
}

void init_survival(container_t *c)
{
	c->tree = malloc(sizeof(tree_t));
	c->inv = malloc(sizeof(inv_t));
	c->monster = malloc(sizeof(monster_t));
	c->item = malloc(sizeof(item_t));
	c->survival->map = sfTexture_createFromFile	\
		("src/images/survival_fin.png", NULL);
	c->survival->inv = sfTexture_createFromFile	\
		("src/images/inv.png", NULL);
	c->survival->map_s = sfSprite_create();
	c->survival->black_s = sfSprite_create();
	c->survival->rand = 0;
	c->survival->hero = sfSprite_create();
	init_survival_anim(c);
	init_hero(c);
	init_move(c);
	init_stats(c);
}
