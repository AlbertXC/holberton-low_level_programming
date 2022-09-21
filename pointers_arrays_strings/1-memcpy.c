#include "main.h"

/**
 * _memcpy - Function that copies memory area
 * @dest: to memory area
 * @src: bytes from memory area
 * @n: bytes to be copied
 *
 * Return: pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int b;

	for (b = 0; b < n; b++)
		*(dest + b) = *(src + b);

	return (dest);
}
