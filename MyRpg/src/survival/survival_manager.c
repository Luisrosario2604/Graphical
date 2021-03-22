/*
** EPITECH PROJECT, 2018
** my_rpg
** File description:
** main manager
*/

#include "include.h"
#include "struct.h"
#include "function.h"

void check_give(container_t *c)
{
	int i = c->survival->last_player;
	int j = c->survival->player_select;
	if (j != 0 && i == 0 && c->inv->taken == 0 && c->inv->last_taken != 0)
		give_item(c);
}

void survival_mode_three(container_t *c)
{
	sfVector2f one = {0, 0};
	sfVector2f two = {0, 0};
	hero_check_stat(c);
	success_manager(c);
	monster_manager(c);
	passing_day(c);
	hero_check_dead(c);
	if (c->survival->dead == 1) {
		if (mouse_check(c, one, two) == 2)
			c->map->nbr_map = 1;
		dead_print(c);
	}
	if (c->survival->rand >= 1000)
		c->survival->rand = 0;
	else
		c->survival->rand += 1;
}

void survival_mode_two(container_t *c)
{
	survival_hero_three(c);
	survival_hero_four(c);
	click_hero(c);
	if (c->survival->info == 1)
		print_info(c);
	check_give(c);
	c->survival->last_player = c->survival->player_select;
	c->inv->last_2_taken = c->inv->last_taken;
	c->inv->last_taken = c->inv->taken;
	survival_mode_three(c);
}

void survival_mode(container_t *c)
{
	if (c->survival->dead == 1)
		dead_manager(c);
	c->survival->player_select = 0;
	random_hero(c);
	check_hero_mouse(c);
	survival_draw_map(c);
	survival_inv(c);
	survival_tree(c);
	anim_manager(c);
	survival_hero_one(c);
	survival_hero_two(c);
	survival_mode_two(c);
}
