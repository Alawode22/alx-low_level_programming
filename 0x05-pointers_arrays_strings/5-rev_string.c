#include "main.h"

/**
 * rev_string - reverse a string
 * @s: str to be reversed
 *Return: 0
*/

void rev_string(char *s)
{
	int a, b, d;

	char c;

	b = 0;
	while (s[b] != '\0')
		b++;
	a = b - 1;
	for (d = 0; a >= 0 && d < a; a--, d++)
	{
		c = s[d];
		s[d] = s[a];
		s[a] = c;
	}
}
