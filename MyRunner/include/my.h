/*
** EPITECH PROJECT, 2017
** include my.h
** File description:
** all
*/

#ifndef MY_H
#define MY_h

#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>
#include <stdio.h>
#include <SFML/Graphics.h>
#include <SFML/Window/Types.h>
#include <SFML/System/InputStream.h>
#include <SFML/System/Vector2.h>
#include <SFML/Graphics/Export.h>
#include <SFML/Graphics/Color.h>
#include <SFML/Graphics/Rect.h>
#include <SFML/Graphics/Types.h>
#include <SFML/Graphics/Transform.h>
#include <SFML/System/Vector2.h>
#include <stddef.h>
#include <SFML/Audio/Export.h>
#include <SFML/Audio/SoundStatus.h>
#include <SFML/Audio/Types.h>
#include <SFML/System/Time.h>
#include <SFML/System/Vector3.h>
#include <SFML/System.h>
#include <SFML/Audio/Listener.h>
#include <SFML/Audio/Music.h>
#include <SFML/Audio/Sound.h>
#include <SFML/Audio/SoundBuffer.h>
#include <SFML/Audio/SoundBufferRecorder.h>
#include <SFML/Audio/SoundRecorder.h>
#include <SFML/Audio/SoundStatus.h>
#include <SFML/Audio/SoundStream.h>

#endif

typedef struct size_s {
	sfVector2f scaleFlag;
	sfVector2f scaleGreen;
	sfIntRect rectGreen;
	sfVector2f positionGreen;
	sfVector2f scaleTunel;
	sfIntRect rectTunel;
	sfVector2f positionTunel;
	sfVector2f scaleBird;
	sfIntRect rectBird;
	sfVector2f positionBird;
	sfVector2f scaleBird2;
	sfIntRect rectBird2;
	sfVector2f positionBird2;
	sfVector2f scaleBackground;
	sfIntRect rectBackground;
	sfVector2f scaleBackground4;
	sfIntRect rectBackground4;
	sfVector2f positionBackground;
	sfVector2f positionBackground4;
	int start;
	char **map;
	int time;
	int bool;
	int lenth;
	int exit;
} size;

struct time {
	sfClock *Clock;
	sfTime time;
};

typedef struct sprite_s {
	sfSprite *sprite1;
	sfSprite *sprite2;
	sfSprite *flag;
	sfSprite *spriteGreen;
	sfSprite *spriteBird;
	sfSprite *spriteBird2;
	sfSprite *tunel;
	sfSprite *menu;
} sprite;

typedef struct window_s {
	sfRenderWindow *window;
	sfEvent event;
	sfTexture *game;
	sfTexture *end;
	sfTexture *background;
	sfTexture *arrow;
	sfText *score;
	int scoreig;
	sfFont *font;
	sfVector2f scaleText;
	sfVector2f positionText;
	int pause;
	sfMusic *wing;
	sfMusic *music;
	sfMusic *hit;
	sfMusic *point;
	int infinite;
	int dead;
} window;

int my_putchar(char);
int my_putnbr(int);
int my_putstr(char const *);
void display_background(window *, sprite *, int, size *);
void display_background2(window *, sprite *, int, size *);
void display_background3(window *, sprite *, int, size *);
void display_background4(window *, sprite *, int, size *);
void display_background5(window *, sprite *, int, size *);
void display_background6(window *, sprite *, int, size *);
void display_green(window *, sprite *, int, size *);
void display_green2(window *, sprite *, int, size *);
void display_green3(window *, sprite *, int, size *);
void display_bird(window *, int, size *, sprite *);
void main_game( window *, size *, sprite *);
void display_start(window *, size *, sprite *);
void neutral(size *, sprite *, window *);
int my_putchar(char);
int my_putstr(char const *);
void close_window(sfRenderWindow *, sfEvent);
int main (int, char **);
void loading_textures(window *);
int main_display(size *, sprite *, window *);
int counter1(int);
int counter2(int);
int top_bird(int);
int left_bird(int);
float rotation_bird(int);
int up_bird(int);
void events(size *, window *, sprite *);
int down_bird(int);
int rotation_posx(int);
int rotation_posy(size *);
void display_tunel(window *, sprite *, size *);
void display_down(window *, sprite *, size *, int);
void display_up(window *, sprite *, size *, int);
void display_basic(window *, sprite *, size *, int);
char **map_load(char *);
char *map_loading(char *);
char **map_load2(char *, int, int);
int columns_counter(char *);
int lines_counter(char *);
int counter4(int);
void start_all(sprite *, window *);
void free_all(sprite *, window *, struct time);
void display_score(window *, size *, int);
char *display_score2(window *);
int size_file(char *);
void dead_bird(size *, window *, sprite *, int);
char *my_revstr(char *);
void display_pause(window *, sprite *, size *);
int pause_check(window *);
void display_dead_menu(size *, window *, sprite *, int);
void display_bird_dead(size *, window *, sprite *, int);
int counter_c(int);
int counter_d(int);
int counter_b(int);
int counter_e(int);
void display_flag(window *, sprite *, size *);
void display_point(size *, window *);
void display_speed(window *, sprite *, size *);
void display_help(void);
void display_help2(void);
void free_main(size *, sprite *, window *);
void display_tunel_two(window *, sprite *, size *, int);
int main_two(int, char **);
void display_bird_two(window *, int, size *, sprite *);
void main_game_b(window *, size *, sprite *, int);
void main_game_e(window *, size *, sprite *, int);
void main_game_c(window *, size *, sprite *, int);
void display_medal(size *, window *, sprite *, int);
int medal_left(int);
int medal_top(int);
void display_help3(void);
