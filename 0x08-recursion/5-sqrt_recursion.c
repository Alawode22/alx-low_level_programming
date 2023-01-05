#include "main.h"

/**
 * _sqrt_recursion - print the square root of a num
 * @n: input
 * @y: input
 * Return: 0
 */

int _sqrt_recursion(int y, int n)
{
	if (n == 0 || n == 1)
		return (n);
	else if (y * y < n)
		return (_sqrt_recursion(y + 1, n));
	else if (y * y == n)
		return (y);
	else
		return (-1);
}
