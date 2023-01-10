#include "main.h"

/**
 * _memcpy - copy the memory area
 * @dest: destiation of memory area
 * @src: source of memory area
 * @n: value of bytes
 * Return: destination
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int r = 0;
	int i = n;

	for (; i > r; r++)
	{
		dest[r] = src[r];
			n++;
	}
	return (dest);
}
