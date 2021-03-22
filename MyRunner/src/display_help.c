/*
** EPITECH PROJECT, 2017
** my_runner
** File description:
** display_help.c
*/

#include "my.h"

void display_help3(void)
{
	my_putstr("USAGE :\n");
	my_putstr("        NORMAL USAGE  ->   ./my_runner map.txt\n");
	my_putstr("        INFINITE MODE ->   ./my_runner map.txt -i\n");
	my_putstr("        USAGE         ->   ./my_runner -h\n\n\n");
	my_putstr("MEDALS :\n");
	my_putstr("        You have to reach the flag to get a medal !\n\n");
	my_putstr("         0 < SCORE < 14   ->   Bronze Medal\n");
	my_putstr("        14 < SCORE > 29   ->   Silver Medal\n");
	my_putstr("        29 < SCORE < INF  ->   Gold Medal\n\n\n");
	my_putstr("                             ");
	my_putstr("ENJOY !!\n\n");
}

void display_help2(void)
{
	my_putstr("        [l]           ->   Normal Tunel\n");
	my_putstr("        [d]           ->   Down Tunel\n");
	my_putstr("        [u]           ->   Up Tunel\n");
	my_putstr("        [s]           ->   Speed Boost\n");
	my_putstr("        [p]           ->   Point\n");
	my_putstr("        [f]           ->   Flag\n");
	my_putstr("        [ ]           ->   Void\n");
	my_putstr("        [_]           ->   Ground\n");
	my_putstr("        [0]           ->   End of line\n\n");
	my_putstr("> > > Check Lengend.legend ");
	my_putstr("for more information < < <\n\n\n");
	display_help3();
}

void display_help(void)
{
	my_putstr("\n\n\n\n\n");
	my_putstr("                          ");
	my_putstr("REMAKE FLAPPY BIRD GAME\n\n\n\n\n");
	my_putstr("GOAL :\n");
	my_putstr("        Try to go");
	my_putstr(" far away without touching the tunnels ");
	my_putstr("a score will be displayed when you cross one");
	my_putstr(" of them !\n\n\n");
	my_putstr("KEYBOARD :\n");
	my_putstr("        SPACE         ->   Jump/Start\n");
	my_putstr("        RIGHT ARROW   ->   Play\n");
	my_putstr("        LEFT ARROW    ->   Pause\n");
	my_putstr("        KEY [R]       ->   Restart\n\n\n");
	my_putstr("LEGEND :\n");
	display_help2();
}
