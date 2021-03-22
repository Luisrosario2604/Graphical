/*
** EPITECH PROJECT, 2017
** my_runner
** File description:
** bird.c
*/

#include "my.h"

int height_start(int a)
{
	while (a > 20)
		a = a - 20;
	if (a >= 10)
		return ((-a + 10 )* 2);
	else
		return ((a - 10) * 2);
}

void display_start2(window *windw, size *bird, sprite *sprt)
{
	int d = counter_b(bird->time);
	bird->rectBird2.left = 145;
	bird->rectBird2.top = 173;
	bird->rectBird2.width = 98;
	bird->rectBird2.height = 22;
	bird->positionBird2.y = height_start(d) + 100;
	bird->positionBird2.x = 420;
	bird->scaleBird2.x = 4.26;
	bird->scaleBird2.y = 4.26;
	sfSprite_setTexture(sprt->spriteBird2, windw->game, sfTrue);
	sfSprite_setTextureRect(sprt->spriteBird2, bird->rectBird2);
	sfSprite_setScale(sprt->spriteBird2, bird->scaleBird2);
	sfSprite_setPosition(sprt->spriteBird2, bird->positionBird2);
	sfRenderWindow_drawSprite(windw->window, sprt->spriteBird2, NULL);
}

void neutral(size *bird, sprite *sprt, window *windw)
{
	bird->rectBird.width = 18;
	bird->rectBird.height = 13;
	bird->scaleBird.x = 4.26;
	bird->scaleBird.y = 4.26;
	bird->positionBird.y = 400;
	display_start(windw, bird, sprt);
	display_start2(windw, bird, sprt);
}

void display_bird_two(window *windw, int a, size *bird, sprite *sprt)
{
	float rotation = rotation_bird(bird->start);
	bird->positionBird.y = rotation_posy(bird);
	bird->positionBird.x = rotation_posx(bird->start);
	bird->rectBird.left = left_bird(a);
	bird->rectBird.top = top_bird(a);
	sfSprite_setTexture(sprt->spriteBird, windw->game, sfTrue);
	sfSprite_setTextureRect(sprt->spriteBird, bird->rectBird);
	sfSprite_setScale(sprt->spriteBird, bird->scaleBird);
	sfSprite_setPosition(sprt->spriteBird, bird->positionBird);
	sfSprite_setRotation(sprt->spriteBird, rotation);
	sfRenderWindow_drawSprite(windw->window, sprt->spriteBird, NULL);
}

void display_bird(window *windw, int a, size *bird, sprite *sprt)
{
	if (bird->start == 0) {
		neutral(bird, sprt, windw);
	} else if (bird->start >= 10) {
		bird->start += 1;
		bird->positionBird.y += down_bird(bird->start);
	} else {
		if (bird->start == 1)
			sfMusic_play(windw->wing);
		bird->start += 1;
		bird->positionBird.y -= up_bird(bird->start);
	}
	display_bird_two(windw, a, bird, sprt);
}
