/*
** EPITECH PROJECT, 2017
** my_putstr
** File description:
**
*/

int my_putstr(char const *str)
{
	while (*str)
		my_putchar(*str++);
	return (0);
}
