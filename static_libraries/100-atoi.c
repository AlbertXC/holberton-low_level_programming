#include "main.h"
#include <stdio.h>

/**
 * _strncat - Function that concatenates two strings
 * @dest: string to append by src
 * @src: string to append to dest
 * @n: number of bytes from src to be append to dest
 *
 * Return: A pointer to the resulting string dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int l = 0, m = 0;

	while (dest[l++])
		m++;

	for (l = 0; src[l] && l < n; l++)
		dest[m++] = src[l];

	return (dest);
}
