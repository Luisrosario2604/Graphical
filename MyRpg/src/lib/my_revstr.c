/*
** EPITECH PROJECT, 2017
** *my_revstr
** File description:
** reverse a string
*/

#include "include.h"
#include "struct.h"
#include "function.h"

char *my_revstr(char *str)
{
	int i = 0;
	int c = 0;
	int t = 0;
	while (str[c] != '\0')
		c++;
	c--;
	while (i < c) {
		t = str[i];
		str[i] = str[c];
		str[c] = t;
		i++;
		c--;
	}
	return(str);
}
