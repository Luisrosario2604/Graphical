/*
** EPITECH PROJECT, 2017
** my_hunter
** File description:
** Game1
*/

#include "my.h"

void display_shoot(sfTexture *s, sfRenderWindow *win, int shoots, sfEvent event)
{
	struct size shoot;
	struct sprite sprite_shoot;
	shoot.rectSHOOT.top = 255;
	shoot.rectSHOOT.left = 400;
	shoot.rectSHOOT.width = rectbullet_width(shoots);
	shoot.rectSHOOT.height = 8;
	shoot.positionSHOOT.x = 94;
	shoot.positionSHOOT.y = 830;
	shoot.scaleSHOOT.x = 3.8;
	shoot.scaleSHOOT.y = 3.8;
	sprite_shoot.sprite4 = sfSprite_create();
	sfSprite_setTexture(sprite_shoot.sprite4, s, sfTrue);
	sfSprite_setTextureRect(sprite_shoot.sprite4, shoot.rectSHOOT);
	sfSprite_setPosition(sprite_shoot.sprite4, shoot.positionSHOOT);
	sfSprite_setScale(sprite_shoot.sprite4, shoot.scaleSHOOT);
	sfRenderWindow_drawSprite(win, sprite_shoot.sprite4, NULL);
}

void display_dog(sfTexture *dog_text, sfRenderWindow *window, int a)
{
	struct size dog;
	struct sprite sprite_dog;
	dog.rectDOG.top = rectDOG_top(a);
	dog.rectDOG.left = rectDOG_left(a);
	dog.rectDOG.width = 55;
	dog.rectDOG.height = 45;
	dog.positionDOG.x = rectDOG_x(a);
	dog.positionDOG.y = rectDOG_y(a);
	dog.scaleDOG.x = 2.7;
	dog.scaleDOG.y = 2.7;
	sprite_dog.sprite2 = sfSprite_create();
	sfSprite_setTexture(sprite_dog.sprite2, dog_text, sfTrue);
	sfSprite_setTextureRect(sprite_dog.sprite2, dog.rectDOG);
	sfSprite_setPosition(sprite_dog.sprite2, dog.positionDOG);
	sfSprite_setScale(sprite_dog.sprite2, dog.scaleDOG);
	sfRenderWindow_drawSprite(window, sprite_dog.sprite2, NULL);
}

void display_background(sfTexture *background_text, sfRenderWindow *window)
{
	struct sprite sprite_background;
	struct size back;
	back.scaleBACK.x = 4;
	back.scaleBACK.y = 4;
	sprite_background.sprite = sfSprite_create();
	sfSprite_setTexture(sprite_background.sprite, background_text, sfTrue);
	sfSprite_setScale(sprite_background.sprite, back.scaleBACK);
	sfRenderWindow_drawSprite(window, sprite_background.sprite, NULL);
}

struct size display_green(sfTexture *green_text, sfRenderWindow *window, int a, struct size gren)
{
	struct sprite sprite_green;
	gren.scaleGREEN.x = 4;
	gren.scaleGREEN.y = 4;
	gren.positionGREEN.y = 0;
	gren.positionGREEN.x = 0;
	gren.rectGREEN.left = 0;
	gren.rectGREEN.top = 0;
	if (a == 0)
		gren.rectGREEN.width = 90;
	gren.rectGREEN.width = gren.rectGREEN.width;
	gren.rectGREEN.height = 1024;
	sprite_green.sprite6 = sfSprite_create();
	sfSprite_setTexture(sprite_green.sprite6, green_text, sfTrue);
	sfSprite_setTextureRect(sprite_green.sprite6, gren.rectGREEN);
	sfSprite_setScale(sprite_green.sprite6, gren.scaleGREEN);
	sfSprite_setPosition(sprite_green.sprite6, gren.positionGREEN);
	sfRenderWindow_drawSprite(window, sprite_green.sprite6, NULL);
	return (gren);
}

void display_grass(sfTexture *grass_text, sfRenderWindow *window)
{
	struct sprite sprite_grass;
	struct size gras;
	gras.scaleGRASS.x = 4;
	gras.scaleGRASS.y = 4;
	gras.positionGRASS.y = 72;
	gras.positionGRASS.x = 0;
	sprite_grass.sprite5 = sfSprite_create();
	sfSprite_setTexture(sprite_grass.sprite5, grass_text, sfTrue);
	sfSprite_setScale(sprite_grass.sprite5, gras.scaleGRASS);
	sfSprite_setPosition(sprite_grass.sprite5, gras.positionGRASS);
	sfRenderWindow_drawSprite(window, sprite_grass.sprite5, NULL);
}
