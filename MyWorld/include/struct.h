/*
** EPITECH PROJECT, 2017
** struct.h
** File description:
** All structures
*/

#ifndef STRUCT_H
#define STRUCT_H

typedef struct window_s {
	int click;
	int xMouse;
	int yMouse;
	int scene;
	int up;
	sfTexture *click_t;
	int bac;
	sfSprite *click_s;
	int square;
	int map_check;
	int a;
	int clicked;
	sfRenderWindow *window;
	sfEvent event;
	sfView *view;
	sfVector2f point_pos;
	sfMusic *hit;
	sfMusic *music;
	int Xcam;
	int Ycam;
} window_t;

typedef struct map_s {
	sfTexture *map1_t;
	sfTexture *map2_t;
	sfTexture *map3_t;
	sfTexture *load_t;
	sfTexture *reset_t;
	sfSprite *bg;
	sfSprite *map;
	int size;
	int **mapped;
	sfVector2f **mappped_t;
	int color_line;
}maps_t;

typedef struct square_s {
	sfVector2f point1;
	sfVector2f point2;
	sfVector2f point3;
	sfVector2f point4;
}square_t;

typedef struct toolbar_s {
	sfTexture *up;
	sfTexture *corner;
	sfTexture *cube;
	sfTexture *down;
	sfSprite *btn;

}toolbar_t;

typedef struct settings_s {
	sfTexture *settings;
	sfTexture *music;
	sfTexture *music_effects;
	sfTexture *fps;
	sfTexture *color_lines;
	sfTexture *level_o;
	sfTexture *level_50;
	sfTexture *level_100;
	sfTexture *blue;
	sfTexture *green;
	sfTexture *red;
	sfSprite *btn;
}settings_t;

typedef struct sprt_s {
	sfTexture *map_t;
	sfTexture *menu_t;
	sfTexture *button_t;
	sfTexture *text_t;
	sfTexture *set_t;
	sfTexture *back;
	sfTexture *play_t;
	sfVector2f positionback;
	sfVector2f positionText;
	sfSprite *menu;
	sfSprite *back_s;
	sfIntRect rectButton;
	sfSprite *button;
	sfSprite *text;
} sprt_t;

typedef struct time_game_s {
	sfClock *Clock;
	sfTime time;
} time_game_t;

typedef struct container_s {
	window_t *window;
	time_game_t *timer;
	sprt_t *sprt;
	maps_t *maps;
	square_t *square;
	settings_t *settings;
	toolbar_t *toolbar;
	int flag;
} container_t;

#endif
