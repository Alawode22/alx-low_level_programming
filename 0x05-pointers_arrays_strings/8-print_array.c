#include "main.h"
#include <stdio.h>

/**
 * print_array - print int in in an array
 *@a: array of int
 *@n: num of int to be printed
 * Return: 0
 */

void print_array(int *a, int n)
{
	int x;

	for (x = 0; x < n; x++)
		if (x != n - 1)
			printf("%d, ", a[x]);
		else
			printf("%d", a[x]);
	_putchar('\n');
}
