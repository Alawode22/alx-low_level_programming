#include "main.h"

/**
 * more_numbers - print more numbers
 *
 * Return: void
 */

void more_numbers(void)
{
	char x;

	char d;

	for (x = '0'; x <= '14'; x++)
	{
		for (d = '0'; d <= 10; d++)
		_putchar(x);
	}
	_putchar('\n');
}
