/*
** EPITECH PROJECT, 2017
** struct.h
** File description:
** All structures
*/

#ifndef STRUCT_H
#define STRUCT_H

typedef struct menu_s {
	sfTexture*background;
	sfSprite *menu;
	sfTexture *button_t;
	sfTexture *how_t;
	sfTexture *exit_t;
	int exit;
	sfVector2f positionText;
	sfTexture *play_t;
	sfIntRect rectButton;
} menu_t;

typedef struct item_s {
	int number;
	sfIntRect rect;
	sfVector2f pos;
	sfVector2f scale;
	char *carac;
} item_t;

typedef struct inv_s {
	int last_taken;
	int last_2_taken;
	int paint;
	int bonzai;
	int card;
	int bear;
	int letter;
	int soupe;
	int smoothie;
	int bottle;
	int honey;
	int chicken;
	int hamburger;
	int apple;
	int fish;
	int gama;
	int sushi;
	int potion;
	int sword_one;
	int sword_two;
	int sword_three;
	int bow_one;
	int bow_two;
	int diamond;
	int sword_ultimate;
	int key;
	int gift;
	int totem;
	sfSprite *inv;
	sfSprite *dead;
	sfTexture *dead_t;
	int taken;
	sfText *text;
	sfFont *font;
} inv_t;

typedef struct tree_s {
	int can;
	int up;
	int shoes;
	int check;
	int fist;
	int gloves;
	int points;
	int cape;
	int helmet;
	sfTexture *item;
	int success1;
	int success2;
	int success3;
	int success4;
	int success5;
} tree_t;

typedef struct survival_s {
	int last_player;
	int player_select;
	int rand;
	int food_one;
	int thirst_one;
	int moral_one;
	int food_two;
	int thirst_two;
	int dead;
	int tree_check;
	int moral_two;
	int food_three;
	int thirst_three;
	int moral_three;
	int food_four;
	int thirst_four;
	int moral_four;
	int pass_day;
	int black_count;
	int random_event;
	int anim_count;
	int replace_one;
	int replace_two;
	int replace_three;
	int replace_four;
	int x_save_one;
	int x_save_two;
	int x_save_three;
	int x_save_four;
	int y_save_one;
	int y_save_two;
	int y_save_three;
	int y_save_four;
	int save_pos;
	int not_moving_one;
	int not_moving_two;
	int not_moving_three;
	int not_moving_four;
	sfTexture *hearth;
	sfTexture *house;
	sfTexture *water;
	sfTexture *meat;
	sfTexture *arrow;
	int move;
	int info;
	int move_one;
	int move_two;
	int move_three;
	int move_four;
	sfTexture *black;
	sfTexture *hero_one;
	sfTexture *hero_two;
	sfTexture *hero_three;
	sfTexture *hero_four;
	int rd_slow;
	int rd_hero;
	int counter;
	sfVector2f pos_one;
	sfVector2f pos_two;
	sfVector2f pos_three;
	sfVector2f pos_four;
	sfIntRect rect_one;
	sfIntRect rect_stats;
	sfIntRect anim_r;
	sfIntRect rect_two;
	sfIntRect rect_three;
	sfIntRect rect_four;
	int save;
	int x_save;
	int y_save;
	sfTexture *info_t;
	sfTexture *map;
	sfTexture *inv;
	sfSprite *anim;
	sfSprite *black_s;
	sfSprite *hero;
	sfSprite *map_s;
	sfSprite *inv_s;
	int inv_check;
} survival_t;

typedef struct window_s {
	int click;
	int xMouse;
	int yMouse;
	sfRenderWindow *window;
	sfEvent event;
} window_t;

typedef struct time_game_s {
	sfClock *Clock;
	sfTime time;
} time_game_t;

typedef struct monster_s
{
	int rect;
	int height;
	int slow;
	int life;
	sfSprite *sprite;
	sfTexture *monster;
} monster_t;

typedef struct game_object
{
	sfSprite *sprite;
	sfTexture *texture;
	sfIntRect *rect;
	sfVector2f *pos;
	int nbr_map;
	int mvmt;
	int anim_nbr;
	int anim_rect;
	int speed_mvmt;
} game_obj;

typedef struct container_s {
	item_t *item;
	menu_t *menu;
	window_t *window;
	inv_t *inv;
	tree_t *tree;
	time_game_t *timer;
	game_obj *map;
	int flag;
	game_obj *heros;
	survival_t *survival;
	monster_t *monster;
} container_t;

#endif
