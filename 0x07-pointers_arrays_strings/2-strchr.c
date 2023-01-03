#include "main.h"

/**
 * _strchr - locates a character string
 * @c: char to be checked
 * @s: string
 * Return: pointer to c or NULL
 */

char *_strchr(char *s, char c)
{
	int i = 0;

	for (; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
			return (&s[c]);
	}
}
