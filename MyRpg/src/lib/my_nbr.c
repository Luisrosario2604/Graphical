/*
** EPITECH PROJECT, 2017
** my_getnbr
** File description:
** string to int
*/

#include "include.h"
#include "struct.h"
#include "function.h"

int my_nbr(char const *str)
{
	unsigned int i = 0;
	unsigned int count = 0;
	signed int n = 1;
	signed long result = 0;

	while (str[i] == '+' || str[i] == '-') {
		if (str[i] == '-')
			n = -n;
		i = i + 1;
	}
	while (str[i] >= '0' && str[i] <= '9') {
		result = result * 10 + str[i] - '0';
		i = i + 1;
		count = count + 1;
	}
	if (result * n < -2147483648 || result * n > 2147483647 || count > 10)
		return 0;
	return (result * n);
}
