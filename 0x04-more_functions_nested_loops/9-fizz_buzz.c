#include <stdio.h>

/**
 * main - Print num, fizz and buzz
 *
 * Return: Always 0
 */

int main(void)
{
	int n;

	for (n = 0; n <= 100; n++)
	{
		if (n % 3 == 0)
			printf("Fizz");
		else if (n % 5 == 0)
			printf("Buzz");
		else if ((n % 5 == 0) && (n % 3 == 0))
			printf("FizzBuzz");
		else
			putchar(n);
	}
	putchar('\n');
	return (0);
}
