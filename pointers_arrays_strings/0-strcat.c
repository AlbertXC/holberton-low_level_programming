#include "main.h"

/**
 * _strcat - Function that concatenates two strings
 * @dest: string to append by src
 * @src: string to append to dest
 *
 * Return: A pointer to the resulting string dest
 */

char *_strcat(char *dest, char *src)
{
	int a, b;

	a = b = 0;
	while (*(dest + a))
		a++;
	while ((*(dest + a) = *(src + b)))
	{
		a++;
		b++;
	}
	return (dest);
}
