/*
** EPITECH PROJECT, 2017
** my_putstr
** File description:
** display char*
*/

#include "include.h"
#include "struct.h"
#include "function.h"

int my_putstr(char const *str)
{
	while (*str)
		my_putchar(*str++);
	return (0);
}
