#include <stdio.h>
/**
 * main - Print alphabets in reverse
 *
 * Return: Always 0
 */

int main(void)
{
	char h;

	h = 'z';
	while (h >= 'a')
	{
		putchar(h);
		h--;
	}
	putchar('\n');
	return (0);
}
