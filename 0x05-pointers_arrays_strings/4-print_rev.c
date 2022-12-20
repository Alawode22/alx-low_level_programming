#include "main.h"

/**
 * print_rev - print a string in reverse
 * @s: str to be printed
 * Return: 0
 */
void print_rev(char *s)
{
	int a, b;

	b = 0;

	while (str[b] != '\0')
		b++;
	for (a = b - 1; a >= 0; b--)
	{
		_putchar(str[a]);
	}
	_putchar('\n');
}
