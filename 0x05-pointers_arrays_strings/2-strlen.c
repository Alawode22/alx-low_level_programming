#include "main.h"

/**
 * _strlen - print the length of a string
 * @s: char whose lenght is to be printed
 * Return: 0
 */

int _strlen(char *s)
{
	int a;

	for (; *s++;)
		a++;
	return (a);
}
