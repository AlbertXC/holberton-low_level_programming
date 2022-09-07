#include "main.h"

/**
 * _strcpy - Function that copies the string
 * @dest: Buffer pointer buffer to by destination
 * @src: String pointed to by source
 *
 * Return: Pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	int c;

	for (c = 0; src[c] != '\0'; c++)
	{
		dest[c] = src[c];
	}
	dest[c++] = '\0';

	return (dest);
}
