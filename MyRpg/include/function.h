/*
** EPITECH PROJECT, 2017
** functions.h
** File description:
** all functions
*/

#ifndef FUNCTIONS_H
#define FUNCTIONS_H

/* LIB FCT */
int my_putchar(char );
int my_putnbr(int);
int my_putstr(char const *);
int my_nbr(char const *);
char *my_revstr(char *str);
int my_strlen(char *);

int main(int, char **);
void events(container_t *);
void free_all(container_t *);
void main_game(container_t *);
void mouse(container_t *);
void start_all(container_t *);
void loading_textures(container_t *);
void window(container_t *);

/* MENU */
void menu_manager(container_t *);

/* INIT */
void init_map(container_t *);
void init_heros(container_t *);

/* ANIMATION */
void anim_heros(container_t *);
void anim_heros_select(container_t *);

/* DRAW */
void draw_map(int, container_t *);
void draw_heros(container_t *);

/* menu */
void menu_background(container_t *c);
void menu_btn_display(container_t *c);
void menu(container_t *c);

/* survival */
void day_know(container_t *c);
void move_hero_four(container_t *c);
void init_items(container_t *c);
void taken_item(container_t *c);
void give_paint(container_t *c);
void five_condition(container_t *c, sfVector2f, sfVector2f);
void four_condition(container_t *c, sfVector2f, sfVector2f);
void third_condition(container_t *c, sfVector2f, sfVector2f);
void second_condition(container_t *c, sfVector2f, sfVector2f);
void first_condition(container_t *c, sfVector2f, sfVector2f);
void give_bonzai(container_t *c);
void give_card(container_t *c);
void give_bear(container_t *c);
void give_letter(container_t *c);
void give_diamond(container_t *c);
void give_sword_ultimate(container_t *c);
void give_gift(container_t *c);
void give_key(container_t *c);
void give_apple(container_t *c);
void give_hamburger(container_t *c);
void give_chicken(container_t *c);
void give_fish(container_t *c);
void give_sushi(container_t *c);
void give_soupe(container_t *c);
void give_smoothie(container_t *c);
void give_bottle(container_t *c);
void give_honey(container_t *c);
void give_potion(container_t *c);
void give_totem(container_t *c);
void give_sword_one(container_t *c);
void one_attack(container_t *c);
void two_attack(container_t *c);
void three_attack(container_t *c);
void four_attack(container_t *c);
void give_sword_two(container_t *c);
void give_sword_three(container_t *c);
void monster_manager(container_t *c);
void give_bow_one(container_t *c);
void give_bow_two(container_t *c);
void draw_letter(container_t *c);
void draw_paint(container_t *c);
void draw_card(container_t *c);
void draw_bear(container_t *c);
void draw_potion(container_t *c);
void draw_smoothie(container_t *c);
void print_item_stat(container_t *c, int i, int carac);
void draw_bottle(container_t *c);
void draw_honey(container_t *c);
void draw_soupe(container_t *c);
void draw_chicken(container_t *c);
void draw_apple(container_t *c);
void draw_hamburger(container_t *c);
void taken_item(container_t *c);
void draw_fish(container_t *c);
void draw_sushi(container_t *c);
void draw_sword_one(container_t *c);
void draw_sword_two(container_t *c);
void animate_hero_two_c(container_t *c, int i);
void taken_item_five(container_t *c);
void taken_item_four(container_t *c);
void taken_item_two(container_t *c);
void taken_item_three(container_t *c);
void give_item(container_t *c);
void give_item_two(container_t *c);
void give_item_three(container_t *c);
void give_item_four(container_t *c);
void give_item_five(container_t *c);
void draw_sword_three(container_t *c);
void draw_bow_one(container_t *c);
void draw_bow_two(container_t *c);
void draw_diamond(container_t *c);
void draw_sword_ultimate(container_t *c);
void event_manager(container_t *c);
void draw_key(container_t *c);
void draw_gift(container_t *c);
void draw_totem(container_t *c);
void draw_bonzai(container_t *c);
void print_item(container_t *c, int i);
void move_hero_one(container_t *c);
void move_hero_three(container_t *c);
void move_hero_two(container_t *c);
void click_hero(container_t *c);
void init_move(container_t *c);
void survival_mode_two(container_t *c);
void survival_mode_three(container_t *c);
void init_hero(container_t *c);
void anim_manager(container_t *c);
void anim_manager_two(container_t *c);
void draw_fist(container_t *c);
void draw_fist_two(container_t *c);
void draw_fist_three(container_t *c);
void draw_fist_four(container_t *c);
void draw_fist_five(container_t *c);
void draw_helmet(container_t *c);
void draw_helmet_two(container_t *c);
void draw_helmet_three(container_t *c);
void draw_helmet_four(container_t *c);
void draw_helmet_five(container_t *c);
void draw_gloves(container_t *c);
void draw_gloves_two(container_t *c);
void draw_gloves_three(container_t *c);
void draw_gloves_four(container_t *c);
void draw_gloves_five(container_t *c);
void draw_items(container_t *c);
void init_textures(container_t *c);
void draw_cape(container_t *c);
void destroy_survival_two(container_t *c);
void draw_cape_two(container_t *c);
void init_players(container_t *c);
void init_stats(container_t *c);
void draw_cape_three(container_t *c);
void draw_cape_four(container_t *c);
void draw_cape_five(container_t *c);
void draw_shoes(container_t *c);
void draw_shoes_two(container_t *c);
void draw_shoes_three(container_t *c);
void draw_shoes_four(container_t *c);
void draw_shoes_five(container_t *c);
void rect_anim(container_t *c);
void click_move(container_t *c, int i, int hero);
void init_survival(container_t *c);
void draw_cookie(container_t *c);
void draw_inv(container_t *c);
void survival_inv(container_t *c);
void save_pos(container_t *c, int hero);
void print_info(container_t *c);
void success_manager(container_t *c);
void survival_mode(container_t *c);
void print_info_hero(container_t *c, int i, int hero);
void check_hero_mouse(container_t *c);
int mouse_check(container_t *c, sfVector2f one, sfVector2f two);
int animated_hero_left(int i);
void survival_tree(container_t *c);
void rect_one(container_t *c, int carac);
void rand_left(container_t *c);
void rect_two(container_t *c, int carac);
void rect_three(container_t *c, int carac);
void rect_four(container_t *c, int carac);
void print_info_black(container_t *c);
void check_click(container_t *c);
void print_info(container_t *c);
int rand_i(container_t *c);
void draw_inv_manager(container_t *c);
void draw_items(container_t *c);
void draw_tree(container_t *c);
void animate_hero(container_t *c, int i);
void print_black(container_t *c);
void print_arrow(container_t *c);
void passing_day(container_t *c);
void click_move_four(container_t *c, int i);
void click_move_three(container_t *c, int i);
void click_move_one(container_t *c, int i);
void click_move_two(container_t *c, int i);
void random_hero(container_t *c);
void destroy_survival(container_t *c);
void draw(container_t *c);
void survival_draw_map(container_t *c);
void survival_hero_four(container_t *c);
void survival_hero_three(container_t *c);
void survival_hero_one(container_t *c);
void survival_hero_two(container_t *c);
void dead_manager(container_t *c);
void hero_check_dead(container_t *c);
void hero_check_stat(container_t *c);
void dead_print(container_t *c);

#endif
