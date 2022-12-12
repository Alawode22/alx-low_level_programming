#include <stdio.h>

/**
 * main - Print all alpabets except q and e
 *
 * Return: Always 0
 */

int main(void)
{
	char f;

	f = 'a';

	while (f <= 'z')
	{
		if (f != 'q' && f != 'e')
		putchar(f);
		f++;
	}
	putchar('\n');
	return (0);
}
