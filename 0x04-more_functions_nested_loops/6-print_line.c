#include "main.h"

/**
 *print_line - print a straight line
 *@n: int to be checked
 */

void print_line(int n)
{
	int g;

	for (g = 0; g < n; g++)
	{
		_putchar(g);
	}
	_putchar('\n');
}
