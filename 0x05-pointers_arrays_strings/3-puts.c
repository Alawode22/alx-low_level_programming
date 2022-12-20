#include "main.h"

/**
 * _puts - prints a string
 * @str: char to be printed
 * Return: 0
 */

void _puts(char *str)
{
	int a;

	a = 0;
	while (str[a] != '\0')
	{
		_putchar(str[a]);
		a++
	}
	_putchar('\n');
}
