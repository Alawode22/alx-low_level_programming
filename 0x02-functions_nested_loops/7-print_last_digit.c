#include "main.h"

/**
 * print_last_digit - Print last digit of a num
 * @n: int to be printed
 * Return: value of last digit
 */

int print_last_digit(int n)
{
	int x;

	x = n % 10;

	_putchar(x);
	return (n % 10);
}
