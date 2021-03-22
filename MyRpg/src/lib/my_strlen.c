/*
** EPITECH PROJECT, 2017
** my_putchar
** File description:
** count str lenth
*/

#include "include.h"
#include "struct.h"
#include "function.h"

int my_strlen(char *s)
{
	int count = 0;

	for (int i = 0; s[i] != '\0'; i++) {
		count++;
	}

	return (count);
}
