#include "main.h"

/**
 * *_strcpy - copies pointer to a str
 * @dest: first pointer
 * @src: second pointer
 * Return: 0
 */

char *_strcpy(char *dest, char *src)
{
	int a;

	for (a = 0; src[a] != '\0'; a++)
		dest[a] = src[a];
	dest[a] = '\0';
	return (0);
}
