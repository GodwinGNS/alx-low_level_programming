#include "main.h"
/**
 * _memset - fill memory with a constant byte
 * @s: memory area
 * @b: constant byte
 * @n: byte filled
 * Return: pointer s  to memory area
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		*(s + i) = b;

	return (s);
}
