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
#include <SFML/Graphics.h>
#include <SFML/Graphics/Export.h>
#include <SFML/Graphics/Rect.h>
#include <SFML/Graphics/Types.h>
#include <SFML/Window/Types.h>
#include <SFML/System/InputStream.h>
#include <SFML/System/Vector2.h>
#include <stddef.h>

struct size {
	sfVector2f scaleBACK;
	sfIntRect rectDUCK;
	sfVector2f positionDUCK;
	sfVector2f scaleDUCK;
	sfIntRect rectDOG;
	sfVector2f positionDOG;
	sfVector2f scaleDOG;
	sfIntRect rectSHOOT;
	sfVector2f positionSHOOT;
	sfVector2f scaleSHOOT;
	sfVector2f positionGRASS;
	sfVector2f scaleGRASS;
	sfVector2f positionGREEN;
	sfVector2f scaleGREEN;
	sfIntRect rectGREEN;
};

struct time {
	sfClock *Clock;
	sfTime time;
};

struct sprite {
	sfSprite *sprite;
	sfSprite *sprite2;
	sfSprite *sprite3;
	sfSprite *sprite4;
	sfSprite *sprite5;
	sfSprite *sprite6;
};
struct window {
	sfTexture *duck;
	sfTexture *grass;
	sfTexture *green;
	sfRenderWindow *window;
	sfEvent event;
	sfTexture *background;
};

int main (int, char **);
int main_display(int);
void close_window(sfRenderWindow *, sfEvent);
int analyse_events(int, struct window, struct size, int);
struct window loading_textures(struct window);
struct size main_game(struct window, int, struct size, int);
struct size display_duck(sfTexture *, sfRenderWindow *, struct size);
int rectDUCK_left(int);
int rectDUCK_x(int);
int rectDUCK_y(int, int);
void display_dog(sfTexture *, sfRenderWindow *, int);
int rectDOG_left(int);
int rectDOG_x(int);
int rectDOG_y(int);
int rectDOG_top(int);
int Check_shoots(int);
void display_shoot(sfTexture *, sfRenderWindow *, int, sfEvent);
int rectbullet_width(int);
struct size duck_hit(struct size, int, struct window, int);
void duck_hit2(struct size *, struct window, struct size);
void duck_hit3(struct window, struct size);
int hit_width(int);
int hit_left(int);
int hit_height(int);
int hit_y(int, int);
void display_grass(sfTexture *, sfRenderWindow *);
void duck_hit4(struct window, struct size);
int hit4_y(int, int);
struct size display_green(sfTexture *, sfRenderWindow *, int, struct size);
int marker(int);
void duck_hit5(struct window, struct size);
int hit5_y(int, int);
int hit5_left(int);
void Check_shoots2(int, struct size *, struct window, struct size);
int duck_top(int, int);


#endif
