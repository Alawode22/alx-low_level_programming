#include "main.h"

/**
 * reset_to_98 - reset the value of a pointer to 98
 * @n: pointer whose value is to be changed
 * Return: 0
 */

void reset_to_98(int *n)
{
	int a = 402;

	n = &a;

	printf("n=%p\n", n);

	n = 98;
	printf("n=%p\n", n)
	return (0);
}
