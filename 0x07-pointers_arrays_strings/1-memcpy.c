#include "main.h"
/**
 * _memcpy - copy memory area
 * @n: byte from memory area
 * @src: memory source
 * @dest: memory location
 * Return: pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		*(dest + i) =  *(src + i);

	return (dest);
}
