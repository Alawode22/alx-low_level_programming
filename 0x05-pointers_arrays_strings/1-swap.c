#include "main.h"

/**
 * swap_int - swap the values of two int
 * @a: first int
 * @b: second int
 * Return: 0
 */

void swap_int(int *a, int *b)
{
	int x;

	*a = 98;

	*b = 42;

	printf("a=%p, b=%p", a, b);

	s = *a
	*a = *b;
	*b = *a;

	printf("a=%p, b=%p", a, b);
	return (0);
}
