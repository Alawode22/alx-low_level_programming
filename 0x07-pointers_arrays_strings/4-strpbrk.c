#include "main.h"

/**
 * _strpbrk - searches for a string
 * @s: string
 * @accept: string
 * Return: 0
 */

char *_strpbrk(char *s, char *accept)
{
	int r;

	while (*s)
	{
		for (r = 0; accept[r]; r++)
		{
			if (*s == accept[r])
			return (s);

		}

		s++
	}
	return ('\0');
}
