#include "main.h"

/**
 * puts2 - print the other char of a str
 * @str: char to be printed
 * Return: 0
 */

void puts2(char *str)
{
	int b;

	for (b = 0; str[b] != '\0'; b++)
	if (b % 2 == 0)
		_putchar(b);
	_putchar('\n');
}	
