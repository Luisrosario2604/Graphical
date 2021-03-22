/*
** EPITECH PROJECT, 2017
** my_runner
** File description:
** counter.c
*/

#include "my.h"

int counter_e(int a)
{
	while (a > 593 / 2) {
		a = a - 593 / 2;
	}
	return (a);
}

int counter_b(int a)
{
	while (a > 593) {
		a = a - 593;
	}
	return (a);
}

int counter_c(int a)
{
	while (a > 625) {
		a = a - 626;
	}
	a = a * 10;
	while (a > 625) {
		a = a - 626;
	}
	return (a);
}

int counter_d(int a)
{
	while (a > 5) {
		a = a - 6;
	}
	return (a);
}
