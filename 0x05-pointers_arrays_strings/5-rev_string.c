#include "main.h"

/**
 * rev_string - reverse a string
 * @s: str to be reversed
 *Return: 0
*/

void rev_string(char *s)
{
	int a, b;

	char c;

	b = 0;
	while (s[b] != '\0')
		b++;
	for (a = b - 1; a >= 0; a--)
	{
		c = s[a];
		s[a] = c;
	}
}
