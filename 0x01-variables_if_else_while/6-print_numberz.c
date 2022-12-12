#include <stdio.h>
/**
 * main - Print all single digit of base 10
 *
 * Return: Always 0
 */

int main(void)
{
	int g;

	g = 0;
	while (g < 10)
	{
		putchar(g + '0');
		g++;
	}
	putchar('\n');
	return (0);
}
