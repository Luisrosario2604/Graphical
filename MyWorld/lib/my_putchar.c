/*
** EPITECH PROJECT, 2017
** my_putchar
** File description:
** display one character
*/

int my_putchar(char c)
{
	if (write(1, &c, 1) == -1)
		return (-1);
	return (0);
}
