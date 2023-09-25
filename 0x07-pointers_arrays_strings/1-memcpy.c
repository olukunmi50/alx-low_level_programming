#include "main.h"

/**
 * _memcpy - functions that copy memory area
 * @dest: to memory area
 * @src: bytes from memory area
 * @n: function copies
 * Return: *dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
